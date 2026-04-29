// ============================================================
// Lab: More Details about Classes
// Course: Object-Oriented Programming (C++)
// Level: 2nd Year Engineering
// Duration: 60 minutes
// ============================================================

#include <iostream>
#include <string>
#include <cmath>

// ============================================================
// CLASS DEFINITIONS
// ============================================================

class Point {
private:
    double x;
    double y;
public:
    // TODO 1: Constructor with member initializer list (double x, double y)
    Point(double x, double y) : x(x), y(y) {}  // stub — fix initializer

    // TODO 2: const getter for x
    double getX() const { return x; }   // stub — add const

    // TODO 3: const getter for y
    double getY() const { return y; }   // stub — add const

    // TODO 4: const display()
    void display() const { std::cout << "(" << x << ", " << y << ")";}

    // TODO 5: declare Rectangle as friend class
    friend class Rectangle;
};


class Rectangle {
private:
    Point topLeft;
    Point bottomRight;
public:
    // TODO 6: constructor with member initializer list
    Rectangle(double x1, double y1, double x2, double y2)
        : topLeft(x1,y1), bottomRight(x2,y2) {}  // stub — fix initializer

    // TODO 7: const getWidth()
    double getWidth() const { return abs(bottomRight.x - topLeft.x); }  // stub

    // TODO 8: const getHeight()
    double getHeight() const { return abs(topLeft.y - bottomRight.y); }  // stub

    // TODO 9: const getArea()
    double getArea() const { return abs(getHeight() * getWidth()); }  // stub

    // TODO 10: const display()
    void display() const { 
    std::cout << "topLeft: " << "(" << topLeft.x << ", " << topLeft.y << ")" << std::endl;
    std::cout << "bottomRight: " << "(" << bottomRight.x << ", " << bottomRight.y << ")"<< std::endl;
    std::cout << "Width: " << getWidth() <<std::endl;
    std::cout << "Height: " << getHeight() <<std::endl;
    std::cout << "Area: " << getArea()<<std::endl;
    }

    // TODO 11: declare isSameSize as friend function
    friend bool isSameSize();
};


// TODO 12: implement isSameSize
bool isSameSize(const Rectangle& r1, const Rectangle& r2) {
    if(r1.getArea()==r2.getArea())
    return true;
    else
    return false;  // stub
}


class ConstDemo {
private:
    int value;
public:
    // TODO 13: constructor with member initializer list
    ConstDemo(int v) : value(v) {}  // stub — fix initializer

    // TODO 14: const getValue()
    int getValue() const { return value; }  // stub — add const

    // TODO 15: NON-const doubleValue() — multiplies value by 2
    void doubleValue() { value = value * 2; }  // stub

    // TODO 16: const constGetDouble() — returns value * 2 without modifying
    int constGetDouble() const { return value * 2; }  // stub — add const + fix body
};


// ============================================================
// MAIN
// ============================================================
int main() {
    // TODO 17-21: demo code
    std::cout << "Complete the TODOs above!" << std::endl;
    
    Point po1(1,2);
    Rectangle Rec1(1,2,3,4);
    Rectangle Rec2(2,3,5,7);
    
    po1.display();
    std::cout << "\n";
    Rec1.display();
    if(isSameSize(Rec1,Rec2)){
        std::cout << "These are equal" << std::endl;
    }
    else{
        std::cout << "These arent equal" << std::endl;
    }
    
    ConstDemo hey1(12);
    std::cout << hey1.getValue() <<std::endl;
   
    std::cout << hey1.constGetDouble()<<std::endl;
    return 0;
}

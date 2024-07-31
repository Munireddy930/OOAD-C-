#include <iostream>
#define PI 3.14159265358979323846
class Circle {
protected:
    double radius;
public:
    void setRadius(double r) {
        radius = r;
    }
    double areaCircle() {
        return PI * radius * radius;
    }
};
class Rectangle : public Circle {
protected:
    double length, width;
public:
    void setDimensions(double l, double w) {
        length = l;
        width = w;  
    }
    double areaRectangle() {
        return length * width;
    }
};
class Cylinder : public Rectangle {
private:
    double height;
public:
    void setHeight(double h) {
        height = h;
    }
    double volumeCylinder() {
        return areaCircle() * height;
    }
};
int main() {
    Circle circle;
    circle.setRadius(5);
    std::cout << "Area of Circle: " << circle.areaCircle() << std::endl;
    Rectangle rectangle;
    rectangle.setDimensions(4, 6);
    std::cout << "Area of Rectangle: " << rectangle.areaRectangle() << std::endl;
    Cylinder cylinder;
    cylinder.setRadius(3);
    cylinder.setHeight(7);	
    std::cout << "Volume of Cylinder: " << cylinder.volumeCylinder() << std::endl;
    return 0;
}
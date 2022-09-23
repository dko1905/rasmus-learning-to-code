#include <stdio.h>
#include <stdint.h>

class Shape {
private:
    const char *type;
protected:
    Shape(const char *type) : type(type) {}
public:
    const char *GetType() {
        return this->type;
    }
    virtual int GetArea() = 0;
};

class Box : public Shape {
    int width, height;
public:
    Box(int width, int height) : Shape("Box"), width(width), height(height) {}
    int GetArea()  {
        return width * height;
    }
};

class Circle : public Shape {
    int radius;
public:
    Circle(int radius) : Shape("Circle"), radius(radius) {}
    int GetArea() {
        return 3.14 * this->radius * this->radius;
    }
};

int main(void) {
    Shape *s1 = new Box(10, 10);
    Shape *s2 = new Circle(10);
    Shape *s3 = new Circle(1);

    Shape *shapes[3] = {s1, s2, s3};

    for (auto shape : shapes) {
        printf("Type of shape %s\n", shape->GetType());
        printf("Area of shape %i\n", shape->GetArea());
            delete shape;
    }


    return 0;
};

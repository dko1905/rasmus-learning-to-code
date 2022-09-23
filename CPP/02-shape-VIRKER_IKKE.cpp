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
    virtual int GetArea();
};

class Box : public Shape {
    int width, height;
public:
    Box(int width, int height) : Shape("Box"), width(width), height(height) {}
    int GetArea() {
        return width * height;
    }
};

int main(void) {
    Box p = Box(10, 10);

    printf("Type of shape %s\n", p.GetType());
    printf("Area of shape %i\n", p.GetArea());

    return 0;
};

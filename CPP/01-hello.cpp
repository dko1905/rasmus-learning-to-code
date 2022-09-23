#include <stdio.h>
#include <stdint.h>

class Person {
public:
    const char *name;
    Person(const char *name) {
        this->name = name;
    }
    void SayHello() {
        printf("%s says 'hello'\n", this->name);
    }
};

int main(void) {
    Person p = Person("Hi");
    p.SayHello();
    p.SayHello();
    p.SayHello();

    return 0;
};

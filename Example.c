#include <stdio.h>

struct Person {
    char name[64];
    int age;
};

void updateStruct(struct Person *p, int age) {
    p->age = age;
}

int main() {
    struct Person lowlevellearning;
    updateStruct(&lowlevellearning, 69);

}

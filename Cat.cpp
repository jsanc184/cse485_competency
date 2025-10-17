#include "Cat.h"
#include <iostream>

using namespace std;

Cat(string name)
    : name(name) {}

string getName() const {
    return name;
}

void meow() const {
    cout << name << " meowed!" << endl;
}
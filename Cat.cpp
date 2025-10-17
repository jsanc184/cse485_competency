#include "Cat.h"
#include <iostream>

using namespace std;

Cat(string name)
{
    this->name = name;
}

string getName()
{
    return name;
}

void meow()
{
    cout << name << " meowed!" << endl;
}

void meow()
{
    cout << "You have fed " + name + "!" << endl;
}
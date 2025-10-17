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
    cout << name << " MEOWED and purred!" << endl;
}

void feed()
{
    cout << "You have fed " + name + "!" << endl;
}
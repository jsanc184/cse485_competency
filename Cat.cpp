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
    cout << name << " MEOWED!" << endl;
}

void feed()
{
    cout << name + " gets fed!" << endl;
}
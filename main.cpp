#include "Cat.h"
#include <iostream>

using namespace std;

int main() 
{
    Cat myCat = new Cat("Toast");
    myCat.meow();
    myCat.feed();

    return 0;
}
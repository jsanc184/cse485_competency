#ifndef CAT_H
#define CAT_H

#include <string>

using namespace std;

class Cat {
private:
    string name;

public:
    Cat(string name);

    string getName();

    void meow();
};

#endif
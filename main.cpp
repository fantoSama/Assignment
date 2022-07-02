#include <iostream>
#include "Func.h"

int main() {

    Func * f1 = new Func(false);
    //Func * f2 = new Func(true);
    //Func *f = new Func(3234, *f1, *f2);

    // std::cout << "the value of getVart is: " << f1.getVar() << std::endl;
    // std::cout << "the value of isTrue is: " << f1.isTrue() << std::endl;
    // std::cout << "the value of isFalse is: " << f1.isFalse() << std::endl;
    // std::cout << "the value of isConstant is: " << f1.isConstant() << std::endl;
     std::cout << "the value of getThen is: " << f1->getThen(4554) << std::endl;
     delete f1;

    return 0;
}


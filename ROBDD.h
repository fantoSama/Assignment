#ifndef ASSIGNMENT_ROBDD_H
#define ASSIGNMENT_ROBDD_H

#include "Func.h"

class ROBDD{

public:

    // Constructors
    ROBDD();
    ROBDD(const ROBDD& crArg) = delete;
    ROBDD& operator=(const ROBDD& crArg) = delete;

    // Methods
    Func* genTrue();
    Func* genFalse();
    Func* ite(const Func* i, const Func* t, const Func* e);


private:
    // Members
    const Func* m_cTrue = nullptr;
    const Func* m_cFalse = nullptr;
};

#endif //ASSIGNMENT_ROBDD_H

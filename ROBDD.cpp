#include "ROBDD.h"
#include <algorithm>

Func *ROBDD::genTrue() {
    return m_cTrue;
}

Func *ROBDD::genFalse() {
    return m_cFalse
}

Func *ROBDD::ite(const Func *i, const Func *t, const Func *e) {
    if(i->isTrue())
        return t;
    else if(i->isFalse())
        return e;
    else{
        const unsigned ciVar = std::min( std::min(i->getVar(), t->getVar()), e->getVar() );
        const Func* T = ite(i->getThen(ciVar), t->getThen(ciVar), e->getThen(ciVar));
        const Func* E = ite(i->getElse(ciVar), t->getElse(ciVar), e->getElse(ciVar));
        return Func(ciVar, T, E);
    }
}

ROBDD::ROBDD() {

}

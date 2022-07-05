#include "ROBDD.h"
#include <algorithm>

ROBDD::ROBDD() : m_cTrue(new Func(true)), m_cFalse(new Func(false)) {}

const Func &ROBDD::genTrue() const{
    return *m_cTrue;
}

const Func &ROBDD::genFalse() const {
    return *m_cFalse;
}

const Func &ROBDD::ite(const Func &i, const Func &t, const Func &e) {
    if(i.isTrue())
        return t;
    else if(i.isFalse())
        return e;
    else{
        unsigned ciVar = std::min( std::min(i.getVar(), t.getVar()), e.getVar() );
        const Func& T = ite(*i.getThen(ciVar), *t.getThen(ciVar), *e.getThen(ciVar));
        const Func& E = ite(*i.getElse(ciVar), *t.getElse(ciVar), *e.getElse(ciVar));
        Func* tmp =  new Func(ciVar, T, E);
        return *tmp;
    }
}

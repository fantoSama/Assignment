#include "Func.h"

Func::Func(bool b) : m_ciVar( b ? TRUE : FALSE), m_cThen(nullptr), m_cElse(nullptr){}

Func::Func(unsigned int iVar, const Func&t, const Func&e) : m_ciVar(iVar), m_cThen(&t), m_cElse(&e){}


const Func *Func::getThen(unsigned int iVar) const {
    return iVar == m_ciVar ? m_cThen : this;
}

const Func *Func::getElse(unsigned int iVar) const {
    return iVar == m_ciVar ? m_cElse : this;
}

unsigned int Func::getVar() const {
    return m_ciVar;
}

bool Func::isTrue() const {
    return m_ciVar == TRUE;
}

bool Func::isFalse() const {
    return m_ciVar == FALSE;
}

bool Func::isConstant() const {
    return isTrue() || isFalse();
}






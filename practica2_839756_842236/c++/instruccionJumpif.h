// Autores: Andrei Vlasceanu [839756] & Andres Yubero [842236]

#pragma once

#include "instruccion.h"

class InstruccionJumpif : public Instruccion
{
private:
    int l;

public:
    InstruccionJumpif(int _l);
    virtual void ejecutar(stack<int> *s);
    virtual void listar();
};
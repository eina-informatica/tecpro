// Autores: Andrei Vlasceanu [839756] & Andres Yubero [842236]

#pragma once

#include "instruccion.h"

class InstruccionRead : public Instruccion
{
public:
    virtual void ejecutar(stack<int> *s);
    virtual void listar();
};
// Autores: Andrei Vlasceanu [839756] & Andres Yubero [842236]

#pragma once

#include "instruccion.h"

class InstruccionSwap : public Instruccion
{
public:
    void ejecutar(stack<int> *s);
    void listar();
};
// Forme.cpp

#include "Forme.h"
using namespace std;

Forme::Forme()
{
    suiv = 0;
}

void Forme::setSuiv(Forme* formeSuiv)
{
    suiv = formeSuiv;
}

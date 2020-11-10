// Carre.cpp

#include <iostream>
#include "Segment.h"
#include "Rectangle.h"
#include "Carre.h"
using namespace std;

/* dans la liste d'initialisation on appelle le constructeur de la classe mere
* Rectangle
*/
Carre::Carre(const Segment& cote)
    : Rectangle(cote, cote.longueur())
{
}

void Carre::afficher() const
{
    cout << "carre de perimetre " << perimetre() << " et de surface "
        << surface() << endl;
}

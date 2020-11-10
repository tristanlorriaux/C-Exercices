// Cercle.cpp

#include <iostream>
#include "Point.h"
#include "Forme.h"
#include "Cercle.h"
using namespace std;

const float PI = 3.14;

/* dans la liste d'initialisation on appelle le constructeur de la classe mere
   Forme et de l'objet membre centre
*/
Cercle::Cercle(const Point& cen, double ray)
    : Forme(), centre(cen.getX(), cen.getY())
    // ou centre(cen)     // constructeur par copie de Point
{
    rayon = ray;
}

double Cercle::perimetre() const
{
    return 2 * PI * rayon;
}

double Cercle::surface() const
{
    return PI * rayon * rayon;
}

void Cercle::afficher() const
{
    cout << "cercle de perimetre " << perimetre() << " et de surface "
        << surface() << endl;
}

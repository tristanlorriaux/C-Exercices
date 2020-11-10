// Carre.h

#pragma once
#include "Rectangle.h"
#include "Segment.h"

/* la classe Carre herite des fonctions perimetre, surface et afficher de
   Rectangle et a besoin de redefinir seulement afficher
*/
class Carre : public Rectangle
{
public:
    Carre(const Segment& cote);
    void afficher() const;
};

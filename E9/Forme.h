// Forme.h

#pragma once

class Forme
{
public:
    Forme();
    void setSuiv(Forme* formeSuiv);
    Forme *getSuiv() const      { return suiv; }
    virtual double perimetre() const = 0;
    virtual double surface() const = 0;
    virtual void afficher() const = 0;

private :
    Forme* suiv;
};

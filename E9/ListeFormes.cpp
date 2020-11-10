// ListeFormes.cpp

#include <iostream>
#include "Forme.h"
#include "ListeFormes.h"
using namespace std;

ListeFormes::ListeFormes()
{
    tete = 0;    // liste vide
}

void ListeFormes::ajouter(Forme* pForme)
{
    // insertion en tete de liste de l'objet pointe par pForme
    pForme->setSuiv(tete);
    tete = pForme;
}

void ListeFormes::afficher() const
{
    cout << "****" << endl;
    /* parcours du chainage */
    Forme* p = tete;
    while (p != 0) {
        p->afficher();
        p = p->getSuiv();
    }
}

void ListeFormes::afficherMax() const
{
    double maxPerim = 0, maxSurf = 0;
    Forme* pFormeMaxPerim = 0;
    Forme* pFormeMaxSurf = 0;

    Forme* p = tete;

    /* parcours du chainage */
    while (p != 0) {
        if (p->perimetre() >= maxPerim) {
            pFormeMaxPerim = p;
            maxPerim = p->perimetre();
        }
        if (p->surface() >= maxSurf) {
            pFormeMaxSurf = p;
            maxSurf = p->surface();
        }
        p = p->getSuiv();
    }

    if (pFormeMaxPerim != 0) {
        cout << "perimetre max = " << maxPerim << " par ";
        pFormeMaxPerim->afficher();
    }
    if (pFormeMaxSurf != 0) {
        cout << "surface max = " << maxSurf << " par ";
        pFormeMaxSurf->afficher();
    }
}

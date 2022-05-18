#ifndef GESTION_H
#define GESTION_H
#include "notes.h"

class Gestion
{
    double note;
    unsigned choix;
    Notes notes;
public:
    Gestion(unsigned nombre) : notes(10){}
    int run();
private:
    void menu();
    unsigned choisir(unsigned limite);
    void afficherResultats();
    void tableauNotes();
};

#endif // GESTION_H

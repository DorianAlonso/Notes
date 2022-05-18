#include "notes.h"

Notes::Notes(unsigned taille)
{
this->taille=taille;
    notes = new double[taille];
}

void Notes::supprimer(double note)
{
bool existe = false;
unsigned indice = 0;
while (indice<nombre)
{
    if (notes[indice]==note) {existe = true; break;}
    indice++;
}   if (existe){ notes[indice] = notes [nombre -1]; nombre--;}
}



double Notes::moyenne()
{
    if (nombre==0) return 0.0;
    double somme = notes[0];
    for(unsigned i=1 ; i<nombre ; i++){
        somme = somme + notes[i];
    }
    return somme/ nombre;
}

double Notes::maxi()
{
    if (nombre==0) return 0.0;
    double max = notes[0];
    for(unsigned i=1;i<nombre;i++){
        if(notes[i]>max) max = notes [i];
    }
    return max;

}

double Notes::mini()
{
    if (nombre==0) return 0.0;
    double min = notes[0];
    for(unsigned i=1;i<nombre;i++){
        if(notes[i]<min) min = notes [i];
    }
    return min;

}

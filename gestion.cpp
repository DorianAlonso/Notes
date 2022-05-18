#include <iostream>
#include "gestion.h"
using namespace std;

int Gestion::run()
{
    do{

        menu();
        choix = choisir(3);
        switch (choix){
        case 1:
            cout<<"Note à rajouter:  ";
            cin >> note;
            notes.ajouter (note);
            break;

        case 2:
            cout << "Note à supprimer : ";
            cin >> note;
            notes.supprimer(note);

            break;
        case 3:

            notes.toutSupprimer();

            break;
        }
        afficherResultats();
    }
    while (choix!=0);

    return 0;
}
void Gestion::menu()
{
    cout << "----------------------------------------" <<endl;
    cout << "Ajouter une note -----------------------" <<endl;
    cout << "Enlever une note -----------------------" <<endl;
    cout << "Supprimer toutes les notes -------------" <<endl;
    cout << "Quitter --------------------------------" <<endl;
    cout << "----------------------------------------" <<endl;
    cout << "Votre choix ? " <<endl;
}
unsigned Gestion::choisir (unsigned limite)
{

    unsigned choix;

    do{
        cin>> choix;
        if (choix>limite)
        { cout << "ATTENTION ! Votre choix n'est pas prevu, recommencez" << endl;
            menu();
        }
    }

    while (choix>limite);
    return choix;
}

void Gestion::afficherResultats()
{
    cout << "----------------------------------------" <<endl;
    cout << "Tableau de notes   : ";
    tableauNotes();
    cout << endl;
    cout << "Valeur moyenne     : " << notes.moyenne() << endl;
    cout << "Note la plus haute : " << notes.maxi() << endl;
    cout << "Note la plus basse : " << notes.mini() << endl;
}
void Gestion::tableauNotes()
{
    cout << '[';
    for(unsigned i=0; i<notes.getNombre(); i++) cout << notes[i] << ' ';
    cout << (notes.getNombre()>0 ? "\b]" : "vide]");
}


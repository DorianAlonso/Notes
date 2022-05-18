#ifndef NOTES_H
#define NOTES_H


class Notes
{
public:
    Notes();
    ~Notes();
    Notes(unsigned taille);
    void ajouter(double note);
    void supprimer(double note);
    void toutSupprimer();
    double moyenne();
    double maxi();
    double mini();
    unsigned getNombre();
    double operator[](unsigned indice);

private:
    double *notes;
    unsigned int nombre = 0,taille;

};

inline Notes::~Notes() {delete[] notes;}
inline void Notes::ajouter(double note) { if (nombre<taille) if(note<=20)notes[nombre++] = note;}
inline unsigned Notes::getNombre() {return nombre;}
inline void Notes::toutSupprimer() {nombre = 0;}
inline double Notes::operator[](unsigned indice)  {return notes[indice]; }

#endif // NOTES_H

#ifndef PROTOTIPEDYNAMIC_H_INCLUDED
#define PROTOTIPEDYNAMIC_H_INCLUDED

typedef struct heure heure;
struct heure
{
    int nombre;
    heure *suivant;
};

typedef struct Liste Liste;
struct Liste
{
    heure *premier;
};

heure* initialisationListe();

#endif // PROTOTIPEDYNAMIC_H_INCLUDED

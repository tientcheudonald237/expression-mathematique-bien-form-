#ifndef  __PILE__H__
#define  __PILE__H__
#define n 50

    typedef struct Pile Pile ;
    struct Pile
    { 
        int tete;
        int tab[n];
    };

    
    Pile* initialise(Pile *pile);
    int pile_pleine(Pile *pile);
    Pile* empiler(Pile *pile, char a);
    int pile_vide(Pile *pile);
    void depiler(Pile *pile);
    void afficherPile(Pile *pile);
    char tete_pile(Pile *pile);

#endif

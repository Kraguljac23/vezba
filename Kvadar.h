#ifndef KVADAR_H_INCLUDED
#define KVADAR_H_INCLUDED
#include "Telo.h"
class Kvadar : public Telo{
public:
int a,b,c;

    Povrsina()
    {
        return 2*(a*b+a*c+b*c);
    }
    Zapremina()
    {
        return a*b*c;
    }
    Kvadar()
    {
        a = 2;
        b=3;
        c=4;
    }
    Kvadar(int d, int f, int g)
    {
        a= d;
        b=f;
        c=g;
    }
    Kvadar(const Kvadar& k)
    {
        a=k.a;
        b=k.b;
        c=k.c;
    }
    int GetA()const {return a;}
    int GetB()const {return b;}
    int GetC()const {return c;}
  void  Ispis()
    {
        printf("%i\n", GetA());
        printf("%i\n", GetB());
        printf("%i\n", GetC());
        printf("%i\n", Povrsina());
        printf("%i\n", Zapremina());
    }

};

#endif // KVADAR_H_INCLUDED

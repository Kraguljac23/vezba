#ifndef SPECIJALNOTELO_H_INCLUDED
#define SPECIJALNOTELO_H_INCLUDED
#include "Kocka.h"
#include "JSPPiramida.h"
class SpecijalnoTelo: public Telo{
private:
Kocka a;
JSPPiramida p;
public:
    SpecijalnoTelo(): a(1), p(1){}
    SpecijalnoTelo(int e):a(e), p(e){}
    SpecijalnoTelo(const SpecijalnoTelo& s): a(s.a), p(s.p){}
    Povrsina(){
    return 10*a.a*a.a;
    }
    Zapremina()
    {
        return a.a*a.a*a.a+2*a.a*a.a*a.a/3;
    }
    int GetA() const {return a.a;}
  void  Ispis()
    {
        printf("%i\n", GetA());
        printf("%i\n", Povrsina());
        printf("%i\n", Zapremina());
    }
};



#endif // SPECIJALNOTELO_H_INCLUDED

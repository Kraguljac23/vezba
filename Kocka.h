#ifndef KOCKA_H_INCLUDED
#define KOCKA_H_INCLUDED
#include "Kvadar.h"
class Kocka: public Kvadar{
private:

public:
    Kocka():Kvadar(2, 2, 2){}

    Kocka(int b):Kvadar(b, b, b){}
    Kocka(const Kocka& k):Kvadar(k.a, k.a, k.a){}


};

#endif // KOCKA_H_INCLUDED

#include <iostream>

using namespace std;
#include "SpecijalnoTelo.h"
int main()
{
    Kvadar a;
    a.Ispis();
 Kocka b;
 b.Ispis();
 Kocka c(5);
 c.Ispis();
 Kocka e(c);
 e.Ispis();
 Piramida p;
 p.Ispis();
 JSPPiramida g;
 g.Ispis();
 JSPPiramida q(7);
 q.Ispis();
 JSPPiramida w(q);
 q.Ispis();
 SpecijalnoTelo t;
 t.Ispis();
 SpecijalnoTelo h(7);
 h.Ispis();
 SpecijalnoTelo x(h);
 x.Ispis();

    return 0;
}

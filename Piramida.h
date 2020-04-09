#ifndef PIRAMIDA_H_INCLUDED
#define PIRAMIDA_H_INCLUDED

class Piramida : public Telo{

private:
    int a, h;
public:
    Piramida()
    {
        a = 2;
        h = 3;
    }
    Piramida(int f, int g){a=f; h=g;}
    Piramida(const Piramida& p){a = p.a; h = p.h;}
    Povrsina(){return 2*a*h+a*a;}
    Zapremina(){return a*a*h/3;}
    int GetA() const {return a;}
    int GetH() const {return h;}
    void Ispis()
    {
        printf("%i\n",  GetA());
        printf("%i\n", GetH());
        printf("%i\n", Povrsina());
        printf("%i\n", Zapremina());
    }

};

#endif // PIRAMIDA_H_INCLUDED

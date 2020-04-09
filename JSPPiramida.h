#ifndef JSPPIRAMIDA_H_INCLUDED
#define JSPPIRAMIDA_H_INCLUDED
#include "Piramida.h"
class JSPPiramida: public Piramida{

public:
JSPPiramida():Piramida(2,2){}
JSPPiramida(int b): Piramida(b, b){}
JSPPiramida(const JSPPiramida& p): Piramida(p.GetA(), p.GetA()){}

} ;

#endif // JSPPIRAMIDA_H_INCLUDED

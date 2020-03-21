#include <iostream>
using namespace std;

define MAX_TEMPERATURA 220;
define MIN_TEMPERATURA 0;
define KORAK_ZAGREVANJA 

enum stanjeRerne(UKLJUCENA, ISKLJUCENA, POKVARENA);

class rerna{

private:
int temperatura;
stanjeRerne trenutnoStanje;

public
rerna();

bool ukljuci();
bool iskljuci();
bool pokvari();
bool popravi();
bool povecajTemperaturu();
bool smanjuTemperaturu();

stanjeRerne trenutnoStanje() const;
int getTemperatura() const;
};

include "rerna.hpp"

rerna::rerna(){
trenutnoStanje = ISKLJUCENA;
temperatura = MIN_TEMPERATURA:
}

bool rerna::ukljuci(){
  bool uspesno;
  
  if(trenutnoStanje == ISKLJUCENA){
  trenutnoStanje = UKLJUCENA;
  temperatura = temperatura + KORAK_ZAGREVANJA;
  uspesno = true;
  }else{
  uspesno = false;
  }
  return uspesno;
  }

bool rerna::iskljuci(){
  bool uspesno;
  
  if(trenutnoStanje == ukljucena){
    trenutnoStanje = ISKLJUCENA;
    temperatura = MIN_TEMPERATURA;
    uspesno = true;
  }else{
    uspesno = false;
  }
  return uspesno;
}

  bool rerna::popravi(){
    bool uspesno;
    
  if(trenutnoStanje == POKVARENA){
    trenutnoStanje = ISKLJUCENA;
    temperatura = MIN_TEMPERATURA;
    uspesno = true;
  }else{
    uspesno = false;
  }
  return uspesno;
}

bool rerna::pokvari(){
  bool uspesno;
  
if(trenutnoStanje != ISKLJUCENA){
  trenutno stanje = POKVARENA;
  temperatura = MIN_TEMPERATURA;
  uspesno = true;
}else{
  uspesno = false;
}
  return uspesno;
}

bool rerna::povecajTemperaturu(){
  bool uspesno;
  
 if(trenutnoStanje = UKLJUCENA && temperatura + KORAK_ZAGREVANJA <= MAX_TEMPERATURA){
   temperatura = temperatura + KORAK_ZAGREVANJA;
   uspesno = true;
 }else{
   uspesno = false;
 }
  return uspesno;
}

bool rerna::smanjiTemperaturu(){
  bool uspesno;
  
 if(trenutnoStanje = UKLJUCENA && temperatura - KORAK_ZAGREVANJA >= 0){
   temperatura = temperatura - KORAK_ZAGREVANJA;
   usoesno = true;
 }else{
   uspesno = false;
 }
  return uspesno;
}

trenutnoStanje rerna::getTrenutnoStanje() const{
  return trenutnoStanje;
}

int rerna::getTemperatura() const{
  return temperatura;
}

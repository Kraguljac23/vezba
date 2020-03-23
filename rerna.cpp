include "rerna.hpp"

rerna::rerna(){
trenutnoStanje = ISKLJUCENA;
temperatura = MIN_TEMPERATURA:
}

rerna::ukljuci(){
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
rerna::iskljuci(){
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

include "rerna.hpp"

rerna::rerna(){
trenutnoStanje = ISKLJUCENA;
temperatura = MIN_TEMPERATURA:
}

rerna::ukljuci(){
  bool uspesno;
  
  if(trenutnoStanje == ISKLJUCENA){
  trenutnoStanje = UKLJUCENA;
  temperatura = temperatura + ZAGREVANJE_KORAK;
  uspesno = true;
  }else{
  uspesno = false;
  }
  return uspesno;
  }

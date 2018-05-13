/*-----------------------------------
 Petite collection deviendra grande
 
  Astuces glan�es ca et l�
 
-----------------------------------*/


/* Permet de compacter des suites de Serial.Print
    Exemple :
    Serial.print("J'ai ");
    Serial.print(i);
    Serial.print(" bronzes de ");
    Serial.print(j);
    Serial.println(" kilo chacun."); 
    par
    Serial << "J'ai" << i << " bronzes de " << j << " kilo chacun.\n"
    Source : https://playground.arduino.cc/Main/StreamingOutput
    
    Fonctionne avec toutes les librairies d�riv�es comme LCD, SerialUSB, ..."
*/
template<class T> inline Print &operator <<(Print &obj, T arg) { obj.print(arg); return obj; } 


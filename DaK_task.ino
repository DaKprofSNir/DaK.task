/* Exemple d'utilisation de la librairie task */

#include "task.h"

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {

  // clignoter la LED d'un Arduino UNO avec une période de 400ms
  // ici la tâche ne porte pas de nom, on déclare seulement une période
  cron( 200 ){ PORTB ^= 0x20; }


  // Afficher le nombre de millisecondes écoulées toutes les trois secondes
  // la tâche s'appelle Dateheure, ce qui rend le code plus lisible.
  // la variable interne peut être lue et manipulée sous le nom DaKTASK_Dateheure
  task( Dateheure, 3000 ){
      Serial.print("Dateheure courante = ");
      Serial.println( millis() );
      Serial.print("Variable interne = ");
      Serial.println( DaKTASK_Dateheure );
  }//Dateheure
  
  // faire un truc inutile toutes les minutes
  // pour montrer qu'on peut simplement appeler une fonction
  task( ligne, 6000) afficheLigne();
  
  delay(11); // pour simuler d'autres traitements
}


// traitement pour afficher une ligne
void afficheLigne(){
  Serial.println(F("-----------------"));
}//afficheLigne 


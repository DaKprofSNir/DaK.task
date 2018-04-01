# DaK_task


Task permet de lancer un traitement périodique depuis l’intérieur de la boucle loop().
L’objectif est d’obtenir une écriture la plus simple possible pour obtenir une organisation du code sous forme de multitâche coopératif.

##Fonctionnement
C’est une macro C, faisant appel au préprocesseur. 
Task utilise la fonction millis().
La forme la plus simple d'utilisation est cron( delai ) traitement.

##Exemples :
Loop(){
  cron(100){
    //exécuter ce bloc de code toutes les 100 ms
  }
  cron(1000) cetteFonction() ;
}

Il est possible de déclarer un nom de tâche pour ajouter à la lisibilité du code
task( TaskName, periode ){
  // blabla
}// TaskName


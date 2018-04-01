# DaK_task

Task permet de lancer un traitement périodique depuis l’intérieur de la boucle loop().
L’objectif est d’obtenir l'écriture la plus simple possible pour obtenir une organisation du code sous forme de multitâche coopératif.

## Fonctionnement
C’est une macro C, faisant appel au préprocesseur. 
La macro utilise la fonction millis().
La forme la plus simple d'utilisation est cron( periode ) traitement.
La forme task( nomDeTache, periode ) permet une lecture de code est plus évidente, et permet également d'accéder à la variable interne.

## Exemples :
```javascript
Loop(){// ici deux blocs de code s'exécutent en "parallèle"
  cron(100){
    //exécuter ce bloc de code toutes les 100 ms
    ...
  }
  
  cron(1000) uneFonction();
}
```
Il est possible de déclarer un nom de tâche pour ajouter à la lisibilité du code
```javascript
task( TaskName, periode ){
  // blabla
  ...
}// TaskName
```

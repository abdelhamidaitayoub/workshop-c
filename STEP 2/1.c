#include <stdio.h>
#include <stdlib.h>
/*
Pour une gestion du mémoire il est recommandé de creer des constantes sous forme d'expression (Macros),
ce qui est demandé est de creer une constante qui te permet de vérifier si un nombre est superieure à un autre le resultat du retour soit 0 soit 1 ,pour formater le resultat de retour créez un constante qui permet d'afficher si 0 = False si 1 = true
Macro : MAX(a,b)
Nota bene : il faut creer votre premier type boolean afin de permettre la bonne marche du programme
 */

#define false 0
#define true !false
typedef int bool;

#define MAX(a, b) (a > b) ? true : false

int main() {

  // TESTER LE CODE
  printf("%i", MAX(24, 23));
  return 0;

}
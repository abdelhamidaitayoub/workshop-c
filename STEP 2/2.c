#include <stdio.h>
/*
Creez votre calculatrice conditionnée :
* Ecrivez un programme qui permettra d'entrer deux nombres aux claviers et les afficher avec leur taille en Octet et en Hexadecimal.
* Maintenant Controller les signes : + , - , * , / , % comme char.
* si le signe est + on va faire l'addition des deux nombres
  si le signe est - on va faire la soustraction etc ...

* pour le cas de la division vérifiez si la valeur du diviseur est différente de 0
  si oui faire la division sinon afficher erreur

* Affichez le resultat à l'écran.
* Créez votre arbre de décision

Refaite le meme exercice en utilisant `switch Case`
 */
int main() {
  float nbOne, nbTwo;
  char operator;
  double result;

  printf("-> Entrez les deux nombres separer par espace : ");
  scanf("%i %i", &nbOne, &nbTwo);

  //
  printf("number 1 (%i) : \n\t- Octal : %o\n\t- Hex : %x",nbOne, nbOne, (unsigned char)nbOne);
  printf("\n-------------------\n");
  printf("number 2 (%i) : \n\t- Octal : %o\n\t- Hex : %x",nbTwo, nbTwo, (unsigned char)nbTwo);

  printf("\n\n-> Donnez l'operateur : ");
  scanf(" %c", &operator);

  switch (operator) {
      case '*':
          result = nbOne * nbTwo;
          break;
      case '+':
          result = nbOne + nbTwo;
          break;
      case '-':
          result = nbOne - nbTwo;
          break;
      case '/':
          (nbTwo != 0) ? result = nbOne / nbTwo : printf("\nle Nombre 2 doit etre superieur a 0");
          break;
      case '%':
          result = (int)nbOne % (int)nbTwo;
          break;
      default:
          printf("\noperateur n'est pas valide");
          break;
    }

    printf("\n-------------------------");
    printf("\nLa Resultat est : %.2lf", result);
    printf("\n-------------------------");
  return 0;
}
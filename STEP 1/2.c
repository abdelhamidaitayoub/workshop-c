#include <stdio.h>
/*
a et b sont deux entiers saisies au clavier, calculez et affichez a+b, a-b, a*b, a/b, a%b en
format décimal, et en soignant l’interface homme/machine.
(a/b donne le quotient de la division, a%b donne le reste de la division)
 */
int main() {
    // DECLARATION
    int a, b;
    long result;
    char operateur;

    printf("Entrez le nombre a : ");
    scanf("%i", &a);

    printf("Entrez le nombre b : ");
    scanf("%i", &b);

    printf("Donnez le operateur : ");
    scanf(" %c", &operateur);

    // TRAITEMENT
    switch (operateur) {
      case '*':
          result = a * b;
          break;
      case '+':
          result = a + b;
          break;
      case '-':
          result = a - b;
          break;
      case '/':
          result = a / b;
          break;
      case '%':
          result = a % b;
          break;
      default:
          printf("operateur n'est pas valide");
          break;
    }

    printf("Le Resultat est : %li", result);
    return 0;
}
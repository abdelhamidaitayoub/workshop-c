#include <stdio.h>
/*
Ecrire un programme qui affiche la moyenne d'une suite d'entiers positifs entrés au clavier. On arrêtera la saisie quand le nombre -1 est entré,
comme dans l'exemple suivant :
Entrez un entier positif : 5
Entrez un entier positif :2
Entrez un entier positif :3
Entrez un entier positif :-1
La moyenne de ces 3 entiers vaut 3.333333
 */
int main() {
    int number, somme = 0, i = 0;

    do
    {
      printf("Entrez un entier positif : ");
      scanf("%i", &number);
      if(number >= 0) {
        somme += number;
        i++;
      }
    } while (number != -1);

    // printf("%i", somme);
    printf("La moyenne de ces %i entiers vaut %.2f", i, (float)somme/i);

  return 0;
}
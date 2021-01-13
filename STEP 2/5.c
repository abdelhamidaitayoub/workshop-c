#include <stdio.h>
/*
Ecrivez un programme en C qui va te permettre de saisir un nombre au clavier et de savoir si c'est un nombre premier ou non premier ?

Nota bene : Un nombre premier est un nombre qui est divisé par un et lui meme
 */
int main() {
  int nb, nbDiviseur = 0;

  printf("Saisir Un Nombre : ");
  scanf("%i", &nb);

  for(int i = 1; i <= nb; i++) {
    if(nb % i == 0) {
      nbDiviseur++;
      if(nbDiviseur > 2) break;
    }
  }

  nbDiviseur == 2 ? printf("PREMIER") : printf("N'EST PAS PREMIER");

  return 0;
}
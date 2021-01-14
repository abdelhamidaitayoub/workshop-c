#include <stdio.h>
/*
Calculez le plus grand diviseur commun de deux nombres entrez au clavier
Affichez toutes les étapes du Calcul

+ Algorithme : On veut calculer le pgcd des nombres 21 et 15

pgcd(21,15) =>
Step 1 : 21 = 15 * 1 + 6
Step 2 : 15 = 6 * 2 + 3
....
On va continuer les steps  jusqu'à avoir un diviseur = 0 et un reste = 0.

Refaite le meme exercice avec la boucle while
 */
int main()
{
  int nbOne, nbTwo, reste, petitNombre, grandNombre, quotient, i = 1;

  printf("Entrez le 1er nomber : ");
  scanf("%i", &nbOne);
  printf("Entrez le 2eme nomber : ");
  scanf("%i", &nbTwo);

  if (nbOne > nbTwo)
  {
    grandNombre = nbOne;
    petitNombre = nbTwo;
  }
  else
  {
    grandNombre = nbTwo;
    petitNombre = nbOne;
  }

  do
  {
    reste = grandNombre % petitNombre;
    quotient = grandNombre / petitNombre;
    if (reste != 0)
    {
      grandNombre = petitNombre;
      petitNombre = reste;
    }
    printf("Step %i : %i = %i * %i + %i\n", i, grandNombre, petitNombre, quotient, reste);
    i++;
  } while (reste != 0);

  printf("pgcd(%i,%i) => %i", nbOne, nbTwo, petitNombre);

  return 0;
}

/* 🥼 EXPLICATION
  # 3 Methodes
    - Les listes des diviseurs de chacun des deux nombres.
    - L'algorithme des différences. (ou des soustractions successives)
    - L'algorithme d'Euclide. (ou des divisions successives)

  ## 1. Listes des diviseurs (EX: PGCD(42; 63))
    - DIVISEURS de 42 : 1;2;3;6;7;14;21;42
    - DIVISEURS de 63 : 1;3;7;9;21;63

    Le plus grand diviseur commun de 42 et 63 est : 21
    On écrit, PGCD (42 ; 63) = 21

  ## 2. l'algorithme des différences (EX: 36 et 60)
    💥 Principe : si un nombre est un diviseur de 2 nombres a et b, alors il est aussi un diviseur de leur différence a - b

    --> Commençons par soustraire 36 de 60 :   60 - 36 = 24
    Donc le PGCD de 60 et 36 est un diviseur de 24.
    On continue en utilisant le résultat obtenu et le plus petit des 2 termes de la soustraction :
    36 - 24 = 12
    24 - 12 = 12
    12 - 12 = 0

    --> on prend le résultat juste au-dessus du zéro, c'est le PGCD ! (dernier résultat non nul)
    C’est 12, donc on conclut que PGCD (36;60)= 12

  ## Calculer le PGCD de 357 et 561 à l'aide de l'algorithme d'Euclide

    💥 Le principe est le même que pour les soustractions successives : on soustrait un nombre de l'autre autant de fois qu'on peut et on regarde ce qui reste : cela revient à faire une division euclidienne. Cette méthode est plus rapide en général.

      --> Commençons par effectuer la division euclidienne du plus grand nombre par le plus petit.

        561÷357 (à la calculatrice touche ÷R) on obtient 1 en quotient et 204 en reste.
        561 = 357 x 1 + 204
        Après, on continue :
        On divise le plus petit des deux nombres de la division précédente par le reste de cette division.
        357÷204 ? On obtient : 357 = 204x1 + 153
        Ensuite : 204÷153.On obtient : 204 = 153x1 + 51
        Finalement : 153÷51. On obtient : 153 = 51x3+ 0

      --> Le dernier reste non nul est 51 donc PGCD (357 ; 561) = 51.

        🔥 Remarque: Pour les grands nombres (supérieurs à 100 par exemple), l'algorithme d'Euclide est la méthode la plus rapide en général.
        Ne vous préoccupez jamais des quotients, ils font partie du calcul mais ne servent plus ensuite.
 */
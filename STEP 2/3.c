#include <stdio.h>
/*
Ecrivez une fonction en C qui permet de résoudre une équation du deuxieme degrés ax² + bx + c = 0
les coefficients a,b et c sont saisi à partir du clavier

Hint :
Delta = b²*4*a*c, basez vous cette formule pour trouver les solutions
 */
int main() {


  return 0;
}

/*
#include <stdio.h>
#include <math.h>
 main()
{
//  Calcul des solutions réelles d'une équation du second degré
 int A, B, C;
//  Discriminant
 double D;
 printf("Calcul des solutions réelles d'une équation du second \n");
 printf("degré de la forme   ax^2 + bx + c = 0 \n\n");
 printf("Introduisez les valeurs pour a, b, et c : ");
 scanf("%i %i %i", &A, &B, &C);

// Calcul du discriminant b^2-4ac
 D = pow(B,2) - 4.0*A*C;

 // Distinction des différents cas
 // 0x = 0
 if (A==0 && B==0 && C==0)
 		printf("Tout réel est une solution de cette équation.\n");
  // Contradiction: c # 0 et c = 0
 else if (A==0 && B==0)
 		printf("Cette équation ne possède pas de solutions.\n");
  // bx + c = 0
 else if (A==0)
    {
     printf("La solution de cette équation du premier degré est :\n");
     printf(" x = %.4f\n", (double)C/B);
    }
  // b^2-4ac < 0
 else if (D<0)
     printf("Cette équation n'a pas de solutions réelles.\n");
    //  b^2-4ac = 0
 else if (D==0)
    {
     printf("Cette équation a une seule solution réelle :\n");
     printf(" x =  %.4f\n", (double)-B/(2*A));
    }
    //  b^2-4ac > 0
 else
    {
     printf("Les solutions réelles de cette équation sont :\n");
     printf(" x1 = %.4f\n", (-B+sqrt(D))/(2*A));
     printf(" x2 = %.4f\n", (-B-sqrt(D))/(2*A));
    }
  return 0;
}
*/
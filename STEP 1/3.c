#include <stdio.h>
#include <math.h>
/*
Ecrivez un programme en C qui déclare la variable constante pi et la variable r.
Déclarez trois variables D, P et S calculez respectivement les valeurs du diamètre (D = 2 * PI), du périmètre (P = 2 π R) et de la surface d’un cercle A = (1/4 Pi x diamètre²) ou (A = Rayon² X Pi) dont le rayon est r.
On affichera à l’écran le contenu de ces différentes variables selon le format suivant :
Un cercle de rayon r a pour diamètre D, pour périmetre P et pour surface S.
NB : Le rayon est une entrée du programme (entrer au clavier par l’utilisateur).
 */
int main() {
    const float PI = 3.14;
    float  d, p, s, r;

    printf("Entrez le rayon : ");
    scanf("%f", &r);

    d = 2 * r;
    p = d * PI;
    s = pow(r, 2) * PI;



    printf("Un cercle de rayon %f a pour diamètre %f, pour périmetre %f et pour surface %f.", r, d, p, s);

    return 0;
}
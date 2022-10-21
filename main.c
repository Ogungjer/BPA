#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[5];

    int taille = sizeof(tab) /sizeof(tab[0]);

    printf("taille DOUBLE : %d\n", taille);


   int moy = 0;
   int s = 0;

   tab[0] = -2;
   tab[1] = -8;
   tab[2] = -4;
   tab[3] = -5;
   tab[4] = -6;

   for(int i = 0; i < taille; ++i)
   {
     s = s + tab[i];
   }
   moy = s / taille;
   printf(" la moyenne du tableau est : %d\n", moy);

   // affichage de la valeur max
   int max = 0;
   for(int j = 1; j < taille; ++j)
   {
     if(max < tab[j])
     {
       max = tab[j];
     }
   }
   printf("le max du tableau est : %d", max);

   return 0;
}

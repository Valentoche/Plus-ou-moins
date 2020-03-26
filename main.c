#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int nouvel = 0;
    do
    {


    int niveauDifi = 0;
    int MAX = 0;
    printf("Choisi un niveau de difficulte :\n");
    printf("1 : entre 1 et 100\n");
    printf("2 : entre 1 et 1000\n");
    printf("3 : entre 1 et 10000\n");
    scanf("%d",&niveauDifi);
    if (niveauDifi == 1)
    {
         MAX = 100;
    }
    else if (niveauDifi == 2)
    {
         MAX = 1000;

    }
    else{ MAX = 10000;}
    const int MIN = 1;
    int nombreMystere = 0;
    int nombreChoisi = 0;
    int nombreCoup = 0;

    srand(time(NULL));
    nombreMystere = (rand() % (MAX - MIN +1)) + MIN;
while (nombreChoisi != nombreMystere)
{
    printf("Quel est le nombre ?\n");
    scanf("%d",&nombreChoisi);
    nombreCoup = nombreCoup+1;
    if (nombreChoisi < nombreMystere)
    {
        printf("C'est plus !\n");
    }
    else if(nombreChoisi > nombreMystere)
    {
        printf("C'est moins !\n");
    }
    else{printf("C'est juste en %d coups !!!",nombreCoup);}


}
printf("Veut tu recommencer ?\n");
printf("1 pour recomencer, 2 pour arreter");

    scanf("%d",&nouvel);



}


while (nouvel == 1);
    return 0;
    }

#include <stdio.h>
#include <stdlib.h>

int age = 0;
double weight = 0;

int main(int argc, char **argv) {

    printf("Entrer votre age : ");
    scanf("%d", &age );

    printf( "Entrer votre poids : " );
    scanf( "%lf", &weight );

    printf( "Salut tu est agee de %d ans, et paise %f kg \n", age, weight );

    return 0;
}
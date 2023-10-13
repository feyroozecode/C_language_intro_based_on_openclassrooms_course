#include <stdio.h>
#include <stdlib.h>

double add(int a, int b)
{

    return a + b;
}

double soustraction(int a, int b)
{

    return a - b;
}

double multiply(int a, int b)
{

    return a * b;
}
double divide(int a, int b)
{
    if (b != 0)
    {
        return a / b;
    }

    printf("Error : Impossible to divide by Zero Or enter a valid number");
    return 0;
}

int parcourController(int enter)
{
    printf("Vous voulez continuez (Oui: 0 / Non: 1)");
    scanf("%d", &enter);

    if (enter == 0)
    {
        return 0;
    }

    printf("Au revoir ");
    exit(0);
    return 1;
}

double calculator()
{

    int parcour = 0;
    int operationType;
    double n1, n2, result;

    while (parcour == 0)
    {
        printf("\nAhlan Wa Sahlan to Big C Caluculator \n");
        printf("Enter a first number : ");
        scanf("%lf", &n1);
        printf("Enter a second number: ");
        scanf("%lf", &n2);

        printf("Choississez le type d'operation a effectuer : \n1: Addition \n2: Soustraction\n3: Multiplication \n4: Division \n:");
        scanf("%d", &operationType);

        if (operationType == 1)
        {

            result = add(n1, n2);

            printf("The result is  %f", result);
            parcourController(parcour);
        }
        if (operationType == 2)
        {
            result = soustraction(n1, n2);

            printf("The result is  %f", result);
            parcourController(parcour);
        }
        if (operationType == 3)
        {
            result = multiply(n1, n2);

            printf("The result is  %f", result);
            parcourController(parcour);
        }
        if (operationType == 4)
        {
            result = divide(n1, n2);

            printf("The result is  %f", result);
            parcourController(parcour);
        }
        else
        {
            printf("Erreur d'entrer ! ");
            parcourController(parcour);
            // parcour = 1;
        }
    }
    printf("The result is  %f", result);

    return result;
}

int main(int argc, char **argv)
{

    calculator();

    return 0;
}
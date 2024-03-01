#include <stdio.h>
#include <stdlib.h>

int main() {

  int CHOICES;

  printf("=== MENU ===\n");
  printf("1. Royal Cheese\n");
  printf("2. Anass Bin Malick\n");
  printf("3. Malick Fahad\n");
  printf("4. Ibn Ishaaq H.\n");
  printf("Votre choix : \n");

  scanf("%d", &CHOICES);

  char CHOICE_TEXT;

  switch(CHOICES) {
    case 1: 
	//printf("%c", CHOICE_TEXT);
	*CHOICE_TEXT = "Roayl";
    case 2: 
 	*CHOICE_TEXT = "Anass";
    default: 
	printf("Choix on pris en compte;");
  }

  printf("Vous avez choisis : %c, ", CHOICE_TEXT);

   return 0;
}

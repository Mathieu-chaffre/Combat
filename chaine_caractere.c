#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void fonction(char chaine[]){
  printf("%s\n", chaine );
}


int main() {

  char monCaractere = 'a';
  char chaine[] = "salut a toi!/0";
  char test[10] = "test";
  char parle[]= "";
  char nom[]= "";
  char decision[] = "";

  char fonc[]="";

  scanf("%s", fonc );

  printf("\n");
  fonction(fonc);
  printf("\n");

  printf("Ecris : nom\n");
  scanf("%s", parle );
  printf("tu as ecris : %s\n", parle );
  if (strcpy(parle, "nom")) {
    printf("Quel est ton nom ?\n");
    scanf("%s", nom );
    printf("tu t'appelle %s ?\n", nom );
    scanf("%s", decision );
    if (strcpy(decision, "oui")) {
      printf("D'accord\n");
    }
    else{
      printf("ah merde\n");
    }

  }


  return 0;
}

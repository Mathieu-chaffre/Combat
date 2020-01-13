#include <stdio.h>
int main(){
int vie_joueur = 100;
int vie_ennemi = 100;
int attaque;
int epee = 10;
int attaque_ennemi = 5;
int gagner = 1;
  printf("\ntu possede : %d hp", vie_joueur);
  printf("\n L'ennemie a lui : %d hp", vie_ennemi);
  printf("\ntu as attaquer l'ennemie avec ton epee");
  vie_ennemi = vie_ennemi-epee;
  printf("\nIl reste %d hp au monstre", vie_ennemi );
  printf("\nL'ennemie attaque et t'enleve %d hp\n", attaque_ennemi );
  vie_joueur = vie_joueur - attaque_ennemi;
  printf("\nIl te reste donc %d hp\n", vie_joueur );
  while (gagner == 1) {
    printf("tu veux attaquer l'ennemie ? (1 oui et 2 non)");
    scanf("%d", &attaque);
    if (attaque == 1) {
      printf("\ntu as attaquer l'ennemie avec ton epee");
      vie_ennemi = vie_ennemi-epee;
      printf("\nIl reste %d hp au monstre", vie_ennemi );
      printf("\nL'ennemie attaque et te retire %d hp\n", attaque_ennemi );
      vie_joueur = vie_joueur - attaque_ennemi;
      printf("\nIl te reste donc %d hp\n", vie_joueur );
      if (vie_joueur < 0) {
        printf("tu es mort\n");
      }
    }
    else{
      printf("\nL'ennemie attaque et te retire %d hp\n", attaque_ennemi );
      vie_joueur = vie_joueur - attaque_ennemi;
      printf("\nIl te reste donc %d hp\n", vie_joueur );
      if (vie_joueur < 0) {
        printf("tu es mort\n");
        gagner = 0;
      }
      if (vie_ennemi < 0) {
        printf("Tu as gagner le combat\n");
        gagner = 0;
      }
    }
  }
}

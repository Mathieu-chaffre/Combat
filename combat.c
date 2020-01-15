#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
int vie_joueur = 100;
int vie_ennemi = 100;
int attaque;
int epee = 10;
int attaque_ennemi = 5;
int decision_ennemi;
int gagner = 1;
int point_magie= 100;
int point_magie_ennemie = 100;
int poison_atcif;
int poison_actif_ennemie;
int degat_poison = 1;
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
      srand(time(NULL));
      int nbgen=rand()%2+1;
      decision_ennemi = nbgen;
      if (decision_ennemi == 1) {
        printf("Tu attaque !\n");
        printf("L'ennemie c'est prote"ger !\n");
        epee = 2.5;
        printf("tu n'a fait que %d degats\n", epee);
        vie_ennemi = vie_ennemi - epee;
        printf("L'ennemie a donc %d hp\n",vie_ennemi );
        epee = 10;
      }
      if (decision_ennemi == 2) {
        printf("tu attaque ! \n");
        vie_ennemi = vie_ennemi - epee;
        printf("\nL'ennemie attaque et te retire %d hp\n", attaque_ennemi );
        vie_joueur = vie_joueur - attaque_ennemi;
        printf("\nIl te reste donc %d hp\n", vie_joueur );
        printf("Il reste : %d hp au monstre ! \n", vie_ennemi);

      }
    }
    if (attaque == 2) {
      srand(time(NULL));
      int nbgen=rand()%2+1;
      decision_ennemi = nbgen;
      if (decision_ennemi == 1) {
        printf("tu te defends !\n");
        printf("L'ennemie se defend ! \n" );
        printf("Personne n'a recu de degats\n");
        printf("Il te reste donc : %d hp\n", vie_joueur);
        printf("il reste : %d hp au monstre\n", vie_ennemi);
      }
      if (decision_ennemi == 2) {
        printf("tu te defends ! \n");
        vie_ennemi = vie_ennemi - epee;
        attaque_ennemi = 1;
        printf("\nL'ennemie attaque et te retire %d hp\n", attaque_ennemi );
        vie_joueur = vie_joueur - attaque_ennemi;
        printf("\nIl te reste donc %d hp\n", vie_joueur );
        attaque_ennemi = 5;

      }
    }
    if (attaque == 3 && point_magie > 10) {
      if (decision_ennemi == 1) {
        printf("L'ennemie se defend ! \n" );
        printf("Il te reste donc : %d hp\n", vie_joueur);
        printf("tu lance un sort d'empoisonnement ! \n");
        printf("L'ennemie est empoissoner ! \n");
        poison_atcif = 1;
        degat_poison = degat_poison +1;
        vie_ennemi = vie_ennemi - degat_poison;
        printf("Il reste donc %d hp au monstre ! \n", vie_ennemi);
      }
      if (decision_ennemi == 2) {
        printf("tu lance un sort d'empoisonnement ! \n");
        printf("L'ennemie est empoissoner ! \n");
        poison_atcif = 1;
        degat_poison = degat_poison +1;
        vie_ennemi = vie_ennemi - degat_poison;
        printf("Il reste donc %d hp au monstre ! \n", vie_ennemi);
        printf("\nL'ennemie attaque et te retire %d hp\n", attaque_ennemi );
        vie_joueur = vie_joueur - attaque_ennemi;
        printf("\nIl te reste donc %d hp\n", vie_joueur );
        attaque_ennemi = 5;

      }


    }
    if (vie_joueur <= 0) {
      printf("tu es mort\n");
      gagner = 0;
    }
    if (vie_ennemi <= 0) {
      printf("Tu as gagner le combat\n");
      gagner = 0;
    }
  }
}

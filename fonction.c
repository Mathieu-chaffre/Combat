#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int vie_joueur;
int attaque_j;
int vie_ennemie;
int attaque_ennemi;
int decision_joueur;
int decision_ennemi;
int poison_actif =0;
int poison_actif_ennemie=0;


void defense(){
 printf("L'ennemie se defends\n");
 printf("Tu lui fais moins de dégats\n");
 int save_j = attaque_j;
 attaque_j = attaque_j /2;
 if (decision_joueur == 1) {
   printf("Attaque\n");
   vie_ennemi = vie_ennemi -attaque_j;

 }
 if (decision_joueur == 2) {
   printf("Defense\n");
   printf("pas de degats\n");
 }
 if (decision_joueur == 3) {
   printf("Tu l'empoisonne\n");
   poison_atcif = 1;
 }
 if (decision_joueur == 4) {
   printf("Tu utilise une potion"\n");
 }
    printf(" il reste % hp au monstre\n", vie_ennemi );
    printf("Il te reste %d hp\n", vie_joueur);
    attaque_j = save_j;

}

void attaque() {
  printf("L'ennemie attaque\n");
  if (decision_joueur == 1) {
    printf("Tu attaque\n");
    vie_ennemi = vie_ennemi -attaque_j;
    vie_joueur = vie_joueur - attaque_ennemi;
  }
  if (decision_joueur == 2) {
    /* code */
  }
}


main(){
  printf("choisi ton attaque :\n");
  scanf("%d", decision_joueur);
  if (decision_joueur == 1) {
    srand(time(NULL));
    int nbgen=rand()%3+1;
    decision_ennemi = nbgen;
    if (decision_ennemi == 1) {
      defense()
    }
  }


  return 0
}

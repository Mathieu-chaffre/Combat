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
int gagner =1;


void defense(){
 printf("L'ennemie se defends\n");
 printf("Tu lui fais moins de dégats\n");
 int save_j = attaque_j;
 attaque_j = attaque_j /2;
 if (decision_joueur == 1) {
   printf("Attaque\n");
   vie_ennemie = vie_ennemie -attaque_j;

 }
 if (decision_joueur == 2) {
   printf("Defense\n");
   printf("pas de degats\n");
 }
 if (decision_joueur == 3) {
   printf("Tu l'empoisonne\n");
   poison_actif = 1;
 }
 if (decision_joueur == 4) {
   printf("Tu utilise une potion\n");
   poison_actif_ennemie = 0;
 }
    printf(" il reste % hp au monstre\n", vie_ennemie );
    printf("Il te reste %d hp\n", vie_joueur);
    attaque_j = save_j;

}

void attaque() {
  printf("L'ennemie attaque\n");
  if (decision_joueur == 1) {
    printf("Tu attaque\n");
    vie_ennemie = vie_ennemie -attaque_j;
    vie_joueur = vie_joueur - attaque_ennemi;
  }
  if (decision_joueur == 2) {
    printf("Defense\n");
    int save_ennemie= attaque_ennemi;
    attaque_ennemi = attaque_ennemi /2;
    vie_joueur = vie_joueur - attaque_ennemi;
    attaque_ennemi = save_ennemie;
  }
  if (decision_joueur == 3) {
    printf("Tu l'empoisonne\n");
    poison_actif = 1;
    vie_joueur = vie_joueur - attaque_ennemi;
  }
  if (decision_joueur == 4) {
    printf("potion\n");
    poison_actif_ennemie = 0;
    vie_joueur = vie_joueur - attaque_ennemi;
  }
  printf("il te reste %d hp\n", vie_joueur);
  printf("Il reste %d hp au monstre\n", vie_ennemie );

}

void poison () {
  if (decision_joueur == 1) {
    printf("Attaque\n");
    vie_ennemie = vie_ennemie -attaque_j;
    poison_actif_ennemie = 1;
    printf("Il t'empoisonne\n");
  }
  if (decision_joueur == 2) {
    printf("Il t'empoisonne\n");
    poison_actif_ennemie = 1;
  }
  if (decision_joueur == 3) {
    printf("Vous utiliser un sort d'empoisonnement tout les deux !\n");
    poison_actif = 1;
    poison_actif_ennemie = 1;
  }
  if (decision_joueur == 4) {
    printf("Tu utilise une potion mais l'ennemie utilise un sort d'empoisonnennement\n");
    poison_actif_ennemie = 1;
  }

  printf("il te reste %d hp\n", vie_joueur);
  printf("Il lui reste %d hp\n", vie_ennemie );
}





int main(){
  while (gagner == 1) {
  printf("choisi ton attaque :\n");
  scanf("%d", decision_joueur);
    srand(time(NULL));
    int nbgen=rand()%3+1;
    decision_ennemi = nbgen;
    if (decision_ennemi == 1) {
      defense();
    }
    if (decision_ennemi == 2) {
      attaque();
    }
    if (decision_ennemi == 3) {
      poison();
    }
    if (vie_ennemie <= 0) {
      gagner = 0;
    }
    if (vie_joueur <=0) {
      gagner = 0;
    }
  }
  return 0;
  }

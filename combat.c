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
int degat_poison = 0;
int degat_poison_ennemie =0;
int potion = 10;




  while (gagner == 1) {
    printf("\ntu veux attaquer l'ennemie ? (1 attaque, 2 defense, 3 empoisonnement, 4 potion\n");
    printf("Il te reste %d de potion\n", potion );
    printf("Il te reste %d de point de magie\n", point_magie );
    scanf("%d", &attaque);
    point_magie = point_magie+1;
    point_magie_ennemie = point_magie_ennemie +1;
    if (attaque == 1) {
      srand(time(NULL));
      int nbgen=rand()%3+1;
      decision_ennemi = nbgen;
      if (decision_ennemi == 1) {
        printf("Tu attaque !\n");
        printf("L'ennemie c'est proteger !\n");
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

      if (decision_ennemi == 3 && point_magie_ennemie > 10) {
        printf(" Tu attaque !\n");
        printf(" Tu fais %d degats a l'ennemie\n",  epee);
        vie_ennemi = vie_ennemi - epee;
        printf("il reste %d hp a l'ennemie\n", vie_ennemi );
        printf("L'ennemie lance un empoisonnement. Tu es empoissone !\n");
        poison_actif_ennemie = 1;
        degat_poison_ennemie = degat_poison_ennemie +1;
        point_magie_ennemie = point_magie_ennemie-10;
      }
      if (point_magie_ennemie < 10) {
        srand(time(NULL));
        int nbgen=rand()%2+1;
        decision_ennemi = nbgen;
      }
    }
    if (attaque == 2) {
      srand(time(NULL));
      int nbgen=rand()%3+1;
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
      if (decision_ennemi == 3 && point_magie_ennemie > 10) {
        printf(" Tu te defends !\n");
        printf("il reste %d hp a l'ennemie\n", vie_ennemi );
        printf("L'ennemie lance un empoisonnement. Tu es empoissone !\n");
        poison_actif_ennemie = 1;
        degat_poison_ennemie = degat_poison_ennemie +1;
        point_magie_ennemie = point_magie_ennemie-10;
      }
      if (point_magie_ennemie < 10) {
        srand(time(NULL));
        int nbgen=rand()%2+1;
        decision_ennemi = nbgen;
      }
    }


    if (attaque == 3 && point_magie > 10) {
      srand(time(NULL));
      int nbgen=rand()%3+1;
      decision_ennemi = nbgen;
      if (decision_ennemi == 1) {
        printf("L'ennemie se defend ! \n" );
        printf("Il te reste donc : %d hp\n", vie_joueur);
        printf("tu lance un sort d'empoisonnement ! \n");
        poison_atcif = 1;
        degat_poison = degat_poison +1;
        point_magie = point_magie-10;
      }
      if (decision_ennemi == 2) {
        printf("tu lance un sort d'empoisonnement ! \n");
        poison_atcif = 1;
        degat_poison = degat_poison +1;
        printf("\nL'ennemie attaque et te retire %d hp\n", attaque_ennemi );
        vie_joueur = vie_joueur - attaque_ennemi;
        printf("\nIl te reste donc %d hp\n", vie_joueur );
        attaque_ennemi = 5;
        point_magie = point_magie-10;

      }
      if (decision_ennemi == 3 && point_magie_ennemie > 10) {
        poison_atcif = 1;
        poison_actif_ennemie = 1;
        printf(" Tu empoisonne l'ennemie !\n");
        printf("L'ennemie lance un empoisonnement. Tu es empoissone !\n");
        degat_poison_ennemie = degat_poison_ennemie +1;
        point_magie_ennemie = point_magie_ennemie-10;
        point_magie = point_magie-10;
      }
      if (point_magie_ennemie < 10) {
        srand(time(NULL));
        int nbgen=rand()%2+1;
        decision_ennemi = nbgen;
      }
    }

    if (attaque == 4 && potion > 1) {
      printf("tu prends une potiion de guerison pour l'empoisonnement\n");
      poison_actif_ennemie = 0;
      degat_poison_ennemie = 0;
      potion = potion -1;
      int nbgen=rand()%3+1;
      decision_ennemi = nbgen;
      if (decision_ennemi == 1) {
        printf("L'ennemie se defend ! \n" );
        printf("Personne n'a recu de degats\n");
        printf("Il te reste donc : %d hp\n", vie_joueur);
        printf("il reste : %d hp au monstre\n", vie_ennemi);
      }
      if (decision_ennemi == 2) {
        printf("\nL'ennemie attaque et te retire %d hp\n", attaque_ennemi );
        vie_joueur = vie_joueur - attaque_ennemi;
        printf("\nIl te reste donc %d hp\n", vie_joueur );
        attaque_ennemi = 5;

      }
      if (decision_ennemi == 3 && point_magie_ennemie > 10) {
        printf("L'ennemie lance un empoisonnement. Tu es empoissone !\n");
        poison_actif_ennemie = 1;
        degat_poison_ennemie = degat_poison_ennemie +1;
        point_magie_ennemie = point_magie_ennemie-10;
      }
      if (point_magie_ennemie < 10) {
        srand(time(NULL));
        int nbgen=rand()%2+1;
        decision_ennemi = nbgen;
      }

    }

    if (poison_atcif == 1) {
      printf("L'ennemie est empoissoner !\n" );
      printf("Il prend %d de degats\n", degat_poison);
      vie_ennemi = vie_ennemi - degat_poison;
      printf("Il lui reste %d hp \n", vie_ennemi );
    }

    if (poison_actif_ennemie == 1) {
      printf("tu es empoissoner !\n" );
      printf("tu prends %d de degats\n", degat_poison_ennemie);
      vie_joueur = vie_joueur - degat_poison_ennemie;
      printf("Il te reste %d hp \n", vie_joueur );
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

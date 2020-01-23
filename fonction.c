#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int vie_ennemie = 100;
int attaque_ennemi = 5;
int decision_ennemi;
int save_ennemie;
int gagner =1;
int decision_de_joueur;

struct allier{
  char* nom;
  int vie;
  int attaque;
  int decision;
  int poison_actif_a;
  int degat_poison_a;
  int save;
  int point_magie;
  int poison_actif_ennemi_a;
  int degat_poison_a_ennemie;
  int _attaque_default;


};
typedef struct allier perso;

perso elfe = {"elfe",50, 12, 0, 0, 0, 0, 100,0,0,0};
perso nain = {"nain",150, 8, 0,0,0,0, 30,0,0,0};
perso hobbit = {"hobbit", 90, 7, 0,0,0,0, 80,0,0,0};
perso humain = {"humain",100, 10, 0,0,0,0, 110,0,0,0};


void defense(){
 printf("L'ennemie se defends\n");
 printf("Tu lui fais moins de degats\n");
 humain.save = humain.attaque;
 humain.attaque = humain.attaque /2;

 elfe.save = elfe.attaque;
 elfe.attaque = elfe.attaque/2;

 nain.save = nain.attaque;
 nain.attaque = nain.attaque/2;

 hobbit.save = hobbit.attaque;
 hobbit.attaque = hobbit.attaque/2;


if(decision_de_joueur == 1){
 if (humain.decision == 1) {
   printf("Attaque\n");
   vie_ennemie = vie_ennemie - humain.attaque;

 }
 if (humain.decision == 2) {
   printf("Defense\n");
   printf("pas de degats\n");
 }
 if (humain.decision == 3) {
   printf("Tu l'empoisonne\n");
   humain.poison_actif_a = 1;
   humain.degat_poison_a = humain.degat_poison_a+1;
 }
 if (humain.decision == 4) {
   printf("Tu utilise une potion\n");
   humain.poison_actif_ennemi_a = 0;
   humain.degat_poison_a_ennemie = 1;
 }
}


 //nain
 if(decision_de_joueur == 2){
 if(nain.vie >=0){
 if (nain.decision == 1) {
   printf("Le nain utilise jet de pierre\n");
   vie_ennemie = vie_ennemie - nain.attaque;

 }
 if (nain.decision == 2) {
   printf("Le nain se defend\n");
   printf("pas de degats\n");
 }
 if (nain.decision == 3) {
   printf("Le nain empoisonne l'ennemie\n");
   nain.poison_actif_a = 1;
   nain.degat_poison_a = nain.degat_poison_a+1;
 }
}
}

 //elfe
 if(decision_de_joueur == 3){
if(elfe.vie >=0){
 if (elfe.decision == 1) {
   printf("l'elfe attaque\n");
   vie_ennemie = vie_ennemie - elfe.attaque;

 }
 if (elfe.decision == 2) {
   printf("l'elfe tire sur l'epee de l'ennemie et devie son coup\n");
   printf("pas de degats\n");
 }
 if (elfe.decision == 3) {
   printf("L'elfe lance une attaque d'empoisonnennement\n");
   elfe.poison_actif_a = 1;
   elfe.degat_poison_a = elfe.degat_poison_a+1;
 }
}
}


 //hobbit
 if(decision_de_joueur==4){
if(hobbit.vie >=0){
 if (hobbit.decision == 1) {
   printf("le hobbit attaque\n");
   vie_ennemie = vie_ennemie - hobbit.attaque;

 }
 if (hobbit.decision == 2) {
   printf("le hobbit se defend\n");
   printf("pas de degats\n");
 }
 if (hobbit.decision == 3) {
   printf("Le hobbit lance une attaque d'empoisonnennement\n");
   hobbit.poison_actif_a = 1;
   hobbit.degat_poison_a = hobbit.degat_poison_a+1;
 }

}
}



    printf(" il reste %d hp au monstre\n", vie_ennemie );
    printf("Il te reste %d hp\n", humain.vie);
    printf("Il reste %d hp a l'elfe\n", elfe.vie);
    printf("Il reste %d hp au nain\n", nain.vie);
    printf("Il reste %d hp au hobbit\n", hobbit.vie);
    humain.attaque = humain.save;
    elfe.attaque = elfe.save;
    hobbit.attaque = hobbit.save;
    nain.attaque = nain.save;

}

void attaque() {
  printf("L'ennemie attaque\n");

  if(decision_de_joueur==1){
  if (humain.decision == 1) {
    printf("Tu attaque\n");
    vie_ennemie = vie_ennemie - humain.attaque;
    humain.vie = humain.vie - attaque_ennemi;
  }
  if (humain.decision == 2) {
    printf("Defense\n");
    save_ennemie= attaque_ennemi;
    attaque_ennemi = attaque_ennemi /2;
    humain.vie = humain.vie - attaque_ennemi;
    attaque_ennemi = save_ennemie;
  }
  if (humain.decision == 3) {
    printf("Tu l'empoisonne\n");
    humain.poison_actif_a = 1;
    humain.vie = humain.vie - attaque_ennemi;
    humain.degat_poison_a = humain.degat_poison_a+1;
  }
  if (humain.decision == 4) {
    printf("potion\n");
    humain.poison_actif_ennemi_a = 0;
    humain.vie = humain.vie - attaque_ennemi;
    humain.degat_poison_a_ennemie = 1;
  }
}


  //elfe
  if(decision_de_joueur==2){
  if (elfe.vie) {
  if (elfe.decision == 1) {
    printf("L'elfe attaque\n");
    vie_ennemie = vie_ennemie - elfe.attaque;
    elfe.vie = elfe.vie - attaque_ennemi;
  }
  if (elfe.decision == 2) {
    printf("l'elfe tire sur l'epee de l'ennemie et devie son coup\n");
    save_ennemie= attaque_ennemi;
    attaque_ennemi = attaque_ennemi /2;
    elfe.vie = elfe.vie - attaque_ennemi;
    attaque_ennemi = save_ennemie;
  }
  if (elfe.decision == 3) {
    printf("L'elfe l'empoisonne\n");
    elfe.poison_actif_a = 1;
    elfe.vie = elfe.vie - attaque_ennemi;
    elfe.degat_poison_a = elfe.degat_poison_a+1;
  }
}
}

  //nain
  if(decision_de_joueur){
if(nain.vie >=0){
  if (nain.decision == 1) {
    printf("le nain utilise jet de pierre\n");
    vie_ennemie = vie_ennemie - nain.attaque;
    elfe.vie = elfe.vie - attaque_ennemi;
  }
  if (nain.decision == 2) {
    printf("Le nain se defend\n");
    save_ennemie= attaque_ennemi;
    attaque_ennemi = attaque_ennemi /2;
    nain.vie = nain.vie - attaque_ennemi;
    attaque_ennemi = save_ennemie;
  }
  if (nain.decision == 3) {
    printf("Le nain l'empoisonne\n");
    nain.poison_actif_a = 1;
    nain.vie = nain.vie - attaque_ennemi;
    nain.degat_poison_a = nain.degat_poison_a+1;
  }
}
}

  //hobbit
  if(decision_de_joueur == 4){
  if(hobbit.vie >=0){
  if (hobbit.decision == 1) {
    printf("Le hobbit attaque\n");
    vie_ennemie = vie_ennemie - hobbit.attaque;
    hobbit.vie = hobbit.vie - attaque_ennemi;
  }
  if (hobbit.decision == 4) {
    printf("Le hobbit se defend\n");
    save_ennemie= attaque_ennemi;
    attaque_ennemi = attaque_ennemi /2;
    hobbit.vie = hobbit.vie - attaque_ennemi;
    attaque_ennemi = save_ennemie;
  }
  if (hobbit.decision == 3) {
    printf("Le hobbit l'empoisonne\n");
    hobbit.poison_actif_a = 1;
    hobbit.vie = hobbit.vie - attaque_ennemi;
    hobbit.degat_poison_a = hobbit.degat_poison_a+1;
  }
}
}


  printf(" il reste %d hp au monstre\n", vie_ennemie );
  printf("Il te reste %d hp\n", humain.vie);
  printf("Il reste %d hp a l'elfe\n", elfe.vie);
  printf("Il reste %d hp au nain\n", nain.vie);
  printf("Il reste %d hp au hobbit\n", hobbit.vie);

}

void poison () {

  if(decision_de_joueur==1){
  if (humain.decision == 1) {
    printf("Attaque\n");
    vie_ennemie = vie_ennemie -humain.attaque;
    humain.poison_actif_ennemi_a = 1;
    humain.degat_poison_a_ennemie = humain.degat_poison_a_ennemie +1;
    printf("Il t'empoisonne\n");
  }
  if (humain.decision == 2) {
    printf("Il t'empoisonne\n");
    humain.poison_actif_ennemi_a = 1;
    humain.degat_poison_a_ennemie = humain.degat_poison_a_ennemie +1;
  }
  if (humain.decision == 3) {
    printf("Vous utiliser un sort d'empoisonnement tout les deux !\n");
    humain.poison_actif_a = 1;
    humain.degat_poison_a = humain.degat_poison_a +1;
    humain.degat_poison_a_ennemie = humain.degat_poison_a_ennemie+1;
    humain.poison_actif_ennemi_a = 1;
  }
  if (humain.decision == 4) {
    printf("Tu utilise une potion mais l'ennemie utilise un sort d'empoisonnennement\n");
    humain.degat_poison_a_ennemie = 1;
    humain.poison_actif_ennemi_a = 1;
  }
}

  // elfe
  if(decision_de_joueur==2){
  if(elfe.vie){
  if (elfe.decision == 1) {
    printf("Attaque\n");
    vie_ennemie = vie_ennemie -elfe.attaque;
    elfe.poison_actif_ennemi_a = 1;
    elfe.degat_poison_a_ennemie = elfe.degat_poison_a_ennemie +1;
    printf("L'elfe est empoissonee\n");
  }
  if (elfe.decision == 2) {
    printf("Il empoisonne l'elfe\n");
    elfe.poison_actif_ennemi_a = 1;
    elfe.degat_poison_a_ennemie = elfe.degat_poison_a_ennemie +1;
  }
  if (elfe.decision == 3) {
    printf("L'elfe l'empoisonne et lui aussi !\n");
    elfe.poison_actif_a = 1;
    elfe.poison_actif_ennemi_a =1;
    elfe.degat_poison_a_ennemie = elfe.degat_poison_a_ennemie +1;
    elfe.degat_poison_a = elfe.degat_poison_a+1;
  }
}
}

  //nain
  if(decision_de_joueur == 3){
if(nain.vie >=0){
  if (nain.decision == 1) {
    printf("Attaque\n");
    vie_ennemie = vie_ennemie -nain.attaque;
    nain.poison_actif_ennemi_a = 1;
    nain.degat_poison_a_ennemie = nain.degat_poison_a_ennemie +1;
    printf("Le nain est empoissonee\n");
  }
  if (nain.decision == 2) {
    printf("Il 'empoisonne le nain\n");
    nain.poison_actif_ennemi_a = 1;
    nain.degat_poison_a_ennemie = nain.degat_poison_a_ennemie +1;
  }
  if (nain.decision == 3) {
    printf("le nain l'empoisonne et lui aussi l'empoisonne !\n");
    nain.poison_actif_a = 1;
    nain.poison_actif_ennemi_a = 1;
    nain.degat_poison_a_ennemie = nain.degat_poison_a_ennemie +1;
    nain.degat_poison_a = nain.degat_poison_a+1;
  }
}
}

  //hobbit
  if(decision_de_joueur==4){
if(hobbit.vie >=0){
  if (hobbit.decision == 1) {
    printf("Attaque\n");
    vie_ennemie = vie_ennemie -hobbit.attaque;
    hobbit.poison_actif_ennemi_a = 1;
    hobbit.degat_poison_a_ennemie = hobbit.degat_poison_a_ennemie +1;
    printf("Le nain est empoissonee\n");
  }
  if (hobbit.decision == 2) {
    printf("Il 'empoisonne le nain\n");
    hobbit.poison_actif_ennemi_a = 1;
    hobbit.degat_poison_a_ennemie = hobbit.degat_poison_a_ennemie +1;
  }
  if (hobbit.decision == 3) {
    printf("Le hobbit l'empoisonne et lui aussi l'empoisonne !\n");
    hobbit.poison_actif_a = 1;
    hobbit.poison_actif_ennemi_a = 1;
    hobbit.degat_poison_a_ennemie = hobbit.degat_poison_a_ennemie +1;
    hobbit.degat_poison_a = hobbit.degat_poison_a+1;
  }
}
}

  printf(" il reste %d hp au monstre\n", vie_ennemie );
  printf("Il te reste %d hp\n", humain.vie);
  printf("Il reste %d hp a l'elfe\n", elfe.vie);
  printf("Il reste %d hp au nain\n", nain.vie);
  printf("Il reste %d hp au hobbit\n", hobbit.vie);

}


void ennemie(){
  if (decision_ennemi == 1) {
    defense();
  }
  if (decision_ennemi == 2) {
    attaque();
  }
  if (decision_ennemi == 3) {
    poison();
  }
}

int random(){
  srand(time(NULL));
  int nbgen=rand()%3+1;
  return nbgen;
}
int random2(){
  srand(time(NULL));
  int nbgen=rand()%4+1;
  return nbgen;
}



int main(){




  while (gagner == 1) {
  printf("choisi ton attaque :\n");
  scanf("%d", &humain.decision);
  elfe.decision = random();
  hobbit.decision = random();
  nain.decision = random();



    if (humain.decision == 1) {
      srand(time(NULL));
      int nbgen=rand()%3+1;
      decision_ennemi = nbgen;
      decision_de_joueur = random2();
      ennemie();
    }
    if (humain.decision == 2) {
      srand(time(NULL));
      int nbgen=rand()%3+1;
      decision_ennemi = nbgen;
      decision_de_joueur = random2();
      ennemie();
    }
    if (humain.decision == 3) {
      srand(time(NULL));
      int nbgen=rand()%3+1;
      decision_ennemi = nbgen;
      decision_de_joueur = random2();
      ennemie();
    }
    if (humain.decision == 4) {
      srand(time(NULL));
      int nbgen=rand()%3+1;
      decision_ennemi = nbgen;
      decision_de_joueur= random2();
      ennemie();
    }
    if (humain.poison_actif_a == 1) {
      vie_ennemie = vie_ennemie - humain.degat_poison_a;
      printf("le monstre perd des hp a cause du poison. Il lui reste %d hp\n", vie_ennemie );
    }
    if (elfe.poison_actif_a == 1) {
      vie_ennemie = vie_ennemie - elfe.degat_poison_a;
      printf("le monstre perd des hp a cause du poison. Il lui reste %d hp\n", vie_ennemie );
    }
    if (nain.poison_actif_a == 1) {
      vie_ennemie = vie_ennemie - nain.degat_poison_a;
      printf("le monstre perd des hp a cause du poison. Il lui reste %d hp\n", vie_ennemie );
    }
    if (hobbit.poison_actif_a == 1) {
      vie_ennemie = vie_ennemie - hobbit.degat_poison_a;
      printf("le monstre perd des hp a cause du poison. Il lui reste %d hp\n", vie_ennemie );
    }

    if (humain.poison_actif_ennemi_a == 1) {
      humain.vie = humain.vie - humain.degat_poison_a_ennemie;
      printf(" Tu es empoissoner. il te reste %d hp\n", humain.vie);
    }
    else{
      humain.vie = humain.vie;
    }

    if (elfe.poison_actif_ennemi_a == 1) {
      elfe.vie = elfe.vie - elfe.degat_poison_a_ennemie;
      printf(" elfe est mpoissoner. il lui reste %d hp\n", elfe.vie);
    }
    else{
      elfe.vie = elfe.vie;
    }


    if (nain.poison_actif_ennemi_a == 1) {
      nain.vie = nain.vie - nain.degat_poison_a_ennemie;
      printf(" Le nain est empoissoner. il lui reste %d hp\n", nain.vie);
    }
    else{
      nain.vie = nain.vie;
    }


    if (hobbit.poison_actif_ennemi_a == 1) {
      hobbit.vie = hobbit.vie - hobbit.degat_poison_a_ennemie;
      printf(" Le hobbit est empoissoner. il lui reste %d hp\n", hobbit.vie);
    }
    else{
      hobbit.vie = hobbit.vie;
    }



    if (vie_ennemie <= 0) {
      gagner = 0;
      printf("Tu as gagné !\n", );
    }
    if (humain.vie <=0) {
      gagner =0;
      printf("Tu as perdu ! \n", );
    }
  }
  return 0;
}

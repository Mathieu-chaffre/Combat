#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int xp = 0;
int decision_de_joueur;
int gagner=1;

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
perso ogre = {"ogre", 120, 8, 0,0,0,0, 100, 0, 0,0};
perso slime = {"ogre", 20, 2, 0,0,0,0, 10, 0, 0,0};


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
   ogre.vie = ogre.vie - humain.attaque;

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
   ogre.vie = ogre.vie - nain.attaque;

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
   ogre.vie = ogre.vie - elfe.attaque;

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
   ogre.vie = ogre.vie - hobbit.attaque;

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




//set attaque des joueurs
if(decision_de_joueur != 1){
 if (humain.decision == 1) {
   printf("Attaque\n");
   ogre.vie = ogre.vie - humain.attaque;

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
 if(decision_de_joueur != 2){
 if(nain.vie >=0){
 if (nain.decision == 1) {
   printf("Le nain utilise jet de pierre\n");
   ogre.vie = ogre.vie - nain.attaque;

 }
 if (nain.decision == 2) {
   printf("Le nain te heal\n");
   humain.vie = humain.vie +20;

 }
 if (nain.decision == 3) {
   printf("Le nain empoisonne l'ennemie\n");
   nain.poison_actif_a = 1;
   nain.degat_poison_a = nain.degat_poison_a+1;
 }
}
}

 //elfe
 if(decision_de_joueur != 3){
if(elfe.vie >=0){
 if (elfe.decision == 1) {
   printf("l'elfe attaque\n");
   ogre.vie = ogre.vie - elfe.attaque;

 }
 if (elfe.decision == 2) {
   printf("l'elfe tire sur l'epee de l'ennemie et devie son coup\n");
 }
 if (elfe.decision == 3) {
   printf("L'elfe lance une attaque d'empoisonnennement\n");
   elfe.poison_actif_a = 1;
   elfe.degat_poison_a = elfe.degat_poison_a+1;
 }
}
}


 //hobbit
 if(decision_de_joueur!=4){
if(hobbit.vie >=0){
 if (hobbit.decision == 1) {
   printf("le hobbit attaque\n");
   ogre.vie = ogre.vie - hobbit.attaque;

 }
 if (hobbit.decision == 2) {
   printf("le hobbit se cache\n");
 }
 if (hobbit.decision == 3) {
   printf("Le hobbit lance une attaque d'empoisonnennement\n");
   hobbit.poison_actif_a = 1;
   hobbit.degat_poison_a = hobbit.degat_poison_a+1;
 }

}
}

    printf("%d\n", decision_de_joueur );
    printf(" il reste %d hp au monstre\n", ogre.vie );
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
    ogre.vie = ogre.vie - humain.attaque;
    humain.vie = humain.vie - ogre.attaque;
  }
  if (humain.decision == 2) {
    printf("Defense\n");
    ogre.save= ogre.attaque;
    ogre.attaque = ogre.attaque /2;
    humain.vie = humain.vie - ogre.attaque;
    ogre.attaque = ogre.save;
  }
  if (humain.decision == 3) {
    printf("Tu l'empoisonne\n");
    humain.poison_actif_a = 1;
    humain.vie = humain.vie - ogre.attaque;
    humain.degat_poison_a = humain.degat_poison_a+1;
  }
  if (humain.decision == 4) {
    printf("potion\n");
    humain.poison_actif_ennemi_a = 0;
    humain.vie = humain.vie - ogre.attaque;
    humain.degat_poison_a_ennemie = 1;
  }
}


  //elfe
  if(decision_de_joueur==2){
  if (elfe.vie) {
  if (elfe.decision == 1) {
    printf("L'elfe attaque\n");
    ogre.vie = ogre.vie - elfe.attaque;
    elfe.vie = elfe.vie - ogre.attaque;
  }
  if (elfe.decision == 2) {
    printf("l'elfe tire sur l'epee de l'ennemie et devie son coup\n");
    ogre.save= ogre.attaque;
    ogre.attaque = ogre.attaque /2;
    elfe.vie = elfe.vie - ogre.attaque;
    ogre.attaque = ogre.save;
  }
  if (elfe.decision == 3) {
    printf("L'elfe l'empoisonne\n");
    elfe.poison_actif_a = 1;
    elfe.vie = elfe.vie - ogre.attaque;
    elfe.degat_poison_a = elfe.degat_poison_a+1;
  }
}
}

  //nain
  if(decision_de_joueur == 3){
if(nain.vie >=0){
  if (nain.decision == 1) {
    printf("le nain utilise jet de pierre\n");
    ogre.vie = ogre.vie - nain.attaque;
    elfe.vie = elfe.vie - ogre.attaque;
  }
  if (nain.decision == 2) {
    printf("Le nain se defend\n");
    ogre.save= ogre.attaque;
    ogre.attaque = ogre.attaque /2;
    nain.vie = nain.vie - ogre.attaque;
    ogre.attaque = ogre.save;
  }
  if (nain.decision == 3) {
    printf("Le nain l'empoisonne\n");
    nain.poison_actif_a = 1;
    nain.vie = nain.vie - ogre.attaque;
    nain.degat_poison_a = nain.degat_poison_a+1;
  }
}
}

  //hobbit
  if(decision_de_joueur == 4){
  if(hobbit.vie >=0){
  if (hobbit.decision == 1) {
    printf("Le hobbit attaque\n");
    ogre.vie = ogre.vie - hobbit.attaque;
    hobbit.vie = hobbit.vie - ogre.attaque;
  }
  if (hobbit.decision == 4) {
    printf("Le hobbit se defend\n");
    ogre.save= ogre.attaque;
    ogre.attaque = ogre.attaque /2;
    hobbit.vie = hobbit.vie - ogre.attaque;
    ogre.attaque = ogre.save;
  }
  if (hobbit.decision == 3) {
    printf("Le hobbit l'empoisonne\n");
    hobbit.poison_actif_a = 1;
    hobbit.vie = hobbit.vie - ogre.attaque;
    hobbit.degat_poison_a = hobbit.degat_poison_a+1;
  }
}
}

//decision ogre.attaque


if(decision_de_joueur!=1){
if (humain.decision == 1) {
  printf("Tu attaque\n");
  ogre.vie = ogre.vie - humain.attaque;
  humain.vie = humain.vie - ogre.attaque;
}
if (humain.decision == 2) {
  printf("Defense\n");
}
if (humain.decision == 3) {
  printf("Tu l'empoisonne\n");
  humain.poison_actif_a = 1;
  humain.degat_poison_a = humain.degat_poison_a+1;
}
if (humain.decision == 4) {
  printf("potion\n");
  humain.poison_actif_ennemi_a = 0;
  humain.degat_poison_a_ennemie = 1;
}
}


//elfe
if(decision_de_joueur!=2){
if (elfe.vie) {
if (elfe.decision == 1) {
  printf("L'elfe attaque\n");
  ogre.vie = ogre.vie - elfe.attaque;
  elfe.vie = elfe.vie - ogre.attaque;
}
if (elfe.decision == 2) {
  printf("l'elfe tire sur l'epee de l'ennemie et devie son coup\n");
  printf("tu te prends malheureusement le coup !\n");
}
if (elfe.decision == 3) {
  printf("L'elfe l'empoisonne\n");
  elfe.poison_actif_a = 1;
  elfe.degat_poison_a = elfe.degat_poison_a+1;
}
}
}

//nain
if(decision_de_joueur !=3){
if(nain.vie >=0){
if (nain.decision == 1) {
  printf("le nain utilise jet de pierre\n");
  ogre.vie = ogre.vie - nain.attaque;
  elfe.vie = elfe.vie - ogre.attaque;
}
if (nain.decision == 2) {
  printf("Le nain se désinteresse du combat car il a vu une pépite d'or");
}
if (nain.decision == 3) {
  printf("Le nain l'empoisonne\n");
  nain.poison_actif_a = 1;
  nain.vie = nain.vie - ogre.attaque;
  nain.degat_poison_a = nain.degat_poison_a+1;
}
}
}

//hobbit
if(decision_de_joueur != 4){
if(hobbit.vie >=0){
if (hobbit.decision == 1) {
  printf("Le hobbit attaque\n");
  ogre.vie = ogre.vie - hobbit.attaque;
}
if (hobbit.decision == 4) {
  printf("Le hobbit se cache car il a peur\n");
}
if (hobbit.decision == 3) {
  printf("Le hobbit l'empoisonne\n");
  hobbit.poison_actif_a = 1;
  hobbit.degat_poison_a = hobbit.degat_poison_a+1;
}
}
}

  printf("%d\n", decision_de_joueur );
  printf(" il reste %d hp au monstre\n", ogre.vie );
  printf("Il te reste %d hp\n", humain.vie);
  printf("Il reste %d hp a l'elfe\n", elfe.vie);
  printf("Il reste %d hp au nain\n", nain.vie);
  printf("Il reste %d hp au hobbit\n", hobbit.vie);

}

void poison () {

  if(decision_de_joueur==1){
  if (humain.decision == 1) {
    printf("Attaque\n");
    ogre.vie = ogre.vie -humain.attaque;
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
    printf("L'elfe tire une fleche dans la tete de l'ennemie\n");
    ogre.vie = ogre.vie -elfe.attaque;
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
    printf("le nain donne un coup de hache\n");
    ogre.vie = ogre.vie -nain.attaque;
    nain.poison_actif_ennemi_a = 1;
    nain.degat_poison_a_ennemie = nain.degat_poison_a_ennemie +1;
    printf("Le nain est empoissonee\n");
  }
  if (nain.decision == 2) {
    printf("Il empoisonne le nain\n");
    nain.poison_actif_ennemi_a = 1;
    nain.degat_poison_a_ennemie = nain.degat_poison_a_ennemie +1;
  }
  if (nain.decision == 3) {
    printf("le nain plante sa hache dans l'ennemie et lui aussi l'empoisonne !\n");
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
    printf("Le hobbit devient invisible et attaque\n");
    ogre.vie = ogre.vie -hobbit.attaque;
    hobbit.poison_actif_ennemi_a = 1;
    hobbit.degat_poison_a_ennemie = hobbit.degat_poison_a_ennemie +1;
    printf("Le hobbit est empoissonee\n");
  }
  if (hobbit.decision == 2) {
    printf("Il 'empoisonne le hobbit\n");
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



//ogre.decision



if (decision_de_joueur != 1) {
if (humain.decision == 1) {
  printf("Attaque\n");
  ogre.vie = ogre.vie -humain.attaque;
}
if (humain.decision == 2) {
  printf("tu te défends\n");
}
if (humain.decision == 3) {
  printf("tu l'empoisonne !\n");
  humain.poison_actif_a = 1;
  humain.degat_poison_a = humain.degat_poison_a +1;
}
if (humain.decision == 4) {
  printf("Tu utilise une potion\n");
  humain.degat_poison_a_ennemie = 1;
  humain.poison_actif_ennemi_a = 0;
}
}


// elfe
if (decision_de_joueur !=2) {

if(elfe.vie >= 0){
if (elfe.decision == 1) {
  printf("L'elfe Attaque\n");
  ogre.vie = ogre.vie -elfe.attaque;
}
if (elfe.decision == 2) {
printf("L'elfe tire dans les pieds de l'ennemie\n");
ogre.vie = ogre.vie -2;
}
if (elfe.decision == 3) {
  printf("L'elfe l'empoisonne et lui aussi !\n");
  elfe.poison_actif_a = 1;
  elfe.degat_poison_a = elfe.degat_poison_a+1;
}
}
}


//nain
if(decision_de_joueur != 3){
if(nain.vie >=0){
if (nain.decision == 1) {
  printf("Attaque\n");
  ogre.vie = ogre.vie -nain.attaque;
}
if (nain.decision == 2) {
  printf("le nain se blesse\n");
  nain.vie = nain.vie -1;

}
if (nain.decision == 3) {
  printf("le nain l'empoisonne et lui aussi l'empoisonne !\n");
  nain.poison_actif_a = 1;
  nain.degat_poison_a = nain.degat_poison_a+1;
}
}
}

//hobbit
if(decision_de_joueur!=4){
if(hobbit.vie >=0){
if (hobbit.decision == 1) {
  printf("Le hobbit est ivinsible et attaque !\n");
  ogre.vie = ogre.vie -hobbit.attaque;
}
if (hobbit.decision == 2) {
  printf("le hobbit rigole face au nain\n");

}
if (hobbit.decision == 3) {
  printf("Le hobbit l'empoisonne et lui aussi l'empoisonne !\n");
  hobbit.poison_actif_a = 1;
  hobbit.degat_poison_a = hobbit.degat_poison_a+1;
}
}
}
  printf("%d\n", decision_de_joueur );
  printf(" il reste %d hp au monstre\n", ogre.vie );
  printf("Il te reste %d hp\n", humain.vie);
  printf("Il reste %d hp a l'elfe\n", elfe.vie);
  printf("Il reste %d hp au nain\n", nain.vie);
  printf("Il reste %d hp au hobbit\n", hobbit.vie);

}


void ennemie(){
  if (ogre.decision == 1) {
    defense();
  }
  if (ogre.decision == 2) {
    attaque();
  }
  if (ogre.decision == 3) {
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

int slime_attaque(){
    printf("Tu attaque le slime !\n");
    srand(time(NULL));
    int nbgen=rand()%2+1;
    if (nbgen == 1) {
      printf("Mais le slime gobe ton epee tu fera moins de degats tout le reste du combat\n");
      humain.attaque = 6;
    }
    if (nbgen == 2) {
      printf("tu le blesse\n");
      slime.vie = slime.vie - humain.attaque;
      humain.vie = humain.vie - slime.attaque;
      printf("mais tu te blesse aussi\n");
      printf("Il te reste %d hp\n", humain.vie);
    }

}

int attaque_multiple(){

  srand(time(NULL));
  int nbgen=rand()%2+1;
  if (nbgen == 1) {
    printf("Tu lance une attaque général !\n");
    ogre.vie = ogre.vie - humain.attaque;
    slime.vie = slime.vie - humain.attaque;
    printf("Il reste %d hp a l'ogre et %d hp au slime\n", ogre.vie, slime.vie);
  }
  if (nbgen == 2) {
    printf("Tout le monde esquive l'attaque\n");
    printf("ils contrent-attaque\n");
    humain.vie = humain.vie-(ogre.attaque + slime.attaque);
    printf("il te reste %d hp\n", humain.vie);
  }


}



int main(){




  while (gagner == 1) {
  printf("choisi ton attaque : 1(attaque l'ogre, 2 defense, 3 empoisonnennement, 4 potion, 5 attaquer le slime seulement masi tu ne peux l'attaquer que toi tout seul, 6 mais tu peux t'y faire contrer et tu attaque tout seul)\n");
  scanf("%d", &humain.decision);
  elfe.decision = random();
  hobbit.decision = random();
  nain.decision = random();



    if (humain.decision == 1) {
      srand(time(NULL));
      int nbgen=rand()%3+1;
      ogre.decision = nbgen;
      decision_de_joueur = random2();
      ennemie();
    }
    if (humain.decision == 2) {
      srand(time(NULL));
      int nbgen=rand()%3+1;
      ogre.decision = nbgen;
      decision_de_joueur = random2();
      ennemie();
    }
    if (humain.decision == 3) {
      srand(time(NULL));
      int nbgen=rand()%3+1;
      ogre.decision = nbgen;
      decision_de_joueur = random2();
      ennemie();
    }
    if (humain.decision == 4) {
      srand(time(NULL));
      int nbgen=rand()%3+1;
      ogre.decision = nbgen;
      decision_de_joueur= random2();
      ennemie();
    }
    if (humain.decision == 5) {
      slime_attaque();
    }
    if (humain.decision == 6) {
      attaque_multiple();
    }
    if (humain.poison_actif_a == 1) {
      ogre.vie = ogre.vie - humain.degat_poison_a;
      printf("le monstre perd des hp a cause du poison. Il lui reste %d hp\n", ogre.vie );
    }
    if (elfe.poison_actif_a == 1) {
      ogre.vie = ogre.vie - elfe.degat_poison_a;
      printf("le monstre perd des hp a cause du poison. Il lui reste %d hp\n", ogre.vie );
    }
    if (nain.poison_actif_a == 1) {
      ogre.vie = ogre.vie - nain.degat_poison_a;
      printf("le monstre perd des hp a cause du poison. Il lui reste %d hp\n", ogre.vie );
    }
    if (hobbit.poison_actif_a == 1) {
      ogre.vie = ogre.vie - hobbit.degat_poison_a;
      printf("le monstre perd des hp a cause du poison. Il lui reste %d hp\n", ogre.vie );
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

    if (ogre.vie <=0) {
      xp = xp+20;
      printf("Le monstre est mort\n");
      printf("Tu prends %d xp, tes degats augmente\n", xp);
      humain.attaque = humain.attaque +4;

    }
    if (slime.vie <=0) {
      xp = xp+5;
      printf("Le slime est mort\n");
      printf("Tu prends %d xp, tes degats augmente\n", xp);
      humain.attaque = humain.attaque +2;
    }


    if (ogre.vie <= 0 && slime.vie <=0) {
      gagner = 0;
      printf("Tu as gagné !\n");
    }
    if (humain.vie <=0) {
      gagner =0;
      printf("Tu as perdu ! \n");
    }
  }
  return 0;
}

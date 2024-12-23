#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define max 125

  // Q1 :Déclaration et définition de la structure Date
  
  typedef struct Date{
  
     int jr;
     int mois;
     int ann;
  
 } D;                  // D est une variable de type Date.
 
 
 //Q2 :Déclaration et définition de la structure Ouvrier.
 
 typedef struct Ouvrier{
 
     char nom[25];
     char prn[25];
     char tel[25];
     D dtn;            // dtn est une variable de type Date  
 
 } OUVRIER;                //OV es une variable de type Ouvrier
 
 
 //Q3 Déclaration et définition de la fonction Recruter
 
       void Recruter( OUVRIER tab[max], int *nbre){
       
          int cp;
         
         
         printf("\n Eregistrement des informations d'ouvriers...");
         
         for(cp=0;cp<(*nbre);cp++){
                      
                      printf("\nOuvrier %d... :\n",cp+1);
                      printf("Nom :  ");
                      scanf("%s",tab[cp].nom);
                      
                      printf("\nprenom :  ");
                      scanf("%s",tab[cp].prn);
                      
                      printf("\nDate de Naissance:  ");
                      
                      do{
                      
                      printf("\n Jour  XX :");
                      scanf("%d",&tab[cp].dtn.jr);
                       if(tab[(cp)].dtn.jr<0 || tab[(cp)].dtn.jr>31) printf("\n Jour invalide !!");
                       
                      }while(tab[(cp)].dtn.jr<0 || tab[(cp)].dtn.jr>31);
                      
                      do{
                      
                      printf("\nMoi  XX :  ");
                      scanf("%d",&tab[cp].dtn.mois);
                      if(tab[cp].dtn.mois<0 || tab[cp].dtn.mois>12) printf("\n Mois invalide !!");
                      
                       }while(tab[cp].dtn.mois<0 || tab[cp].dtn.mois>12);
                      
                      printf("\nAnnée  XX :  ");
                      scanf("%d",&tab[cp].dtn.ann);
                      
            }
     }
     
     
// Q4 Déclaration et définition de la fonction Ajouter

     
    void Ajouter( OUVRIER tab[max], int *nbre){
    
                      int cp;
                      int survsaillant;
         
                      printf("\n Ajout d'un ouvrier...");
         
                      survsaillant=0;
                      
                      printf("\nNom :  ");
                      scanf("%s",tab[(*nbre)].nom);
                      
                      printf("\nprenom :  ");
                      scanf("%s",tab[(*nbre)].prn);
                      
                      printf("\nDate de Naissance:  ");
                      
                     do{
                      printf("\n Jour  XX :");
                      scanf("%d",&tab[(*nbre)].dtn.jr);
                      if(tab[(*nbre)].dtn.jr<0 ||tab[(*nbre)].dtn.jr>31) printf("\nJour invalide !!");
                      
                      }while(tab[(*nbre)].dtn.jr<0 ||tab[(*nbre)].dtn.jr>31);
                      
                      do{
                      printf("\nMoi  XX :  ");
                      scanf("%d",&tab[(*nbre)].dtn.mois);
                      if(tab[(*nbre)].dtn.mois<0 || tab[(*nbre)].dtn.mois>12) printf("\nMoi invalide !!");
                      
                      }while(tab[(*nbre)].dtn.mois<0 || tab[(*nbre)].dtn.mois>12);
                      
                      printf("\nAnnée  XX :  ");
                      scanf("%d",&tab[(*nbre)].dtn.ann);
                      
                      (*nbre)++;
                      
                     survsaillant++;
                     
       if(survsaillant==1)  printf("\n Ajout effectué avec succès...\n\n");
       else printf("\n Erreur au cours de l'ajout !...\n\n");
    
    }
    
    
    
  //Q5   Déclaration et définition de la fonction Supprimer
    
   void Supprimre( OUVRIER tab[max], int *nbre, char noms[25]){
   
     int cp,cp2;
     int survsaillant;
   printf("\n Suppression d'un ouvrier...");
    
   printf("\nDonnez le nom de l'ouvrier à supprimer\n");
   scanf("%s",noms);
   
       survsaillant=0;
     for(cp=0;cp<(*nbre);cp++){
   
          if(strcmp(noms,tab[cp].nom)==0){
          
            for(cp2=cp;cp2<(*nbre);cp2++) {
              
                strcpy(tab[cp2].nom,tab[cp2+1].nom) ;  
                strcpy(tab[cp2].prn,tab[cp2+1].prn) ;
                  
                tab[cp2].dtn.jr=tab[cp2+1].dtn.jr ;
                tab[cp2].dtn.mois=tab[cp2+1].dtn.mois ;  
                tab[cp2].dtn.ann=tab[cp2+1].dtn.ann ;
                  
                  }
                  
                  (*nbre)--;
                  
                survsaillant++;
   
               }
               
        }
       if(survsaillant==1)  printf("\n Suppression effectuée avec succès...\n\n");
       else printf("\nAucun nom trouvé !...\n\n");
   
   } 
    
    
    
   //Q6   Déclaration et définition de la fonction Coder 
     
     void Coder(char nom[25], char prn[25]){
     
            int k;
            
             printf("\nIdentifiant ou Code personnel...");
            for(k=0;k<2;k++){
             
                printf("%u",nom[k]);
                   }
           
           for(k=0;k<2;k++){
                
                printf("%u",prn[k]);
                  }
       }
       
   //Afficher 
   
   
   void Afficher(OUVRIER tab[max], int  *nbre){
   
   int cp;
   printf("\n Ouvriers disponibles...");
         
         for(cp=0;cp<(*nbre);cp++){
                      
                      printf("\nOuvrier %d ...:\n",cp+1);
                      printf("Nom : %s ",tab[cp].nom);
                      
                      printf("\nprenom : %s ",tab[cp].prn);
                      
                      printf("\nDate de Naissance:  ");
                      
                      printf("JJ/MM/AAAA : %d/%d/%d ",tab[cp].dtn.jr,tab[cp].dtn.mois,tab[cp].dtn.ann);
                 
                      Coder(tab[cp].nom ,tab[cp].prn );
                 printf("..................\n");     
                     
            }
   
  }
   
      
    
    
    int main(){
    
    int nbre;
    
    OUVRIER tab[max];
    
    int ch;
    char noms[25];
    
      printf("\n Donnez le nombre d'ouvriers recrutés \n");
      scanf("%d",&nbre);
    
    Recruter(  tab, &nbre);
    
       do{
       
       printf("\n~~~~~~~~~~~~~~~~~~~ ACUEIL ~~~~~~~~~~~~~~~~~~~~~~~\n");
       printf("1-Ajouter un nouvel ouvrier.\n2-Supprimer un ouvrier.\n");
       printf("3-Afficher\n4-Quitter");
       printf("\n\t\t\t\t\t ");
       scanf("%d",&ch);
       
         switch(ch){
         
         case 1:{
                 
                 Ajouter( tab, &nbre);
                 break;
               }
               
               
         case 2:{
         
                  Supprimre(tab, &nbre,  noms);
                  break;
               }
                 
         case 3:{
                Afficher(tab,  &nbre);
                break;
                }
           
          
          case 4:{
                 printf("\n\n...\n\n\n");
                 break;
                 }
          
          default :printf("\n Aucune opération correspondante !!!\nVeillez ressayer ...");
    
         }
    
      }while(ch !=4);
    
  }


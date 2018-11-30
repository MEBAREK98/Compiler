#include<stdio.h>
#include<stdlib.h>
#include<string.h>
extern int nbligne;
extern int cpt;
extern int colonne;

typedef struct {
	char nom[20];
	char code[20];
	char type[20];
	char constant[4];
	int taille;
}TypeTS;

TypeTS ts[100];



typedef struct qdr{

    char oper[100]; 
    char op1[100];   
    char op2[100];   
    char res[100];  
    
  }qdr;

qdr quad[1000];

extern int qc;

/*****************************pile_pour le resultat*********************************/

/*
//depiler une pile
int depiler(Pile *pile)
{
    if (pile == NULL)
    {
        exit(EXIT_FAILURE);
    }

    int nombreDepile = 0;
    list *elementDepile = pile->premier;

    if ((pile != NULL) && (pile->premier != NULL))
    {
        nombreDepile = elementDepile->nombre;
        pile->premier = elementDepile->suivant;
        free(elementDepile);
    }

    return nombreDepile;
}


//empiler dans une pile


void empiler(Pile *pile, int nvNombre)
{
    list *nouveau = malloc(sizeof(*nouveau));
    if (pile == NULL || nouveau == NULL)
    {
        exit(EXIT_FAILURE);
    }

    nouveau->nombre = nvNombre;
    nouveau->suivant = pile->premier;
    pile->premier = nouveau;
}


Pile initialiser_pile(){
	Pile *pile;
	list *p=malloc(sizeof(*p));

	*pile->premier=*p;
	return *pile;
}

*/

/****************************TS******************************/
int recherche(char entite[]){
	int i=0;
	while(i<cpt){
		if(strcmp(entite,ts[i].nom)==0) 
		return 0;
		i++;
	}
	return -1;
}
 
 
 
void modifier(int taille){
	
	if(strcmp(ts[cpt-1].constant,"non")==0)
	ts[cpt-1].taille=taille;
}


void inserer(char entite[],char code[],char type[],char constant[],int taille){
	if((recherche(entite)==-1 ))
	{
		strcpy(ts[cpt].nom,entite);
		strcpy(ts[cpt].code,code);
		strcpy(ts[cpt].type,type);
		strcpy(ts[cpt].constant,constant);
		ts[cpt].taille=taille;
		cpt++;
			
	}else {printf("double declaration : %s \n",entite);}

}



void afficher(){
	printf("\n/*************************Table des symboles******************/\n");
	printf("___________________________________________________________________________________\n");
	printf("\t| NomEntite| CodeEntite |   Type	|    constant\t  |  Taille\n");
	printf("___________________________________________________________________________________\n");
	int i=0;
	while(i<cpt){
		printf("\t|%10s|%12s|%14s|%16s|%d\n",ts[i].nom,ts[i].code,ts[i].type,ts[i].constant,ts[i].taille);
		i++;
	}
}

int operation(char op1[],char op2[],char oper[1])
{
	float res,p1,p2;
	res=-1;
	p1=atof(op1);
	p2=atof(op2);

	switch (oper[0])
	{
	case '+': res=p1+p2;
	break;
 	case '-': res=p1-p2;
 	break;
	case '*': res=p1*p2;
	break;
	case '/': res=p1/p2;
	break;
	}
	return res;

}


/************************************QUAD****************************/




void quadr(char opr[],char op1[],char op2[],char res[])
{ 
	
	
	
	
	strcpy(quad[qc].oper , opr);
	
	
	strcpy(quad[qc].op1 , op1);
	
	
	strcpy(quad[qc].op2 , op2);
	strcpy(quad[qc].res , res);
	
	
	qc++;
}


void ajour_quad(int num_quad , int colon_quad , char val[]){
	
	if(colon_quad==0) strcpy(quad[num_quad].oper, val);
	else if (colon_quad==1) strcpy(quad[num_quad].op1 , val);
		else if (colon_quad==2) strcpy(quad[num_quad].op2 , val);
			else if(colon_quad==3) strcpy(quad[num_quad].res , val);
	
	
}

void afficher_qdr(){
	
	
printf("***********************Les Quadruplets***********************\n")	;
int i;


for(i=0;i<qc;i++)
{
	
	
	
	printf("\n %d - ( %s  , %s  , %s  , %s )",i,quad[i].oper,quad[i].op1,quad[i].op2,quad[i].res);
	printf("\n________________________________________________\n");
	
	
}	
	
}


















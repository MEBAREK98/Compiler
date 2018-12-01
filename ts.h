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


typedef struct qdr qdr;
struct qdr{

    char oper[100]; 
    char op1[100];   
    char op2[100];   
    char res[100];  
    qdr *svt;
  };
  
  
//qdr quad[1000];

extern int qc;

extern qdr *tete;


/***************************************pile*********************************************/




qdr depiler(){
	qdr e,*p;
	strcpy(e.oper , tete->oper);
	strcpy(e.op1 , tete->op1);
	strcpy(e.op2 , tete->op2);
	strcpy(e.res , tete->res);
	p=tete;
	free(p);
	tete=tete->svt;
	printf("%s %s %s %s \n",e.oper,e.op1,e.op2,e.res);
	return e;
}



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
	qdr *elt=malloc(sizeof(*elt));
	strcpy(elt->oper , opr);
	strcpy(elt->op1 , op1);
	strcpy(elt->op2 , op2);
	strcpy(elt->res , res);
	
	
	if(qc==0){
			elt->svt=NULL;
			tete=elt;
			
	}else{
		elt->svt=tete;
		tete=elt;
		
	}
	
	qc++;
	
	
	
	
}


void ajour_quad(int num_quad , int colon_quad , char val[]){
	
	int i=num_quad;
	qdr *p;
	p=tete;
	printf("%d\n",i);
	while(i!=0){p=p->svt;i--;}
	if(colon_quad==0) strcpy(p->oper, val);
	else if (colon_quad==1) strcpy(p->op1 , val);
		else if (colon_quad==2) strcpy(p->op2 , val);
			else if(colon_quad==3) strcpy(p->res , val);
	
	
}

void afficher_qdr(){
	qdr *p;
	p=tete;
printf("***********************Les Quadruplets***********************\n")	;
int i;


i=qc;
while(p!=NULL)
{
	
	
	
	printf("\n %d - ( %s  , %s  , %s  , %s )",i,p->oper,p->op1,p->op2,p->res);
	printf("\n________________________________________________\n");
	p=p->svt;
	i--;
}	
	
}


















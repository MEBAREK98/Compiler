%{

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern int cpt;
int nbligne=0;
int nbcolonne;
int qc=0;
char* s;
int nb_res_max=0,nb_res_maxp=0;
int r;
int res [20],resp[20];
char tmp[20],tmp3[20],tmp4[20],tmp5[20];
char* tmp1,tmp2;


typedef struct list list;
struct list{
	int nombre;
	list *suivant;
};

typedef struct Pile Pile;
struct Pile
{
    list *premier;
};
//Pile pile_res=initialiser_pile();

%}
%union{
	int num;
	char* str;
struct s{
	int val;
	char* chaine;
}s;
}


%token mc_prg <str>id  '{' '}'  <str>bib_tab <str> bib_boucle <str>bib_calcul <str>mc_reel <str>pt <strt>mc_cst <str>mc_wh <str>crf dps <num>nbr <str>affct <str>inf <str>aco_f <str>aco_o <str>sup <str>def <str>egal <str>et_l <str>mc_exe <str>mc_if cro <str>mc_integer <str>PAR_f <str>PAR_o <str>sp_2b <str>plus <str>diiv <str>moins <str>fois ';'
%type<s> OPP
%type<s> OPER
%type<s> FLT
 
%start S
%%
S: Bibl mc_prg id '{' DEC INSTR  '}' {printf("Programme correct \n");}
; 
Bibl: bib_tab Bibl
      |bib_boucle Bibl
      |bib_calcul Bibl
      |
;
DEC: DEC_Var DEC
     |
;
DEC_Var: TYPE dps LISTE_Var ';'
        |mc_cst TYPE dps LISTE_cst ';'
		|TYPE dps LISTE_tab ';'
		
		
;
TYPE: mc_integer
	 |mc_reel
;
LISTE_Var: id sp_2b LISTE_Var
           | id
;
LISTE_cst: AFF sp_2b LISTE_cst 
           | AFF
;
AFF : id affct id 
      |id affct FLT  
	  ;

FLT : nbr { sprintf(tmp,"%s%d","",$1);printf("\n%s",tmp);}
     |nbr pt nbr	 
;
TAB : id cro nbr crf
;
LISTE_tab : TAB sp_2b LISTE_tab
		    |TAB
;
/*
INST : id affct id IN  { quadr(":=",$3,"",$1) ; }
	 |id affct FLT IN    { quadr(":=",tmp,"",$1) ;  }
	 |id affct TAB IN
	 |id affct TABi IN
	 |id affct PAR IN
	 |TABi affct id IN
	 |TABi affct FLT IN
	 |TABi affct PAR IN
	 |TABi affct TABi IN
	 |TABi affct TAB IN
	 |TAB affct PAR IN
	 |TAB affct id IN
	 |TAB affct FLT IN
	 |TAB affct TABi IN
	 |TAB affct TAB IN
	 |  
	 
;*/

INST : id affct OPP  
	 |
	 ;






/*PAR : PAR_o INS PAR_f
	 | PAR_o NBRS PAR_f
;
NBRS: plus FLT
	 | moins FLT

;
INS : id IN
     |FLT IN 
	 |TAB IN
	 |TABi IN
	 
	 
	 ;*/
/*TABi : id cro id crf
; */
OPP: OPP plus OPER  {
									
									
									sprintf(tmp,"%s%d","",$1.val);
								  sprintf(tmp3,"%s%d","",$3.val);
								  if(nb_res_maxp==0){
								  if(nb_res_max==0){
									
									  r=operation(tmp,tmp3,"+");
									  nb_res_max++;
									
									  res[nb_res_max]=r;
									
									  sprintf(tmp4,"%s%d","",res[nb_res_max]);
								  
										//printf("je suis la %d",res[nb_res_max]);
								      quadr("+",tmp,tmp3,tmp4);
									  
								  }else{
									  
									  sprintf(tmp5,"%s%d","",res[nb_res_max]);
									  nb_res_max--;
									  r=operation(tmp5,tmp3,"+");
									  nb_res_max++;
									  res[nb_res_max]=r;
									  
									  sprintf(tmp4,"%s%d","",res[nb_res_max]);
									  
									  //printf("je suis la %d",res[nb_res_max]);
									  
									  quadr("+",tmp5,tmp3,tmp4);
									  
									  
								  }}else{
									  
									  
									//if(nb_res_max!=0){
									  sprintf(tmp5,"%s%d","",resp[nb_res_maxp]);
									  //sprintf(tmp3,"%s%d","",res[nb_res_max]);
									  nb_res_maxp--;
									  r=operation(tmp5,tmp3,"+");
									  
									  nb_res_max++;
									  res[nb_res_max]=r;
									  
									  sprintf(tmp4,"%s%d","",res[nb_res_max]);
									  printf("je suis la %s",tmp4);
									  
									  quadr("+",tmp5,tmp3,tmp4);
									  
									  /*
									}
									else{
										sprintf(tmp5,"%s%d","",resp[nb_res_maxp]);
									  //sprintf(tmp3,"%s%d","",res[nb_res_max]);
									  r=operation(tmp5,tmp3,"+");
									  printf("laaaaaaaaa");
									  
									  nb_res_max++;
									  resp[nb_res_maxp]=r;
									  
									  sprintf(tmp4,"%s%d","",resp[nb_res_maxp]);
									  
									  quadr("+",tmp5,tmp3,tmp4);
										
										
									}*/
									
									
									}
									  
									  
									  
}
								   
								  
								  
								  
	| OPP moins OPER {sprintf(tmp,"%s%d","",$1.val);
								  sprintf(tmp3,"%s%d","",$3.val);
								  if(nb_res_maxp==0){
								  if(nb_res_max==0){
									printf("je suis la %d");
									  r=operation(tmp,tmp3,"-");
									  nb_res_max++;
									
									  res[nb_res_max]=r;
									 // printf("\n\t%d",r);
									
									  sprintf(tmp4,"%s%d","",res[nb_res_max]);
								  
								  
								      quadr("-",tmp,tmp3,tmp4);
									  
								  }else{
									  
									  sprintf(tmp5,"%s%d","",res[nb_res_max]);
									  r=operation(tmp5,tmp3,"-");
									  nb_res_max++;
									  res[nb_res_max]=r;
									//  printf("\n\t%d",r);
									  
									  sprintf(tmp4,"%s%d","",res[nb_res_max]);
									  
									  quadr("-",tmp5,tmp3,tmp4);
									  
									  
								  }}else{
									  
									  
									if(nb_res_max!=0){
									  sprintf(tmp5,"%s%d","",resp[nb_res_maxp]);
									  sprintf(tmp3,"%s%d","",res[nb_res_max]);
									  r=operation(tmp3,tmp5,"-");
									 // printf("\n\t%d",r);
									  nb_res_max++;
									  resp[nb_res_maxp]=r;
									  
									  sprintf(tmp4,"%s%d","",resp[nb_res_maxp]);
									  
									  quadr("-",tmp3,tmp5,tmp4);
									  
									  
									}}
								   
								  
								  }
								  
	| OPER
;
OPER: OPER fois FLT {
	
									
								  sprintf(tmp,"%s%d","",$1.val);
								  sprintf(tmp3,"%s%d","",$3.val);
								  
								  
								  
								  if(nb_res_maxp==0){
									  
									  
									  //if(nb_res_max!=0){
									  r=operation(tmp,tmp3,"*");
									  
									  nb_res_maxp++;
									  
									  resp[nb_res_maxp]=r;
									  
									  sprintf(tmp4,"%s%d","",resp[nb_res_maxp]);
								  
								  
								      quadr("*",tmp,tmp3,tmp4);
									  
								 }else{
									  
									  sprintf(tmp5,"%s%d","",resp[nb_res_maxp]);
									  r=operation(tmp5,tmp3,"*");
									  nb_res_maxp++;
									  resp[nb_res_maxp]=r;
									  
									  sprintf(tmp4,"%s%d","",resp[nb_res_maxp]);
									  quadr("*",tmp5,tmp3,tmp4);
									  
									  
								  }
								  
								  
								  }
	| OPER diiv FLT {
								  sprintf(tmp,"%s%d","",$1.val);
								  sprintf(tmp3,"%s%d","",$3.val);
								  
								  
								  
								  if(nb_res_maxp==0){
									  
									  
									  //if(nb_res_max!=0){
									  r=operation(tmp,tmp3,"/");
									  
									  nb_res_maxp++;
									  
									  resp[nb_res_maxp]=r;
									  
									  sprintf(tmp4,"%s%d","",resp[nb_res_maxp]);
								  
								  
								      quadr("/",tmp,tmp3,tmp4);
									  
								 }else{
									  
									  sprintf(tmp5,"%s%d","",resp[nb_res_maxp]);
									  nb_res_maxp--;
									  r=operation(tmp5,tmp3,"/");
									  nb_res_maxp++;
									  resp[nb_res_maxp]=r;
									  
									  sprintf(tmp4,"%s%d","",resp[nb_res_maxp]);
									  quadr("/",tmp5,tmp3,tmp4);
									  
									  
								  }
								  
								  
								  
								  }
	| FLT 
	;
/*IN : OPP FLT IN { } 
	| OPP id IN
	|OPP TAB IN 
	|OPP TABi IN
	| OPP PAR IN
	| 
	;*/
AFFACTATION : INST ';'  
              	
;/*
BOUCLE : mc_wh PAR_o COND PAR_f '{' INSTR '}';

*/
INSTR : AFFACTATION INSTR
       //|BOUCLE INSTR
	   //|CONDITION INSTR
	   |
	   ;
	   /*
CON : et_l et_l COND
      |sp_2b COND
      |
;

COND : FLT CON
       |id sup id CON
       |id sup FLT CON
       |id inf id CON
       |id inf FLT CON
       |id sup egal FLT CON
       |id sup egal id CON
       |id inf egal id CON
       |id inf egal FLT CON
       |id egal egal id CON
       |id egal egal FLT CON
       |id def egal id CON
       |id def egal FLT CON
       |def COND
       |PAR_o COND PAR_f CON
;
CONDITION : mc_exe INSTR mc_if PAR_o COND PAR_f */
%%
int yyerror(char*msg)
{
printf("Erreur syntaxique à la ligne %d\n", nbligne);
return 1;}

int main()
{

yyparse();
//afficher();
afficher_qdr();

return 0;

}





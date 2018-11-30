%{
	
//#include <stdio.h>
//#include <stdlib.h>
#include "syntaxique.tab.h"
#include "ts.h"


extern int nbligne;
extern int nbcolonne;
extern YYSTYPE yylval;
int cpt=0;
int nom=0;
char constant[]="non";
char type[]="/";
int crocher_ouvrant=0,T=0;
%}
comnt "//"(.|\n)*"//" 
idf [A-Z][A-Za-z0-9]*
Nbr [0-9]*

%%
PROGRAMME {nom=1;return mc_prg;}
WHILE return mc_wh;
#TAB return bib_tab;
#CALCUL return bib_calcul;
#BOUCLE  return bib_boucle;
INTEGER {nbcolonne=nbcolonne+yyleng ; strcpy(type,"INETGER");return mc_integer;}
REEL {nbcolonne=nbcolonne+yyleng ; strcpy(type,"REEL");return mc_reel;}
EXECUT {nbcolonne=nbcolonne+yyleng ;return mc_exe;}
IF {nbcolonne=nbcolonne+yyleng ;return mc_if;}

CONSTANTE {nbcolonne=nbcolonne+yyleng;strcpy(constant,"oui");return mc_cst;}
{idf} {nbcolonne=nbcolonne+yyleng;yylval.str =strdup(yytext);if(strcmp(type,"/")!=0){inserer(yylval.str,"idf",type,constant,1);}else if((recherche(yytext)==-1)&& (nom==0)){printf("%s non declarer\n",yytext);}if(nom ==1){inserer(yylval.str,"idf",type,"non",1);}return id;}
{Nbr} {nbcolonne=nbcolonne+yyleng;if(crocher_ouvrant=1){T=atoi(yytext);modifier(T);};yylval.num=atoi(yytext);return nbr;}
{comnt}
[{};] {nbcolonne=nbcolonne+yyleng ;return yytext[0];}
"||" {nbcolonne=nbcolonne+yyleng ;return sp_2b;}
"::" {nbcolonne=nbcolonne+yyleng ;return dps;}
":=" {nbcolonne=nbcolonne+yyleng ;return affct;}

"[" {nbcolonne=nbcolonne+yyleng; crocher_ouvrant=1 ;return cro;}
"]" {nbcolonne=nbcolonne+yyleng ;crocher_ouvrant=0; return crf;}

"." {nbcolonne=nbcolonne+yyleng ;return pt;}
"+" {nbcolonne=nbcolonne+yyleng ;yylval.str=strdup(yytext);return plus;}
"-" {nbcolonne=nbcolonne+yyleng ;yylval.str=strdup(yytext);return moins;}
"*" {nbcolonne=nbcolonne+yyleng ;yylval.str=strdup(yytext);return fois;}
"/" {nbcolonne=nbcolonne+yyleng ;yylval.str=strdup(yytext);return diiv;}

"(" {nbcolonne=nbcolonne+yyleng ;return PAR_o;}
")" {nbcolonne=nbcolonne+yyleng ;return PAR_f;}
"=" {nbcolonne=nbcolonne+yyleng ;return egal;}
"<" {nbcolonne=nbcolonne+yyleng ;return inf;}
">" {nbcolonne=nbcolonne+yyleng ;return sup;}
"!" {nbcolonne=nbcolonne+yyleng ;return def;}
"&" {nbcolonne=nbcolonne+yyleng ;return et_l;}

[ \t] {nbcolonne=nbcolonne+yyleng;}
\n {nbcolonne=1;nom=0;nbligne++;strcpy(constant,"non");strcpy(type,"/");}

. printf("Erreur lexicale à la ligne %d et la colonne %d \n", nbligne,nbcolonne);
%%
int yywrap()
{return 1;}


%{
#include<stdio.h>
#include "bison.tab.h" 
//#include "ts.h" 
int yyerror();
%}

entier [0-9]+
idf [a-z]+
bl [ \t]
%%
{idf} {
if (recherche(yytext,T)==0){
	T=Insertion(T,yytext,"idf","idf");
}
 return idf ;}
{entier} {if (recherche(yytext,T)==0){
	T=Insertion(T,yytext,"entier","entier");
}
return entier ;}
{bl} {}
. {printf("Erreur lexical\n");}
%%
int yywrap()
{return 1 ;}

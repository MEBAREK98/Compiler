%{
#include<stdio.h>
#include<stdlib.h>
#include "ts.h"
extern FILE* yyin ;
int yylex();
int yyerror();
%}


%token idf entier

%%

A : idf S {printf("syntaxe correcte\n");};
S : entier 
|idf S;

%%

int yyerror(char* msg)
{printf("%s \n",msg);
return 1;}

int main()
{
yyin=fopen("input.txt","r");
 
yyparse();
Afficher(T);
return 0;
}

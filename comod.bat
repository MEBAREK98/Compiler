flex lexical.l
bison -d syntaxique.y
gcc lex.yy.c syntaxique.tab.c -o compilsii
compilsii<explang.txt
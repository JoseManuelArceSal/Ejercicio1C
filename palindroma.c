#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void quitarEpacios(char palabra, char resultado);
int esPolindromo(char palabra);

int main(void){
	char word[100];
	char wordSinEspacios[100];
	
	printf("Ingrese la palabra o frase: ");
	gets(word);
	quitarEspacios(word, wordSinEspacios);
	if(esPolindromo(wordSinEspacios)){
		printf("La palabrta o frase ingresada es palindroma");
	}else{
	printf("La palabra o frase ingresada NO palindroma");	
	}
}
void quitarEspacios(char palabra, char resulado){
	char plaraSinEspacios[100]="";
	int i=0;
	while(palabra !='\0'){ 
		if(palabra !=""){
			 palabraSinEspacios[i]=palabra;
			i++;
		}
		palabra++;
}
	strcpy(resultado, palabraSinEspacios);
}
int esPalidromo(char palabra){
	int a=0;
	int b=strlen(palabra)-1;
	char auxA, auxB;
	int i;
	for(i=0;i<strlen(palabra);i++){
		auxA=palabra[a];
		auxB=palabra[b];
		
		if(auxA>=65 && auxA<=90){
			auxA+=32;
		}
		if(auxB>=65 && auxB<=90){
			auxB+=32;
		}
		if(auxA==auxB){
			a++;
			b--;
		}else{
			return 0;
		}
	}
	return 1;
}
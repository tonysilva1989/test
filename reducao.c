#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *string = "K(KS)(KS)";
	char *saida;
	char *inicio;
	int i=0;
	int esquerdo=0;
	int esquerdo2=0;
	int exp1=0;
	int exp2=0;
	
	
	/*for (;i<4;i++)
	{
		printf("%c",string[i]);
		
	}*/
	
	i=0;

	//inicio = &saida;
		
	while(*string!='\0')//enquanto não chegou ao final da string
	{
		//printf("%c",*string);
		
		//início de uma eventual funcao
		//aplicando a primeira regra:
		if(*string == 'K')
		{
			*string ++; //varre a string procurando por um novo caracter
			
			if(*string=='(')
			{
				//esquerdo++;
				
				while(*string != ')' && !exp1)
				{
					*string++; //percorre um caracter
					//*saida = *string; //copia o caractere origem para o destino
					
					if(*string == ')')//se achou a string final da primeira expressão, nada mais importa para a primeira expressao
					{
						exp1 = 1; 	//ativa a flag pra dizer que chegou no final da expressão
					}
				}				
				//chama novamente uma eventual função
				
			}
		}
		
		*string ++; //vai percorrendo a string
	}

	*saida = '\0';
	//saida = inicio; // recuperando o endereço inicial
	
	/*
	while(*saida != '\0')
	{
		printf("%c",*saida);
		*saida ++ ;
	}
	*/
	return 0;
}

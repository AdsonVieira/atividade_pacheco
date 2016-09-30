#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <conio.c>

// Nome do aluno: Adson dos Santos Vieira
// Matrícula : 144161041
int main(){

	  setlocale(LC_ALL,"");
	  

	int a=0, b=0, n_maiusc =0, n_minus=0;
	int size_string=0, l_maius=0, l_minus=0, coun_n=0, anagrama=0, pal=0;
	int c_especiais=0, size_string_t=0, aux=0;

	char frase_qualquer[100], frase_minus[100],frase_maius[100];
	char outra_frase[100];
	char desejo[20];

	frase_qualquer[0] = '\0';
	outra_frase[0] = '\0';
	frase_minus[0] = '\0';
	frase_maius[0] = '\0';

	int vogais_maiusculas[5] = {65, 69, 73, 79, 85};
	int vogais_minusculas[5] = {97, 101, 105, 111, 117};

		textbackground(1);
		textcolor(128);

		inicio:
		printf("Digite uma frase qualquer !\n");
		fflush(stdin);
		gets(frase_qualquer);
			
	
		while(frase_qualquer[a] != '\0'){
			size_string++;
			a++;
		}
	


		printf("\nString invertida :");
		for(a = size_string ; a > 0; a--){
	       	printf("% c", frase_qualquer[a]);
		}



		for(a =0; a <=size_string; a++){
			// Transformando a frase em maiúsculas
			//verifica o intervalo para identifica o caractere e assim converter
			if((frase_qualquer[a] >=0 && frase_qualquer[a] <= 64) || (frase_qualquer[a] >=65 && frase_qualquer[a] <= 90)){
				frase_maius[a]= frase_qualquer[a];
			}else if(frase_qualquer[a] >=97 && frase_qualquer[a] <= 122){
				frase_maius[a]= frase_qualquer[a] -32;
			}
		}

		for(a =0; a <=size_string; a++){
			// Transformando a frase em minúscula
			//verifica o intervalo para identifica o caractere e assim converter
			if((frase_qualquer[a] >=0 && frase_qualquer[a] <= 64) || (frase_qualquer[a] >=97 && frase_qualquer[a] <= 122)){
				frase_minus[a]= frase_qualquer[a];
			}else if(frase_qualquer[a] >=65 && frase_qualquer[a] <= 90){
				frase_minus[a]= frase_qualquer[a] +32;
			}
		}


		for(a =0; a < size_string ; a++){
			// conta o número de vogais minusculas
			// varre um vetor com todas as vogais e faz uma comparaçao
			if(frase_qualquer[a] >= 65 && frase_qualquer[a] <= 90){
				for(b = 0; b <= 4; b++){
					if(frase_qualquer[a] == vogais_maiusculas[b]){
						n_maiusc++;
					}
				}
			}else if(frase_qualquer[a] >= 97 && frase_qualquer[a] <= 122){
				for(b = 0; b <= 4; b++){
					if(frase_qualquer[a] == vogais_minusculas[b]){
						n_minus++;
					}
				}
			}

		}


		// Esse bloco de comando verifica o número de caracteres especiais letras maiúsculas e minúscula da string

		for(a=0;a <= size_string;a++){
			if(frase_qualquer[a]>=48 && frase_qualquer[a]<=57){
				//números
				coun_n++;
			}else if(frase_qualquer[a]>= 'A' && frase_qualquer[a]<= 'Z'){
				l_maius++;
				// letras maiúsculas
			}else if(frase_qualquer[a]>= 'a' && frase_qualquer[a]<= 'z'){
				// letras minusculas
				l_minus++;

			}else if(frase_qualquer[a]){
				c_especiais++;
			}
		}

		printf("\nFrase maiúscula: %s", frase_maius);
		printf("\nFrase minúsculas: %s", frase_minus);
		printf("\nQuantidade de vogais maiúsculas %d e vogais minúsculas %d\n", n_maiusc,n_minus);
		printf("Quantidade de letras maiúsculas: %d\n", l_maius);
		printf("Quantidade de letras minúsculas: %d\n", l_minus);
		printf("Quantidade de números: %d\n", coun_n);
		printf("Quantidade de caracteres especiais: %d\n", c_especiais);




		for(a=0, b =size_string -1; a < size_string, b >=0; a++, b--){
			// verificando se é um palídromo
		   if(frase_qualquer[a] == frase_qualquer[b]){
		   		pal++;
		   }

		}
		
		if(pal == size_string){
			printf("é um PALÍNDROMO", setlocale(LC_ALL, "Portuguese"));

		}else{
			printf("Não é um PALÍNDROMO");
		}


		// Verificando existência de anagrama

		printf("\nDigite outra string: \n");
		fflush(stdin);
		gets(outra_frase);

		for(a =0; outra_frase[a] !='\0'; a++){
			size_string_t++;
			// verificando tamanho da segunda string digitada
		}



		if(size_string_t == size_string){
			// ordenando a primeira string  em ordem alfabética

			for(a=0; a <= size_string; a++){
				for(b = a+1; b <= size_string; b++){
					if(frase_qualquer[a] > frase_qualquer[b]){
						aux = frase_qualquer[a];
						frase_qualquer[a] = frase_qualquer[b];
						frase_qualquer[b] = aux;
						//ordenando a string para fazer a comparação
					}
				}
			}
			// ordenando a segunda string  em ordem alfabética
			for(a=0; a <= size_string; a++){
				for(b = a+1; b <= size_string; b++){
					if(outra_frase[a] > outra_frase[b]){
						aux = outra_frase[a];
						outra_frase[a] = outra_frase[b];
						outra_frase[b] = aux;
					}
				}
			}

			for(a=0; a<= size_string; a++){
				for(b=0; b <= size_string; b++){
					if(frase_qualquer[a] == outra_frase[b]){
						anagrama++;
						// realizando a comparação de cada elemento da string 
					}
				}
			}

        }
        
		if(anagrama >= size_string && anagrama >=size_string_t){
			printf("SÃO ANAGRAMAS UM DO OUTRO!.\n ");
		}else{
		
			printf("Não são anagramas\n");
		}
		
		printf("Deseja continuar? Digite s ou n\n");
		fflush(stdin);
		gets(desejo);
	
		if(desejo[0] == 's'){
			system("cls");
			goto inicio;
			print("1");
		}else{
			return 0;
		}
		
		frase_qualquer[0] = '\0';
	    outra_frase[0] = '\0';
	
} 




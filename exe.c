#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
int main(){

	  setlocale(LC_ALL,"Portuguese");

	int a=0, b=0, n_maiusc =0, n_minus=0;
	int size_string=0, l_maius=0, l_minus=0, coun_n=0, anagrama=0, pal=0;
	int c_especiais=0, size_string_t=0, aux=0;

	char frase_qualquer[100], frase_minus[100],frase_maius[100];
	char outra_frase[100];

	frase_qualquer[0] = '\0';
	outra_frase[0] = '\0';

	int vogais_maiusculas[5] = {65, 69, 73, 79, 85};
	int vogais_minusculas[5] = {97, 101, 105, 111, 117};

<<<<<<< HEAD


		printf("Digite uma frase qualquer !\n");
		gets(frase_qualquer);


=======
	
	

    
		inicio:
		printf("Digite uma frase qualquer !\n");
		scanf("%[^\n]s", frase_qualquer);
		
	
>>>>>>> dc9008c42de44afcb1f4f3ee20e06a0f4cb91e11
		while(frase_qualquer[a] != '\0'){
			size_string++;
			a++;
		}
		printf("Tamanho da string %d\n", size_string);
<<<<<<< HEAD



=======
		
		/*
	
		// Melhorar código 	
		for(a=0;a< tam;a++){
			if(string[a]>=48 && string[a]<=57){
				//números
			}else if(string[a]>=65 && string[a]<=90){
				// letras minúsculas
			}else if(string[a]>=97 && string[a]<=122){
				// letras maiúsculas
			}else if(string[a]){
				esp++;
			}
		}
		*/
		
>>>>>>> dc9008c42de44afcb1f4f3ee20e06a0f4cb91e11
		printf("\nString invertida :");
		for(a = size_string ; a > 0; a--){
	       	printf("% c", frase_qualquer[a]);
		}



		for(a =0; a <=size_string; a++){
			// Transformando a frase em maiúsculas
			if((frase_qualquer[a] >=0 && frase_qualquer[a] <= 64) || (frase_qualquer[a] >=65 && frase_qualquer[a] <= 90)){
				frase_maius[a]= frase_qualquer[a];
			}else if(frase_qualquer[a] >=97 && frase_qualquer[a] <= 122){
				frase_maius[a]= frase_qualquer[a] -32;
			}
		}

		for(a =0; a <=size_string; a++){
			// Transformando a frase em minúscula
			if((frase_qualquer[a] >=0 && frase_qualquer[a] <= 64) || (frase_qualquer[a] >=97 && frase_qualquer[a] <= 122)){
				frase_minus[a]= frase_qualquer[a];
			}else if(frase_qualquer[a] >=65 && frase_qualquer[a] <= 90){
				frase_minus[a]= frase_qualquer[a] +32;
			}
		}


		for(a =0; a < size_string ; a++){
			// conta o número de vogais minusculas
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
<<<<<<< HEAD
		if(pal == size_string ){
			printf("é um PALÍNDROMO");
=======
		
		if(pal == size_string){
			printf("é um PALÍNDROMO", setlocale(LC_ALL, "Portuguese"));
>>>>>>> dc9008c42de44afcb1f4f3ee20e06a0f4cb91e11
		}else{
			printf("Não é um PALÍNDROMO");
		}


		// Verificando existência de anagrama

		printf("\nDigite outra string: \n");
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
					}
				}
			}

			if(anagrama >= size_string && anagrama >=size_string_t){
				printf("SÃO ANAGRAMAS UM DO OUTRO!.\n ");
			}else{

				printf("Não são anagramas\n");

			}

		}else{

			printf("Não são anagramas\n");
		}
<<<<<<< HEAD

=======
		
>>>>>>> dc9008c42de44afcb1f4f3ee20e06a0f4cb91e11
}




#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
int main(){
	
	setlocale(LC_ALL, NULL); 
	
	int a=0, b=0, n_maiusc =0, n_minus=0;
	int size_string=0, l_maius=0, l_minus=0, coun_n=0, anagrama=0, pal=0;
	int c_especiais=0, size_string_t=0, aux=0;

	char frase_qualquer[100];
	char outra_frase[100];

	
	int vogais_maiusculas[5] = {65, 69, 73, 79, 85};
	int vogais_minusculas[5] = {97, 101, 105, 111, 117};
	
	int ch_especiais[32] = {33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,58,59,60,61,62,63,64,91,92,93,94,95,96,123,124,125,126};
	
	


	
	printf("Digite uma frase qualquer !\n");
	gets(frase_qualquer);
	

	while(frase_qualquer[a] != '\0'){
		size_string++;
		a++;
	}
	printf("Tamanho da string %d\n", size_string);
	

	
	printf("\nString invertida :");
	for(a = size_string -1; a >= 0; a--){
       	printf("% c", frase_qualquer[a]);
	}
	

	printf("\nFrase maiúscula :");

	for(a =0; a <= size_string -1; a++){
		//transforma a string em maiúscula
		 if(frase_qualquer[a] >= 'A' && frase_qualquer[a] <= 'Z'){
		 	printf("%c", frase_qualquer[a]);
		 }else if(frase_qualquer[a] >= 'a' && frase_qualquer[a] <= 'z'){
		 
		    printf("%c", frase_qualquer[a] -32);
	     }else{
	    	printf("%c", frase_qualquer[a]);
	    	
		 }
	    
	}
	
	printf("\nFrase minúscula :");
	for(a =0; a <= size_string -1; a++){
		//transforma a string em minúscula
		 if(frase_qualquer[a] < 'Z' && frase_qualquer[a] >= 'A'){
		 	printf("%c", frase_qualquer[a] + 32);
		 }else if(frase_qualquer[a] >= 'a' && frase_qualquer[a] <= 'z'){
		 
		    printf("%c", frase_qualquer[a]);
	    }else{
			printf("%c", frase_qualquer[a]);
		 }
	    
	}
		 
		 
	for(a =0; a <= size_string ; a++){
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
	printf("\nQuantidade de vogais maiúsculas %d e vogais minúsculas %d\n", n_maiusc,n_minus);
	
	for(a =0; a <= size_string;a++){
		if(frase_qualquer[a] >= 65 &&  frase_qualquer[a] <= 90){
			l_maius++;
		}
		//verifica a quantidade de letras maiúsculas
	}
	printf("Quantidade de letras maiúsculas %d\n", l_maius );
	
	
	for(a =0; a <= size_string ;a++){
		if(frase_qualquer[a] >= 97 &&  frase_qualquer[a] <= 122){
			l_minus++;
		}
		//verifica a quantidade de letras minsculas
	}
	printf("Quantidade de letras minúsculas %d\n", l_minus);
	
	
	
	for(a =0; a <= size_string;a++){
		if(frase_qualquer[a] >= 48 &&  frase_qualquer[a] <= 57){
			coun_n++;
		}
		//verifica a quantidade de números
	}
	printf("Quantidade de números na string %d\n", coun_n);
	
	for(a =0; a <= size_string -1; a++){
		// verificando número de caracteres especiais
		for(b = 0; b <= 31; b++){
			if(frase_qualquer[a] == ch_especiais[b]){
				c_especiais++;
			}
		}
	
	}	
	printf("Quantidade de caracteres especiais encontrados na string: %d\n", c_especiais);
	
	for(a=0, b=size_string -1; a <=size_string, b >=0; a++, b--){
		// verificando se é um palídromo
	   if(frase_qualquer[a] == frase_qualquer[b]){
	   		pal++;
	   } 
	   
	}
	
	if(pal == size_string -1){
		printf("é um PALÍNDROMO", setlocale(LC_ALL, "Portuguese"));
	}else{
		printf("Não é um PALÍNDROMO", setlocale(LC_ALL, "Portuguese"));
	}
	
	
	// Verificando existência de anagrama
	
	printf("\nDigite outra string: \n");
	gets(outra_frase);
	
	for(a =0; frase_qualquer[a] !='\0'; a++){
		size_string_t++;
		// verificando tamanho da segunda string digitada
	} 
    
    printf("primeira string %d\n", size_string);
    printf("segunda string %d\n", size_string_t);

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
			printf("SÃO ANAGRAMAS UM DO OUTRO!. ");
		}else{
		
			printf("Não são anagramas");
		
		}
		 
	}

	

}




#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>
#include <locale.h>
int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int a=0, b=0, n_maiusc =0, n_minus=0;
	int size_string=0, l_maius=0, l_minus, coun_n=0;
	int c_especiais=0;

	char frase_qualquer[100];
	char f_i[100], m[100];
	
	//char vogais_maiusculas[4] = {'A', 'E', 'I', 'O', 'U'};
	//char vogais_minusculas[4] = {'a', 'e', 'i', 'o', 'u'};

	
	printf("Digite uma frase qualquer !\n");
	gets(frase_qualquer);
	
	
	while(frase_qualquer[a] != '\0'){
		size_string++;
		a++;
	}
	printf("Tamanho da string %d\n", size_string);
	
	b = 0;
	
	
	printf("\nString invertida :");
    for(a = size_string -1; a >= 0; a--){
    	f_i[b]= frase_qualquer[a];
    	printf("%c", f_i[b]);
    	b++;
    	
		// inverte a string
	}
	

	printf("\nFrase mai�scula :");

	for(a =0; a <= strlen(frase_qualquer) -1; a++){
		//transforma a string em mai�scula
		 if(frase_qualquer[a] < 90 && frase_qualquer[a] >= 65){
		 	printf("%c", frase_qualquer[a]);
		 }else if(frase_qualquer[a] >= 90 && frase_qualquer[a] <= 122){
		 
		    printf("%c", frase_qualquer[a] -32);
	    }else if(frase_qualquer[a] == 32){
	    	printf("%c", frase_qualquer[a]);
	    	
		}
	    
	}
	
	printf("\nFrase main�scula :");
	for(a =0; a <= strlen(frase_qualquer) -1; a++){
		//transforma a string em min�scula
		 if(frase_qualquer[a] < 90 && frase_qualquer[a] >= 65){
		 	printf("%c", frase_qualquer[a] + 32);
		 }else if(frase_qualquer[a] >= 90 && frase_qualquer[a] <= 122){
		 
		    printf("%c", frase_qualquer[a]);
	    }else if(frase_qualquer[a] == 32){
	    	printf("%c", frase_qualquer[a]);
	    	
		}
	    
	}
		 
		 


	
 /*
	for(a =0; a <= size_string -1; a++){
		if (isupper(frase_qualquer[a])){
		// verifica se a string cont�m vogais e quantas vogais mai�sculas e minusculas existem
			for(b = 0; b <= 5; b++){
				if(frase_qualquer[a] == vogais_maiusculas[b]){
					n_maiusc++;
				}
			}
		}else if(islower(frase_qualquer[a])){
			for(b = 0; b <= 5; b++){
				if(frase_qualquer[a] == vogais_minusculas[b]){
					n_minus++;
				}
			}
		}
	}		
	
	for(a =0; a <= size_string -1;a++){
		if(isupper(frase_qualquer[a])){
			l_maius++;
		}
		//verifica a quantidade de letras mai�sculas
	}
	
	for(a =0; a <= size_string -1;a++){
		if(islower(frase_qualquer[a])){
			l_minus++;
		}
		//verifica a quantidade de letras min�sculas
	}
	
	for(a =0; a <= size_string -1;a++){
		if(isdigit(frase_qualquer[a])){
			coun_n++;
		}
		//verifica a quantidade de n�meros
	}
	
	for(a =0; a <= size_string -1; a++){
		for(b = 0; b <= 5; b++){
			if(frase_qualquer[a] == caracteres_especiais[b]){
				c_especiais++;
			}else{
			}
		}
	
	}	

	

	
	printf("Letras min�sculas %s\n", ms);
	printf("Quantidade de vogais mai�sculas %d e vogais min�sculas %d\n", n_maiusc,n_minus);
	printf("Quantidade de letras mai�sculaS %d\n", l_maius );
	printf("Quantidade de letras min�scular %d\n", l_minus);
	printf("Quantidade de n�meros na string %d\n", coun_n);
	printf("Quantidade de caracteres especiais encontrados na string: %d\n", c_especiais);
	
	*/

}




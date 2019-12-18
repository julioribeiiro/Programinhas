/*
Selection sort

1 - cria o array
2 - pega o menor numero do array e joga para o primeiro indice
3 - varre o array novamente a partir do segundo indice


*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

	//1000
	//0.839

	//5000
	//11.657

	//10.000
	//65.119

	//20.000
	//240.648

	//40.000
	//759.383



//1.000.000




	int tamanho = sizeof(arr) / sizeof(arr[0]);

	int inicio, i, aux;
	clock_t tempo[2];
	tempo[0] = clock();
	int menor, indice_menor;


	for (inicio=0; inicio<tamanho; inicio++){
		menor = arr[inicio];//--------REINICIA-SE MENOR NUMERO
		for(i=inicio;i<tamanho;i++){//FAZENDO i=inicio, VARREMOS OS SUB-ARRAYS DEPOIS DE ENCONTRARMOS OS MENORES NUMEROS
			if(arr[i] < menor){//-----DESSE JEITO SALVAMOS SEMPRE O MENOR NUMERO DO ARRAY
				menor = arr[i];//DEPOIS DE RODARMOS TODO O ARRAY O MENOR NUMERO SERA SALVO NESSA VARIAVEL
				indice_menor = i;//O INDICE QUE ESTE NUMERO SE ENCONTRA EH SALVO AQUI
			}
		}

		//---DEPOIS DO MENOR NUMERO SER ENCONTRADO ESTAS PROXIMAS LINHAS FAZEM A TROCA
			aux = arr[inicio];//aux SALVA O NUMERO QUE ESTA NO COMECO DO SUB-ARRAY
			arr[inicio] = menor;//COMECO DO SUB-ARRAY VIRA MENOR NUMERO
			arr[indice_menor] = aux;//POSICAO QUE ERA MENOR NUMERO AGORA EH O NUMERO QUE ESTAVA NO COMECO DO SUB-ARRAY
				

	}

	tempo[1] = clock();


//-------PRINTANDO ARRAY TODO APOS TODAS AS MUDANCAS
	printf("\n\n");
	for(i=0; i<tamanho; i++){
		printf("%d  ", arr[i]);
	}
//--------------------------------------------

	double diferenca = (tempo[1] - tempo[0]) * 1000.0 / CLOCKS_PER_SEC;
	printf("\nTempo gasto: %g\n", diferenca);


	printf("\n\n\n");



	return 0;
}
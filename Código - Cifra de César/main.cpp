// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char a = 'A', z = 'Z';

//Cifra de César
char* CifraDeCesar(const char* texto, int chave)
{
	int tamanho = strlen(texto);
	char* nTexto = new char[tamanho + 1];
	for (int i = 0; i < tamanho; i++) {
		nTexto[i] = texto[i] + chave;
		/*Apenas Letras*/
		if (nTexto[i] > z)
			nTexto[i] = a + (nTexto[i] - z) - 1;
		else if(nTexto[i] < a)
			nTexto[i] = z - (a - nTexto[i]) + 1;
	}
	nTexto[tamanho] = 0;
	return nTexto;
}

//Função Principal
int main()
{
	//ctrl + c event
	int chave = -1;
	char palavra[50];
	FILE* arquivo;

	system("color fc"); // mudar cor do cmd
	printf("\
Criptografia - Cifra de Cesar \n\n\
Como utilizar: \n\
1- Insira a chave(numeros de 0 a 22) \n\
2- Insira palavra por palavra(apenas letras MAIUSCULAS e sem caractere especial), depois precione ENTER\n\
3- Ao terminar de inserar todas as palavras, pressione CTRL+C para encerrar o programa\n\
4- A mensagem criptografada será gravada em um arquivo cifra.txt no diretório do programa\n");

	do
	{
		printf("Insira a chave: ");
		scanf("%d", &chave);

		if (chave < 0 || chave > 22) {
			printf("Chave invalida. Tente novamente\n");
			continue;
		}
		break;
	} while (1);
	

	while (1)
	{
		arquivo = fopen("cifra.txt", "a");;
		printf("Insira a palavra: ");
		scanf("%s", palavra);
		printf("Criptografada: %s\n", CifraDeCesar(palavra, chave));
		fprintf(arquivo, " %s ", CifraDeCesar(palavra, chave));
		fclose(arquivo);
	}
	return 0;
}
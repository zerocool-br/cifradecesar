// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//Cifra de César
char zero = '0', nove = '9', a = 'a', A = 'A', z = 'z', Z = 'Z';
char* CifraDeCesar(const char* texto, int chave)
{
	int tamanho = strlen(texto);
	unsigned char* nTexto = new unsigned char[tamanho + 1];
	for (int i = 0; i < tamanho; i++) {
		nTexto[i] = texto[i] + chave;
		if (texto[i] >= zero && texto[i] <= nove) //número
		{
			if (nTexto[i] > nove)
				nTexto[i] = zero + (nTexto[i] - nove) - 1;
			else if (nTexto[i] < zero)
				nTexto[i] = nove - (zero - nTexto[i]) + 1;
		}
		else if (texto[i] >= a && texto[i] <= z) //minusculo
		{
			if (nTexto[i] > z)
				nTexto[i] = a + (nTexto[i] - z) - 1;
			else if (nTexto[i] < a)
				nTexto[i] = z - (a - nTexto[i]) + 1;
		}
		else if (texto[i] >= A && texto[i] <= Z) //maiusculo
		{
			if (nTexto[i] > Z)
				nTexto[i] = A + (nTexto[i] - Z) - 1;
			else if (nTexto[i] < A)
				nTexto[i] = Z - (A - nTexto[i]) + 1;
		}
		else
			nTexto[i] = texto[i];
	}
	nTexto[tamanho] = 0;
	return (char*)nTexto;
}

//Função Principal
int main()
{
	int chave = -1;
	char palavra[50];
	FILE* arquivo;

	system("color fc"); // mudar cor do cmd
	printf("\
Criptografia - Cifra de Cesar \n\n\
Como utilizar: \n\
1- Insira a chave(numeros de -22 a 22) \n\
2- Insira palavra por palavra(caracteres especiais serão desconsiderados), depois precione ENTER\n\
3- Ao terminar de inserar todas as palavras, pressione CTRL+C para encerrar o programa\n\
4- A mensagem criptografada será gravada em um arquivo cifra.txt no diretório do programa\n");

	do
	{
		printf("Insira a chave: ");
		scanf("%d", &chave);

		if ( chave < -22 || chave > 22) {
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

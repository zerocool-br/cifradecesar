// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum tipo { especial = -1, numero = 0, minusculo = 1, maiusculo = 2};
char zero = '0', nove = '9', a = 'a', A = 'A', z = 'z', Z = 'Z';

int VerificaTipo(unsigned char caractere)
{
	if (caractere >= zero && caractere <= nove)
		return tipo::numero;
	else if (caractere >= a && caractere <= z)
		return tipo::minusculo;
	else if (caractere >= A && caractere <= Z)
		return tipo::maiusculo;
	
	return tipo::especial;
}

void Cifrar(unsigned char* caractere, int chave)
{
	int delta = chave;
	switch (VerificaTipo(*caractere))
	{
	case 0:
		while (*caractere + delta > nove)
			delta = zero + delta - nove - 1;

		while (*caractere + delta < zero)
			delta = nove + delta - zero + 1;
		break;
	case 1:
		while (*caractere + delta > z)
			delta = a + delta - z - 1;

		while (*caractere + delta < a)
			delta = z + delta - a + 1;
		break;
	case 2:
		while (*caractere + delta > Z)
			delta = A + delta - Z - 1;

		while (*caractere + delta < A)
			delta = Z + delta - A + 1;
		break;
	default:
		delta = 0;
		break;
	}
	*caractere = *caractere + delta;
}

char* CifraDeCesar(const char* texto, int chave)
{
	int tamanho = strlen(texto);
	unsigned char* nTexto = new unsigned char[tamanho + 1];
	*nTexto = *texto;
	for (int i = 0; i < tamanho; i++)
		Cifrar(&nTexto[i], chave);
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

		if (chave < -22 || chave > 22) {
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

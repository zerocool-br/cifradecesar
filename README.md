# cifradecesar
A cifra de césar é uma das mais antigas criptografias conhecidas, sido utilizada por Júlio César, que viveu nos anos de 100 a.C a 44 d.C. Hoje, é considerada um tipo de criptografia muito ultrapassada e fácil de ser quebrada.

Por utilziar um algoritmo muito simples, pode ser utilizada como instrumento de aprendizado para quem está começando tanto na área de Programção como de Segurança. O arquivo Tutorial01.pdf é um guia que propõe um desafio envolvendo a Cifra de César.

INSTRUÇÕES DE USO:

1- Insira a chave(numeros de 0 a 22)

2- Insira palavra por palavra(apenas letras MAIUSCULAS e sem caractere especial), depois precione ENTER

3- Ao terminar de inserar todas as palavras, pressione CTRL+C para encerrar o programa

4- A mensagem criptografada será gravada em um arquivo cifra.txt no diretório do programa


FUNÇÕES CRIADAS:

Função: CifraDeCesar("Palavra a ser criptografada", "Chave (0 a 22)")
Descrição: Cripotgrafa uma palvra utilizando a Cifra de César. Ela só funciona com letras MAIUSCULAS e sem caractere especial

Função: main()
Descrição: É a função principal do algoritimo, como sugere o nome. Ela faz a coleta das palavras a serem criptografadas e chave, e gera um arquivo .txt com o texto criptografado.



BIBLIOTECAS UTILIZADAS:

Biblioteca: stdio.h
Funções: printf, scanf, fopen, fprintf, fclose

Biblioteca: stdlib.h
Funções: system

Biblioteca: string.h
Funções: strlen

# Cifra de Cesar
A cifra de césar é uma das mais antigas criptografias conhecidas, sido utilizada por Júlio César, que viveu nos anos de 100 a.C a 44 d.C. Hoje, é considerada um tipo de criptografia muito ultrapassada e fácil de ser quebrada.

Por utilziar um algoritmo muito simples, pode ser utilizada como instrumento de aprendizado para quem está começando tanto na área de Programção como de Segurança. O arquivo Tutorial01.pdf é um guia que propõe um desafio envolvendo a Cifra de César. Caso queira se aventurar, baixe e siga as instruções contidas no arquivo "Tutorial 01 - Criptografia [Computação].pdf" neste diretório.


# INSTRUÇÕES DE USO:


-	Insira a chave(numeros de -22 a 22)

-	Insira palavra por palavra(caracteres especiais serão desconsiderados), depois precione ENTER

- Ao terminar de inserar todas as palavras, pressione CTRL+C para encerrar o programa

- A mensagem criptografada será gravada em um arquivo cifra.txt no diretório do programa


# FUNÇÕES CRIADAS:

```markdown
Função: CifraDeCesar("Palavra a ser criptografada", "Chave (-22 a 22)")

Descrição: Cripotgrafa uma palvra utilizando a Cifra de César. Ela só funciona com com numeros e letras sem caracteres especiais, respeitando a tabela ASCII.
```

```markdown
Função: main()

Descrição: É a função principal do algoritimo, como sugere o nome. Ela faz a coleta das palavras a serem criptografadas e chave, e gera um arquivo .txt com o texto criptografado.
```

# BIBLIOTECAS UTILIZADAS:

```markdown
Biblioteca: stdio.h

Funções: printf, scanf, fopen, fprintf, fclose
```
```markdown
Biblioteca: stdlib.h

Funções: system
```
```markdown
Biblioteca: string.h

Funções: strlen
```

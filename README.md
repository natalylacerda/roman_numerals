# Trabalho 2 - Conversão de números romanos para números arábicos
Link para o repositório no Github: https://github.com/natalylacerda/roman_numerals

## Compilação
- Para compilar os arquivos, escreva no terminal o comando `make`
- Para rodar Valgrind e CPP Check, escreva no terminal o comando `make verify`
- Para remover os arquivos gerados na compilação, escreva no terminal o comando `make clean`

### Execução
Depois de compilado, execute o programa utilizando o comando `./romano`

## Documentação dos Testes
Foram implementados 7 Test Cases. Passar nos testes significa que as funções e tratamentos de exceção estão funcionando corretamente. São eles:

- **TEST_CASE Algarismo Romano:** testa a função que converte cada algarismo romano para seu respectivo valor em numeral arábico.
- **TEST_CASE Inválidos - caracter inválido:** verifica se o caracter existe em numerais romanos ou esta minusculo.
- **TEST_CASE Inválidos - tamanho inválido:** verifica se número possui mais que 30 caracteres
- **TEST_CASE Inválidos - repetição de caracteres inválida:** verfica se os caracteres V, L e D se repetem, e se os caracteres I, X e C se repetem mais de três vezes seguidas.
- **TEST_CASE Inválidos - ordem de caracteres inválida:** verfica se caracter I só aparece antes de I, V e X, e se o caracter X só aparece antes de I, V, X, L e C.
- **TEST_CASE Inválidos - valor muito alto:** verifica se o número é maior que 3000.
- **TEST_CASE Números válidos:** testa alguns exemplos de números romanos válidos.

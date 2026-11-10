# Multiples in Range | Múltiplos em um Intervalo

## English

A beginner-friendly C program that prints every multiple of `N` within the inclusive range defined by `A` and `B`. The program accepts the limits in either order and validates that `N` is not zero.

### Technologies

C

### How to run

Compile with GCC:

```bash
gcc multiples_in_range.c -o multiples_in_range
```

Run the program:

```bash
./multiples_in_range
```

### Example

With `N = 3`, `A = 1`, and `B = 10`, the program displays:

```text
Multiples of 3 between 1 and 10 are:
3
6
9
```

### What I learned

- How to create a function that processes values within an interval.
- How to use loops to inspect every value in a range.
- How to use conditionals and the modulo operator to find multiples.
- How to validate a zero divisor before performing the calculation.

### Future improvements

- Add validation for invalid or non-numeric input.
- Improve the messages shown to the user.
- Allow the user to repeat the calculation without restarting the program.

## Português

Um programa introdutório em C que exibe todos os múltiplos de `N` dentro do intervalo entre `A` e `B`, incluindo os limites. O programa aceita os limites em qualquer ordem e valida se `N` é diferente de zero.

### Tecnologias

C

### Como executar

Compile com GCC:

```bash
gcc multiples_in_range.c -o multiples_in_range
```

Execute o programa:

```bash
./multiples_in_range
```

### Exemplo

Com `N = 3`, `A = 1` e `B = 10`, o programa exibe:

```text
Multiples of 3 between 1 and 10 are:
3
6
9
```

### O que aprendi

- Como criar uma função que processa valores dentro de um intervalo.
- Como utilizar laços para verificar cada valor de um intervalo.
- Como usar condicionais e o operador módulo para encontrar múltiplos.
- Como validar um divisor zero antes de realizar o cálculo.

### Melhorias futuras

- Adicionar validação para entradas inválidas ou não numéricas.
- Melhorar as mensagens exibidas ao usuário.
- Permitir repetir o cálculo sem reiniciar o programa.

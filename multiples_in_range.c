#include <stdio.h>

void multp(int A, int B, int N) {
 int inicio = (A < B) ? A : B;
 int fim = (A > B) ? A : B;

 if (N == 0) {
  printf("N cannot be 0.\n");
  return;
 }

 printf("Multiples of %d between %d and %d are:\n", N, A, B);

 for (int value = inicio; value <= fim; value++) {
  if (value % N == 0) {
   printf("%d\n", value);
  }
 }
}

int main(void) {
 int A, B, N;

 printf("Enter N: ");
 scanf("%d", &N);

 printf("Enter the first limit (A): ");
 scanf("%d", &A);

 printf("Enter the second limit (B): ");
 scanf("%d", &B);

 multp(A, B, N);

 return 0;
}

#include "../scanner.h"

int fib(int n)
{
  int f[n+1];
  int i;
 
  f[0] = 0;
  f[1] = 1;
 
  for (i = 2; i <= n; i++)
      f[i] = f[i-1] + f[i-2];
 
  return f[n];
}

int main(void) 
{
    int num;
    printf("%s", "Enter a number: ");
    scanf("%i", &num);

    int i;
    for (i = 0; i <= num; i++)
        printf("%d\n", fib(i));

	return 0;
}
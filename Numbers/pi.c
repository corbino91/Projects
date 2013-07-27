#include "../scanner.h"

void printPi(int digits)
{
    int pi[] = {1,4,1,5,9,2,6,5,3,5,8,9,7,9,3,2,3,8,4,6,2,6,4,3,3,8,3,2,7,9,5,0,2,8,8,4,1,9,7,1,
        6,9,3,9,9,3,7,5,1,0,5,8,2,0,9,7,4,9,4,4,5,9,2,3,0,7,8,1,6,4,0,6,2,8,6,2,0,8,9,9,8,6,2,8,0};
    char three[] = {'3', '.'};

    
    printf("%s", three);
    int i;
    for (i = 0; i < digits; i++)
    {
        printf("%i", pi[i]);
    }

    printf("\n");
}

int main(void) 
{
    int num;
    printf("%s", "Enter the number of digits of pi you want to see: ");
    scanf("%i", &num);

    printPi(num);

	return 0;
}
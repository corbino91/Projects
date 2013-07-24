#include "../scanner.h"

void reverse(char *str, int size)
{
	size = size;
	char ans[size];

	int count = 0;
	int i;
	for (i = size; i >= 0; i--)
	{
		ans[count] = str[i-1];
		count++;
	}

	int j;
	for (j = 0; j < size; j++)
	{
		str[j] = ans[j];
	}

}


int main(void) 
{
	int rc;
    char str[10];

    rc = getLine ("Enter string> ", str, sizeof(str));
    if (rc == NO_INPUT) 
    {
        // Extra NL since my system doesn't output that on EOF.
        printf ("\nNo input\n");
        return 1;
    }

    if (rc == TOO_LONG) 
    {
        printf ("Input too long [%s]\n", str);
        return 1;
    }

    printf ("OK [%s]\n", str);

	int size = strlen(str);

	printf("Original string: %s\n", str);

	reverse(str, size);

	printf("Reversed string: %s\n", str);

	return 0;
}
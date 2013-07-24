#include "../scanner.h"

void pigLatin(char *str, int size)
{
	int count = 0;
	char ans[size+3];
	char temp;

	if (is_vowel(str[0]))
	{
		int i;
		for (i = 0; i < size; i++)
		{
			ans[count] = str[i];
			count++;
		}

		ans[size] = 'a';
		ans[size+1] = 'y';	
	}

	else
	{
		int i;
		for (i = 0; i < size; i++)
		{
			if (i == 0)
				temp = str[0];
			else
			{
				ans[count] = str[i];
				count++;
			}
		}

		ans[size-1] = temp;
		ans[size] = 'a';	
		ans[size+1] = 'y';
	}

	int j;
	for (j = 0; j < (size+2); j++)
	{
		str[j] = ans[j];
	}

}

int main(void) 
{
	int rc;
    char str[10];

    rc = getLine ("Enter string> ", str, sizeof(str));
    if (rc == NO_INPUT) {
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

	pigLatin(str, size);

	printf("piglatin string: %s\n", str);

	return 0;
}
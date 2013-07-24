#include "../scanner.h"

int vowelCount(char *str, int size)
{
    int count = 0;

    int i;
    for (i = 0; i < size; i++)
        if (is_vowel(str[i]))
            count++;

    return count;
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

	int count = vowelCount(str, size);

	printf("vowel count: %i\n", count);

	return 0;
}
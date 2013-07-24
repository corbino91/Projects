#include "../scanner.h"

int is_palindrome(char *str, int size)
{
    int i;
    int j = size-1;
    for (i = 0; i < size; i++)
    {
        if (str[i] == ' ')
            i++;

        if (str[j] == ' ')
            j--;

        if (str[i] != str[j])
            return 0;

        j--;
    }

    return 1;
}

int main(void) 
{
	int rc;
    char str[30];

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

	if (is_palindrome(str, size))
        printf ("%s is a palindrome\n", str);
    else
        printf ("%s is not palindrome\n", str);

	return 0;
}
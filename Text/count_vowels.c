#include "../scanner.h"

void vowelCount(char *str, int *vc, int size)
{
    int i;
    for (i = 0; i < size; i++)
        switch(str[i])
        {
            case 'a':
            case 'A':
                vc[0]++;
                break;
            case 'e':
            case 'E':
                vc[1]++;
                break;
            case 'i':
            case 'I':
                vc[2]++;
                break;
            case 'o':
            case 'O':
                vc[3]++;
                break;
            case 'u':
            case 'U':
                vc[4]++;
                break;
            default:
                size = size;
        }
}

int main(void) 
{
	int rc;
    char str[20];

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
    int vc[5] = {0};
    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};

	vowelCount(str, vc, size);

    int i;
    for (i = 0; i < 5; i++)
	   printf("%c: %i\n", vowels[i], vc[i]);

	return 0;
}
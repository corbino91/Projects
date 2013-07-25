#include "../scanner.h"

void wordCount(char *str, FILE *summary, int size)
{
    int count = 1;

    int i;
    for (i = 0; i < size; i++)
    {
        if (str[i] == ' ')
            count++;
    }

    fprintf(summary, "String contained %i lines\n", count);
}

void fileRead()
{
    FILE *strings;
    FILE *summary;
    int size;
    int c;
    strings = fopen("strings.txt", "r");
    summary = fopen("summary.txt", "a");

    char str[100];

    while (c = getc(strings) != EOF)
    {
        fgets(str, 100, strings);
        size = strlen(str);
        wordCount(str, summary, size);
    }

    fclose(strings);
    close(summary);
}

int main(void) 
{
    
    fileRead();

	return 0;
}
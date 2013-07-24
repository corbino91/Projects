#ifndef SCANNER_H
#define SCANNER_H

#include <stdio.h>
#include <string.h>

#define OK       0
#define NO_INPUT 1
#define TOO_LONG 2

int getLine (char *prmpt, char *buff, size_t sz);

#endif
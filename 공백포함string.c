#include <stdio.h>
#include <string.h>
 
char s[100];
fgets(s, 100, stdin);
int len = strlen(s);
while (s[len - 1] == '\n' || s[len - 1] == '\r')
    s[--len] = '\0';

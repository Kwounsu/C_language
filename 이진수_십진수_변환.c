#include <stdio.h>
#include <string.h>
 
// 이진수 -> 십진수 
int change(char t[], int len)
{
    if (len==0) return 0;
    return change(t, len-1) * 2 + (t[len-1]-'0');
}
  
int main()
{
    char two[35];
    scanf("%s", two);
    printf("%d\n", change(two, strlen(two)));
    return 0;
}

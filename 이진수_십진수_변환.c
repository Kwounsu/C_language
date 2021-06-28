#include <stdio.h>
#include <string.h>

// 십진수 -> [base]진수
void n_ary(int n, int base) {
    char T[20] = "0123456789ABCDEF";
    int q = n / base;
    int r = n % base;
    if (q == 0)
        printf("%c", T[r]);
        // return;
    else {
        n_ary(q, base);
        printf("%c", T[r]);
        // return;
    }
}
 
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

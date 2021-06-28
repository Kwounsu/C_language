int isPrime(int n){
    if (n < 2) return 0;
    int i = 2;
    while (i * i <= n) {
        if (n % i == 0) return 0;
        i++;
    }
    return 1;
}



// 에라토스테네스의 체

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int prime[2000005];
 
void sieve_of_Eratosthenes(int n) {
    int i, j;
    prime[0] = prime[1] = 1;
    for (i = 2; i * i <= n; i++)
        if (prime[i] == 0)
            for (j = i * i; j <= n; j += i)
                prime[j] = 1;
}

int main() {
    int s, e, i;
    int cnt = 0;
    scanf("%d %d", &s, &e);
    
    sieve_of_Eratosthenes(e);
    
    for (i = s; i <= e; i++) {
        if(prime[i] == 0)
            cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    int A, B;
    char N[1000000];
    long long i, j, sum;
    
    while(1) {
        // A: 변환전 진수, N: 변환할 수, B: 변환후 진수
        scanf("%d ", &A);
        if (A == 0) break;
        scanf("%s %d", N, &B);
        
        // 입력이 0이면 종료
        if (N[0] == '0'){
            printf("0\n");
            continue;
        }
        
        // 십진수로 변환
        sum = 0;
        for (i = strlen(N) - 1, j = 1; i >= 0; i--, j *= A){
            if (N[i] >= 'A') 
                N[i] = '9' + (N[i] - 'A') + 1;
            sum += j * (N[i] - '0');
        }

        // B진수로 변환
        char str[100];
        for (i = 0; sum > 0; sum /= B, i++) {
            if (sum % B > 9) {
                str[i] = (sum%B) - 10 + 'A';
            }
            else {
                str[i] = (sum%B) + '0';
            }
        }

        // 출력
        for (i = i - 1; i >= 0; i--) {
            printf("%c", str[i]);
        }
        printf("\n");
    }
}

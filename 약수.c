#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <vector>
#include <algorithm>
using namespace std;

// 정수 n의 약수를 모두 구해서 반환한다.
vector<int> divisor(int n) {
    vector<int> v;
    int i, j, cnt=0;
    
    for (i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            v.push_back(i);
            if (n / i != i)
                v.push_back(n / i);
        }
    }
    sort(v.begin(), v.end());
    return v;
}

int main() {
    int i, n;
    scanf("%d", &n);
    
    vector<int> divisors = divisor(n);
    for (auto i: divisors)
        printf("%d ", i);
    
    return 0;
}

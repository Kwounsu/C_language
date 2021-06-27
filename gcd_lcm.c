#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <vector>
#include <algorithm>
using namespace std;

int gcd(int x, int y) {
    if (y == 0) return x;
    return gcd(y, x % y);
}

int main() {
    int i, n, k;
    scanf("%d", &n);
    scanf("%d", &k);
    
    int _gcd = gcd(n, k);
    int _lcm = n * k / _gcd;
    
    printf("%d\n%d\n", _gcd, _lcm);
    
    return 0;
}

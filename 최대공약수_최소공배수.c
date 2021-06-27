#include <stdio.h>

int gcd(int x, int y) {
    if (y == 0) return x;
    return gcd(y, x % y);
}

int main() {
    int i, x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    
    int _gcd = gcd(x, y);
    int _lcm = x * y / _gcd;
    
    printf("%d\n%d\n", _gcd, _lcm);
    
    return 0;
}


// multiple values
#include <stdio.h>

int get_gcd(int x, int y) {
    if (y == 0) return x;
    return get_gcd(y, x % y);
}

int main() {
    int i, n, gcd, lcm;;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    gcd = lcm = arr[0];
    
    for (i = 1; i < n; i++) {
        gcd = get_gcd(gcd, arr[i]);
        lcm = lcm * arr[i] / get_gcd(lcm, arr[i]);
    }
    
    printf("%d %d\n", gcd, lcm);
    
    return 0;
}

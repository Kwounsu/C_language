#include <stdio.h>
#include <algorithm>
using namespace std;

void print(int *p, int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", p[i]);
    printf("\n");
}

bool compare(int &x , int &y) {
    return x < y;
} 

int main() {
    int n, s, e;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d%d", &s, &e);
    
    sort(arr, arr + n, compare);
    reverse(arr, arr + n);
    print(arr, n);
    
    return 0;
}

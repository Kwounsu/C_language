#include<stdio.h>

void print(int arr[], int n){
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void swap(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

int main() {
    int n = 10;
    int arr[n];
    
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    for (int i = n - 1; i > 0; i--){
        for (int j = 0; j < i; j++){
            if (arr[j] < arr[j + 1]){
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    return 0;
}

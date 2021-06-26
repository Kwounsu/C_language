void swap(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

void bubble_sort(int arr[], int n) {
    for (int i = n - 1; i > 0; i--){
        for (int j = 0; j < i; j++){
            if (arr[j] < arr[j + 1]){
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}


for (int i = 0; i < n - 1; i++){
    for (int j = 0; j < n - 1 - i; j++){
        if (strcmp(a[j], a[j + 1]) > 0){
            strcpy(tmp, a[j]);
            strcpy(a[j], a[j + 1]);
            strcpy(a[j + 1], tmp);
        }
    }
}

#include<stdlib.h>

int static compare (const void* a, const void* b)
{
    if (*(int*)a > *(int*)b)
        return 1;
    else if (*(int*)a < *(int*)b)
        return -1;
    else
        return 0;
}

int main() {
  int arr[3] = {3, 1, 2};
  
  qsort(arr, n, sizeof(int), compare);
  
  return 0;
}

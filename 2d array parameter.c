// 1. The parameter is a 2D array
int array[10][10];

void passFunc(int a[][10])
{
    // ...
}
passFunc(array);


// 2. The parameter is an array containing pointers

int *array[10];
for(int i = 0; i < 10; i++)
    array[i] = new int[10];

void passFunc(int *a[10]) //Array containing pointers
{
    // ...
}
passFunc(array);


// 3. The parameter is a pointer to a pointer

int **array;
array = new int *[10];
for(int i = 0; i <10; i++)
    array[i] = new int[10];

void passFunc(int **a)
{
    // ...
}
passFunc(array);

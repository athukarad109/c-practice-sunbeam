#include<stdio.h>

void readArray();
void printArray();
void printArrayWithPointers();

int main()
{
    int arr[5];
    readArray(arr);
    printArrayWithPointers(arr);
    return 0;
}


void readArray(int arr[]) //=> array pointer is coming as ref similarly we can use (int *ptr)
{
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[]) //=> array pointer is coming as ref
{
    for(int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
}


//Array is passed by pointer and cannot be passed by value
//This is how we can catch by pointer it is same as above (int arr[]) -> called as array notation same as (int *arr)
void printArrayWithPointers(int *arr)
{
    //we know arr is pointer to first element of array
    int i = 0;
    while(i < 5){
        printf("%d ", *arr); //printing value at arr
        arr++; //next pointer -> points to next value of array
        i++;
    }
}

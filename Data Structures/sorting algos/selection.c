#include<stdio.h>
#define SIZE 5
#define SWAP(a, b) {int t = a; a = b; b = t;}

void display(int arr[])
{
    for(int i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
}

void selectionSort(int arr[])
{
    int sel = 0, pos = 0;
    for(sel = 0; sel < SIZE-1; sel++)
    {
        for(pos = sel+1; pos < SIZE; pos++)
        {
            if(arr[sel] > arr[pos])
            {
                SWAP(arr[sel], arr[pos]);
            }
        }
    }
    display(arr);
}


int main()
{
    int arr[SIZE] = {5 , 7 , 2 , 8 , 1};

    selectionSort(arr);

    return 0;
}


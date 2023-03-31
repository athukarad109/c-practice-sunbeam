#include<stdio.h>

int main()
{

    //for accessing 2d array thr pointer
    //2D array 
    int arr[3][3]={1,2,3,4,5,6,7,8,9}; 
     /*
        arr 
                 [0]    [1]    [2]
         [0]      1      2      3  
         100     100    104    108 

         [1]      4      5      6       
         112     112    116    120 

         [2]      7      8      9 
         124     124    128    132 

    */
    
    //We can access first element address by arr -> in this case 100
    //if we do *(arr+0) -> we get inner 100
    //and then **(arr+0) -> gives value at inner 100 -> which us 1

    printf("%u ",*(arr + 0) + 1 ); //104     
    printf("%u ",*(*(arr + 0) + 1 ) ); //*(104)=>2

    printf("%d ",arr[1][1]);//5 
    printf("%d ",*(*(arr + 1)+1) ); // 5 
          
    return 0; 

    return 0;
}


// 3. Write a program that will calculate the price for a quantity entered
// from the keyboard, given that the unit price is Rs.5 and there is a
// discount of 10 percent for quantities over 30 and a 15 percent
// discount for quantities over 50.

#include<stdio.h>

int main()
{
    int unit_price = 5;
    printf("Enter quantity : ");
    int quantity;
    scanf("%d", &quantity);
    if(quantity > 30 && quantity < 50)
    {
        int price = quantity * unit_price;
        int disc = price - price * 0.1;
        printf("%d", disc);
    }
    else if(quantity >= 50)
    {
        int price = quantity * unit_price;
        int disc = price - price * 0.15;
        printf("%d", disc);
    }
    else
    {
        int price = quantity * unit_price;
        printf("%d", price);
    }
    return 0;
}


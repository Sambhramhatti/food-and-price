#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number from 1 to 5");
    scanf("%d",&num);
    printf("The food item and its price is");
    switch(num)
    {
        case 1:printf("Pizza, Rs 239");
        break;
        case 2:printf("Burger, Rs 129");
        break;
        case 3:printf("Pasta, Rs 179");
        break;
        case 4:printf("French Fries, Rs 99");
        break;
        case 5:printf("Sandwich, Rs 149");
        break;
    }
    return 0;
}
        

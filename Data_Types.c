#include <stdio.h>

int main(){

    int items = 50;
    float cost_Per_Item = 9.99;
    float total_Cost = items * cost_Per_Item;
    char currency = '$';

    printf("Nmber of items: %d\n", items);
    printf("Cost per Item: %.2f %c\n", cost_Per_Item, currency);
    printf("Total cost: %.2f %c\n", total_Cost, currency);
}
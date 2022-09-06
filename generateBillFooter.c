#include <stdio.h>
#include "header.h"

void generateBillFooter()
{
    printf("\n");
    float discount = 0.1 * total;
    float netTotal = total - discount;
    float cgst = 0.09 * netTotal;
    float grandTotal = netTotal + 2 * cgst;

    printf("----------------------------------------\n");
    printf("Sub Total\t\t\t%.2f",total);
    printf("\nDiscount @10%s\t\t\t%.2f","%",discount);
    printf("\n\t\t\t\t--------");
    printf("\nNet Total\t\t\t%0.2f",netTotal);
    printf("\nCGST @9%s\t\t\t%0.2f","%",cgst);
    printf("\nSGST @9%s\t\t\t%0.2f","%",cgst);
    printf("\n----------------------------------------");
    printf("\nGrand Total @9%s\t\t\t%0.2f","%",grandTotal);
    printf("\n----------------------------------------\n");

}
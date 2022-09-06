#include <stdio.h>
#include "header.h"

void generateBillBody()
{
    
    for ( int i = 0; i < customerDetails.numOfItems; i++)
    {
        printf("%s\t\t",orders[i].item);    
        printf("%d\t\t",orders[i].quantity);
        printf("%.2f\t\t\n",orders[i].quantity * orders[i].price);
        
    }
    

}
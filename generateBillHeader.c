#include <stdio.h>
#include "header.h"


void generateBillHeader()
{
    printf("\n\n");
    printf("\t    Your Restaurant");
    printf("\n\t--------------------"); 
    printf("\nDate: %s",customerDetails.date);
    printf("\nInvoice To: %s\n",customerDetails.customerName);
    printf("\n----------------------------------------\n");
    printf("Items\t\t");
    printf("Qty\t\t");
    printf("Total\t\t\n");
    printf("\n----------------------------------------\n");


}
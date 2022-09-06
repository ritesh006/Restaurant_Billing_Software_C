//
// Created by DSI-LPT-060 on 05-09-2022.
//
#include <stdio.h>
#include <string.h>
#include "header.h"


int itemsQuantity;
void generateInvoice(void)
{
    //struct data customerDetails;
    printf("Please Enter Customer Name: ");
    scanf(" %s",customerDetails.customerName);
    // printf("\nName is: %s\n",customerDetails.customerName);  // test

    strcpy(customerDetails.date,__DATE__);

    // printf("Date is: %s\n",customerDetails.date);    // test

    printf("Please Enter Number of Items: \t");
    scanf("%d",&customerDetails.numOfItems);
    printf("\n");
            for (int i = 0; i < customerDetails.numOfItems; ++i) {
                printf("Please Enter The Name of Item %d\t: ", i + 1);
                scanf("%s",orders[i].item);

                printf("Please Enter Quantity of Item:    ");
                scanf("%d",&orders[i].quantity);

                printf("Please Enter The Price:      \t");
                scanf("%f",&orders[i].price);
                total = total + orders[i].price * orders[i].quantity;
                printf("\n\n");
            }

generateBillHeader();  // calling function
generateBillBody();
//generateBillFooter();
generateBillFooter();

// printf("total = %.f",total);


}


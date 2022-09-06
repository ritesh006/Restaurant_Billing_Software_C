//
// Created by DSI-LPT-060 on 05-09-2022.
//
#include <stdio.h>

int operationSelection();
void choiceExecution (int);
void generateInvoice(void);
void generateBillHeader(void); 
void generateBillBody(void);
void generateBillFooter(void);
// void generateBillFooter()

struct data {
    char customerName[50];
    char date[50];
    int numOfItems;
}customerDetails;

struct {
    char item[20];
    float price;
    int quantity;
}orders[50];

float total;

#ifndef RESTAURANT_BILLING_SOFTWARE_C_HEADER_H
#define RESTAURANT_BILLING_SOFTWARE_C_HEADER_H

#endif //RESTAURANT_BILLING_SOFTWARE_C_HEADER_H

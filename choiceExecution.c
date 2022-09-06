//
// Created by DSI-LPT-060 on 05-09-2022.
//
#include <stdio.h>

#include "header.h"


void choiceExecution (int choice)
{
    switch (choice) {

        case 1:
            generateInvoice();
            break;

        default:
            printf("Please Enter Correct Operation... \n\n\n");
            operationSelection();
            

//              goto repeat; //further development
            break;
    }

    // if(choice == 5)
    // {
    //     operationSelection();
    // }
}


#include <stdio.h>
#include "header.h"


int value = 0;
int operationSelection()
{
     /* ------------------- Dashboard Code Starts from Here ------------------------*/
//    repeat: //further development if choice is wrong repeat the process
    printf("============= Your Restaurant =============\n\n");
    printf("Please Enter Your Choice  \n\n");
    printf("1. Generate Invoice.\n");
    printf("2. Show All Invoice.\n");
    printf("3. Search Invoice. \n");
    printf("4. Exit. \n\n");

    printf("Your Choice:   ");
    scanf("%d",&value);

    printf("\nYour Choice is: %d\n",value); //test

    /* ------------------- Dashboard Code Ends Here ------------------------*/
    return value;
}
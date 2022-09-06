#include <stdio.h>        /* Standard Input Output Library for C */
#include "header.h"       /* User Defined Header file for adding functions prototype */

/* ------------------- Main Function Starts from Here ------------------------*/

int main() {

    int choice = 0;
    
   
    choice = operationSelection();

    choiceExecution(choice);


    return 0;
}
/* ------------------- Main Function Ends Here ------------------------*/

#include <stdlib.h>
#include <stdio.h>
#include "mealItem.h"

//create main function to recieve commandline arguments of tax and tip
int main(int argc, char* argv[]) {
    if(argc != 3) {
        printf("Invalid # of arguments. Usage: program.exe tax tip");
        return EXIT_FAILURE;
    }
    double tax = atof(argv[1]);
    double tip = atof(argv[2]);
    extern MealItem menu[];
    extern int menuSize;
}

//create random function to select a menu item


//create function to display the meal price, tax amount, tip amount, and total bill to screen.
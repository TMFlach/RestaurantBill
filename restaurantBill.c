#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "mealItem.h"

//function declarations
PtrToMealItem randomMeal(MealItem* menu, int size);
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
    PtrToMealItem selected = randomMeal(menu, menuSize);
    printf("Selected item: %s\n", selected->item);
    printf("Price: %f\n", selected->price);
    tax = selected->price * tax;
    tip = selected->price * tip;
    printf("Tax: %f\n", tax);
    printf("Tip: %f\n", tip);
    printf("Total: %f\n", (tax + tip + selected->price));
    return EXIT_SUCCESS;
}

//create random function to select a menu item
PtrToMealItem randomMeal(MealItem* menu, int size) {
    time_t t;
    srand((unsigned) time(&t));
    return &menu[rand() % size];
}

//create function to display the meal price, tax amount, tip amount, and total bill to screen.
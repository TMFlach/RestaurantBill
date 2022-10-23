//create struct table containing restraunt menu.
typedef struct {
    char* item;
    double price;
} MealItem, *PtrToMealItem;
typedef const MealItem *PtrToConstMealItem;

const MealItem menu[] = {
    {"Salad", 9.95},
    {"Soup", 4.},
    {"Sandwich", 13.25},
    {"Pizza", 22.35}
};
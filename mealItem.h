//create struct table containing restraunt menu.
typedef struct {
    char* item;
    double price;
} MealItem, *PtrToMealItem;
typedef const MealItem *PtrToConstMealItem;
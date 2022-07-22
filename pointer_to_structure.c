#include <stdio.h>
#include <string.h>

struct Car
{
    char model[10];
    int year;
    int cost;
};

int main()
{
    // Create Car struct and initialize some values
    struct Car c;
    c.cost = 12000;
    c.year = 2012;

    // Create pointer
    struct Car *car_ptr;
    car_ptr = &c;

    // Save the model using pointer
    printf("Enter the car's model: ");
    scanf("%s", car_ptr->model);
    c.model

    // Get the memory locations for the elements
    printf("The model is at %d, year at %d and cost at %d\n",
           &car_ptr->model,
           &car_ptr->year,
           &car_ptr->cost);
    printf("The actual pointer points to %d\n", car_ptr);

    // Print out a value

    printf("The year is %d\n", car_ptr->year);
}
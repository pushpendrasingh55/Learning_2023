#include <stdio.h>
#include <string.h>

struct Person {
    char name[20];
    int age;
    float height;
    int salary;
};

void initializePersons(struct Person persons[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        strcpy(persons[i].name, "Pushpendra");  // Initialize name as an empty string
        persons[i].age = 2;            // Initialize age as 0
        persons[i].height = 8.0;       // Initialize height as 0.0
        persons[i].salary = 10000;         // Initialize salary as 0
    }
}

int main() {
    struct Person persons[5];  // Example array of structures

    initializePersons(persons, 5);  // Call the function to initialize the array

    // Print the initialized values
    int i;
    for (i = 0; i < 5; i++) {
        printf("Person %d:\nName: %s\nAge: %d\nHeight: %.2f\nSalary: %d\n",
               i + 1, persons[i].name, persons[i].age, persons[i].height, persons[i].salary);
        printf("\n");
    }

    return 0;
}

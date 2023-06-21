#include <stdio.h>

struct Student {
    char name[20];
    int marks;
};

void sortStudentsDescending(struct Student students[], int size) {
    int i, j;
    struct Student temp;

    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (students[j].marks < students[j + 1].marks) {
                // Swap the positions of students[j] and students[j + 1]
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

int main() {
    struct Student students[5] = {
        {"aaa", 85},
        {"bbbb", 92},
        {"cccc", 78},
        {"dddd", 89},
        {"eeee", 95}
    };

    int size = sizeof(students) / sizeof(students[0]);

    printf("Before sorting:\n");
    for (int i = 0; i < size; i++) {
        printf("Name: %s, Marks: %d\n", students[i].name, students[i].marks);
    }

    sortStudentsDescending(students, size);

    printf("\nAfter sorting in descending order based on marks:\n");
    for (int i = 0; i < size; i++) {
        printf("Name: %s, Marks: %d\n", students[i].name, students[i].marks);
    }

    return 0;
}

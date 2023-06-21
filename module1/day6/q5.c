#include <stdio.h>
#include <string.h>

struct Student {
    char name[20];
    int marks;
};

void searchStudentByName(struct Student students[], int size, const char* name) {
    int i;
    int found = 0;

    for (i = 0; i < size; i++) {
        if (strcmp(students[i].name, name) == 0) {
            printf("Student found!\n");
            printf("Name: %s, Marks: %d\n", students[i].name, students[i].marks);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student not found!\n");
    }
}

int main() {
    struct Student students[5] = {
        {"xxxx", 85},
        {"yyy", 92},
        {"zzzz", 78},
        {"aaaa", 89},
        {"aaaa", 95}
    };

    int size = sizeof(students) / sizeof(students[0]);

    char searchName[20];
    printf("Enter the name of the student to search: ");
    scanf("%s", searchName);

    searchStudentByName(students, size, searchName);

    return 0;
}


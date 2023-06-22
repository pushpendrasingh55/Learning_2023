#include<stdio.h>
int main(){
    FILE *fp;
    int id;
    char name[20];
    float salary;
    fp = fopen("emp.txt", "w+");
    if (fp == NULL){
        printf("file not found\n");
        return 0;
    }
    printf("Enter employee name: ");
    scanf("%s", name);
    fprintf(fp, " Name: %s\n", name);
    printf("Enter employee id: ");
    scanf("%d", &id);
    fprintf(fp, "ID: %d\n", id);
    printf("Enter employee salary: ");
    scanf("%f", &salary);
    fprintf(fp, "Salary: %f\n", salary);
    
}
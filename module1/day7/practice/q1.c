/*#include<stdio.h>

int main(){
    FILE *fp;
    fp = fopen("file.txt", "w");
    fprintf(fp, "Hello file by fprintf..lalalalalalalalala.\n");
    fclose(fp); //
    return 0;
}*/
#include <stdio.h>
int main() {
   FILE *fp;
   char buff[255]; // creating a character array to store data from the file
   fp = fopen("file.txt", "r");
   while (fscanf(fp, "%s", buff) != EOF) {
      printf("%s\n", buff);
   }
   fclose(fp);
}

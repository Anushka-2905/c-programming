1..Store and Display Student Details

#include<stdio.h>

#include<string.h>

   struct student {
    int roll;
    char name[20];
    float marks;
   };

   int main() {
    struct student s1;
    s1.roll = 1;
    strcpy(s1.name , "Anushka");
    s1.marks = 89.6;

    printf("Roll no : %d\n", s1.roll );
    printf("Name : %s\n", s1.name);
    printf("Marks : %.2f\n", s1.marks);

    return 0;
   }  



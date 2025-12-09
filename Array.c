1..Enter marks of 5 student

#include<stdio.h>

int main() {
   int marks[5];

   for(int i = 0; i<5; i++) {
      scanf("%d", &marks[i]);

   }
   printf("Your Entered : ");
for(int i = 0; i<5; i++) {
   printf("%d\n", marks[i]);
}
 return 0;
}

2.. Sum of Entered numbers

#include<stdio.h>

int main() {
   int marks[5];
    int sum = 0;
   for(int i = 0; i<5; i++) {
      scanf("%d", &marks[i]);

   }
   printf("Your Entered : ");
for(int i = 0; i<5; i++) {
   printf("%d\n", marks[i]);

   sum = sum + marks[i];

}
  printf("Sum is %d", sum);
 return 0;
}

3.. Largest Number

#include<stdio.h>

int main() {
   int a[5];
    
   for(int i = 0; i<5; i++) {
      scanf("%d", &a[i]);

   }
   int max = a[0];
for(int i = 0; i<5; i++) {
   if (a[i] > max) {
      max = a[i];
   }

   4..finding even or odd numbers

   #include <stdio.h>

int main() {
    int n, i;
    printf("Entere how many numbers : ");
    scanf("%d", &n);
    int arr[n];
    printf("Entered %d numbers :\n", n);
    for(i = 0; i<n; i++)  {
        scanf("%d", &arr[i]);
    }
   //print even numbers

   printf("\nEven numbers are:\n");

   for(i = 0; i<n; i++)  {
    if (arr[i] % 2 == 0)  {
        printf("%d\n", arr[i]);
    }
   }
    // print odd numbers

    printf("\nOdd numbers are:\n");

    for(i = 0; i<n; i++)  {
        if(arr[i] % 2 != 0) {
            printf("%d\n", arr[i]);
        }
    }

    return 0;
}

}
  printf("Largest = %d", max);
 return 0;
}

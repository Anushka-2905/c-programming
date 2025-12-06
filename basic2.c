6..Write a program to check leap year.

#include<stdio.h>
int main() {
    
       int year;
       printf("Enter current year : ");
       scanf("%d", &year);

       if(year % 4 == 0) {
        printf("Current year is %d leap year", year);

       }
       else if(year % 100 != 0) {
        printf("Current year is %d not leap year", year);
       }
       else {
        printf("Current year is %d not leap year", year);
       }

    
    return 0;
}

7..Write a program to find the sum of first N natural numbers.

  #include<stdio.h>
int main() {
    
       int n;
       printf("Enter the first N natural number");
       scanf("%d", &n);
       int sum;
       sum = n*(n+1)/2;
       printf("Sum is %d", sum);

    
    return 0;
}

8..Write a program to find the factorial of a number.

  #include<stdio.h>
int main() {
    
      int n;
      printf("Enter the number");
      scanf("%d", &n);
      float fact = 1;


      if(n < 0) {
        printf("factorial is not defined for negative number");

      }
      else {
        for(int i=1; i<=n; i++) {
            fact = fact * i;

        }
        printf("factorial is %d = %f", n,fact);
      }

    return 0;
}

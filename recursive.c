1..Factorial of number

#include<stdio.h>
   int fact(int n);

    int main(){
        int n;
        printf("Enter the number : ");
        scanf("%d", &n);
        printf("factorial is %d", fact(n));
    }
int fact(int n)  {
    if (n == 0) 
    return 1;
   return n * fact(n-1);

}

2.. print a number from n to 1 
#include<stdio.h>

void print(int n);   // function declaration

int main() {
    int n;

    printf("Enter the number : ");
    scanf("%d", &n);

    print(n);   // function call

    return 0;
}

void print(int n) {
    if(n == 0)      // base case
        return;

    printf("%d ", n);   // print the number

    print(n - 1);       // recursive call
}

3..print number from 1 to n

#include<stdio.h>

void print(int n);   // function declaration

int main() {
    int n;

    printf("Enter the number : ");
    scanf("%d", &n);

    print(n);   // function call

    return 0;
}

void print(int n) {
    if(n == 0)      // base case
        return;

    print(n - 1);    // recursive call
      printf("%d ", n);
}

4..Sum of N natural number

#include<stdio.h>

int sum(int n);
int main() {
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("Sum is %d", sum(n));
    return 0;

}

int sum(int n) {
    if (n == 0)

    return 0;
    return n + sum(n-1);
}



   

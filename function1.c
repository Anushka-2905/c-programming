1..Create a function for addition of two numbers
#include<stdio.h>

int sum(int a, int b);

int main() { 
              int a, b;
              printf("Enter the number : ");
              scanf("%d", &a);
               printf("Enter the number : ");
              scanf("%d", &b);

              printf(" sum is %d", sum(a, b));  // call the function


  return 0;
}

int sum(int a, int b)  {
 
return a + b;
}

2..Create a function for substraction of two numbers

#include<stdio.h>

int sub(int a, int b);   // create a function
int main() {
  int a, b;
  int S;
  printf("Enter the number : ");
  scanf("%d", &a);
  printf("Enter the number : ");
  scanf("%d", &b);

  S = sub(a, b);  // call the function and store data

  printf("Substraction is %d", S);
    
      
    return 0;
}

//  define function
int sub(int a, int b)  {
  int S;
  S = a - b;
  return S;
}

3.. Comparison between two number

#include<stdio.h>

void comparison(int a, int b);   // create a function
int main() {
  int a, b;
  
  printf("Enter the number : ");
  scanf("%d", &a);
  printf("Enter the number : ");
  scanf("%d", &b);

   comparison(a, b);  // call the function and store data

    return 0;
}

//  define function
void comparison(int a, int b)  {
  if(a > b) {
    printf("largest number is %d", a);
  }

  else if(a < b) {
    printf("largest number is %d", b);
  }
}

4..Write a function to return the factorial of a number.

  #include<stdio.h>
void fact(int n);

int main() {
   int n;
   printf("Enter the number");
   scanf("%d", &n);

  fact(n);
  return 0;
}

void fact(int n){
   
   float factorial = 1; 
   if(n < 0){
    printf("Factorial of negative number is not define");
   }
  else {
   for(int i=1; i<=n; i++) {
      factorial = factorial * i;


    
   }
   printf("Factorial of number %d = %f", n, factorial);
  }
}



  





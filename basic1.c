1..print Hello Word program
#include<stdio.h>
  
  
  int main()  {
    printf("Hello Word..!");
    return 0;
  }

2.. Adition of two numbers
#include<stdio.h>
int main()
    {
        int a, b;
        printf("enter a");
        scanf("%d", &a);
        printf("enter b");
        scanf("%d", &b);

        int sum = a+b;
        printf("sum is : %d", sum);
        return 0;
    }  

3..Write a program to find the square of a number.

  #include<stdio.h>
int main() {
    int a;
    printf("Enter the number : ");
    scanf("%d", &a);
    int square;
    square = a * a;
    printf("Square is %d", square);
    return 0;
}

4..Write a program to check whether a number is even or odd.

    #include<stdio.h>
int main() {
    int a;
    printf("Enter the number : ");
    scanf("%d", &a);
    if(a % 2 == 0)  {
        printf("Number is %d even", a);
    }
    else {
        printf("Number is %d odd", a);
    }
    return 0;
}

5..Write a program to find the largest of two numbers.

    #include<stdio.h>
int main() {
    int a, b;
    printf("Enter the  1st number : ");
     scanf("%d", &a);
    printf("Enter the  2nd number : ");
    scanf("%d", &b);

    if(a > b)  {
        printf("largest number is %d ", a);
    }
    else  if(a < b ){
        printf("largest number is  %d ", b);
    }
    return 0;
}

6..Write a simple calculator using switch case.

    #include<stdio.h>
int main() {
    int a;
    char op;
    int b;
    
      
    scanf("%d %c %d", &a, &op, &b);
    switch(op)  {
        case '+' :
        printf("%d", a+b);
        break;

        case '-' :
        printf("%d", a-b);
        break;

        case '*' :
        printf("%d", a*b);
        break;

        case '/' :
        printf("%d", a/b);

        default : 
        printf("Invalid calculater ");
    }

    
    return 0;
}

   

#include <stdio.h>
#include <conio.h>


int main(void){

    // print masalex8.com on the screen
    printf("masalex8.com\n");

    // addition//
    int a, b, c;
    //printf("enter the first number\n");
    //scanf("%d", &a);
    //printf("enter the second number\n");
    //scanf("%d", &b);
    //c = a + b;
    //printf("the sum of the two numbers is: %d", c);

// subtraction //
    //int a, b, c;
    //printf("enter the first number\n");
    //scanf("%d", &a);
    //printf("enter the second number\n");
    //scanf("%d", &b);
    //c = a - b;
    //printf("the difference of the two numbers is: %d", c);

    // division and multiplication
    //float a, b;
    //printf("enter the first number\n");
    //scanf("%f", &a);
    //printf("enter the second number\n");
    //scanf("%f", &b);
    //printf("the product of the two number is %.1f and when divided gives %.1f", a * b, a / b);

    // swapping two numbers
    //printf("enter the two numbers\n");
    //scanf("%d%d", &a, &b);
    //c = b; b = a; a = c; printf("the first number is now : %d and the second number is : %d", a, b);

    // a simple if statement
    //printf("enter the 2 nums : \n");
    //scanf("%d%d", &a, &b);

    // conditionals //
    //if (a > b)
    //    printf("%d is clearly bigger than %d\n", a, b);
    //if (a < b)
    //    printf("%d is clearly bigger than %d\n", b, a);
    //else
    //    printf("dude, the 2 numbers are clearly equal\n");

    //printf("enter your favourite number\n");
    //scanf("%d", &a);
    //if (a % 5 == 0)
    //    printf("your favourite numbers has 5 as one of it's factors");
    //else
    //    printf("OOOhh..! men, your number is so annoying.");

    //int age;
    //char marital_status;

    //printf("enter your age then your marital status\n :");
    //scanf("%d%c", &age, &marital_status);
    //if ((marital_status == 'm'))
     //   printf("your not allowed to marry");
    //else
     //   printf("your better marry sooner or later", "%c", marital_status);

    //if (condiion) ? execute this if true : else execute this

    // print the sum of a given number
    //int n, sum = 0, rem;
    //printf("enter your number and see some magic \n");
    //scanf("%d", &n);
    //while (n > 0){
     //   rem  = n % 10;
     //   sum += rem;
     //   n = n / 10;
    //}
    //printf("the sum of indeviduals is %d", sum);

    // check if a given number is an amstrong number //
    //int n, sum = 0, rem, stationary;
    //printf("enter your number and see some magic \n");
    //scanf("%d", &n);
    //stationary = n;
    //while (n > 0){
      //  rem  = n % 10;
     //   sum += rem * rem *rem;
     //   n = n / 10;
    //}

    //if (sum == stationary){
        //printf(stationary);
    //    printf("that number is armstrong");
    //}
    //else
   //     printf("dude just try harder, %d isn't good enough", sum);


    int n;

    printf("enter the nmber of rows");
    scanf("%d", &n);

    for (int i = n; i >= 1; i --){
        for (int j = 1; j <= i; j ++)
        {
            printf("#");
        }
        printf("\n");
    }

    1:50:42;

getch();
}


















#include <stdio.h>
#include "cs50.h"
// my functions initialization area
float areaOfCircle(float a);
float areaOfTrangle(float base, float height);
string swapNums(int a, int b);
// int sortThreeNums(int a, int b, int c); //NEEDS CORRECTION
void forQuadratics (int a, int b, int c);
void armstrong(int a);
void tableOfNum(int a);
void tableOfNumWithRange(int num, int count);
void stars(int num); void rightAngleStars(int num); void invertedrightStars(int num);
void toRightAngle(int num);
void xmasTree(int num);


int main (){
	
	// printf("the area is: %.2f", areaOfCircle(12));
	// printf("the area is %.2f", areaOfTrangle(3, 4));
	
	// int p, n, r;
	// printf("enter the values\n");
	// scanf("%d%d%d", &p, &n, &r);
	// printf("the product is %d", p*n*r);
	// printf("%s", swapNums(2,4));

	// sortThreeNums(12,56,32);
	// forQuadratics(4, 5, 12);

	int n = get_int("enter a number: ");
	// for (int i; i < n; i ++) printf("%d\n", i + 1);

	// int start = get_int("enter a number\n"), end = 1;
	// do{
	// 	printf("%d\n", start); start --;
	// }while(start >= end);

	// for (int i = 0; i < n * 2; i += 2) printf("%d\t", i);

	// armstrong(n);
	// tableOfNum(n);
	// tableOfNumWithRange(12, 20);

	// toRightAngle(6);
	xmasTree(n);

}






// MY FUNCTIONS
float areaOfCircle(float a){
	return .5 * 3.14 * a * a;
}

float areaOfTrangle(float base, float height){
	return .5 * base * height;
}

string swapNums(int a, int b){
	int temp;
	printf("intially, a : %d, b : %d\n", a, b);
	temp = a;
	printf("now, a : %d, b : %d\n", b, temp);
	return "";
}

// int sortThreeNums(int a, int b, int c){  //wrong needs corection
// 	int final[3];

// 	if (a < b && a < c){
// 		final[0] = a;
// 	}else if (b < a && b < c){
// 		final[0] = b;
// 	}else if (c < a && c < b){
// 		final[0] = c;
// 	}else if (a > b && a < c){
// 		final[1] = a;
// 	}else if (b > a && b < c){
// 		final[1] = b;
// 	}else if (c > a && c < b){
// 		final[1] = c;
// 	}else if (a > b && a > c){
// 		final[2] = a;
// 	}else if (b > a && b > c){
// 		final[2] = b;
// 	}else if (c > a && c > b){
// 		final[2] = c;
// 	}

// 	printf("them in sorted order : %d, %d, %d", final[0], final[1], final[2]);
// 	return 0;
// }

void forQuadratics (int a, int b, int c){
	float x = b * b - 4 * a * c;
	float x1 = (-b + x) / (2 * a), x2 = (-b - x) / (2 * a);

	if (x > 0) printf("roots are unequal!\n");
	else if (x < 0) printf("roots are imaginery!\n");
	else printf("roots are equal\n");

	printf("the decreminant is %.1f and, two roots are : x1 = %.1f, x2 = %.1f", x, x1, x2);
}

void armstrong(int a){
	int q = a;
	int stat = 0, rem;
	while (q > 0){
		rem = q % 10;
		stat += rem * rem * rem;
		q = q / 10;
	}
	printf("%d and %d\n", a, stat);
	if (stat == a) printf("%d is armstrong", a);
	else printf("%d will never ever be armstrong", a);
}

void tableOfNum(int a){
	for (int i = 1; i <= 10; i ++) printf("%d X %d = %d\n", i, a, i * a);
}

void tableOfNumWithRange(int num, int count){
	for (int i = 1; i <= count; i ++) printf("%d X %d = %d\n", i, num, i * num);
}

void stars(int num){
	for (int i = 1; i < num; i ++){
		for (int j = 0; j < num; j ++) printf("*");
		printf("\n");
	}
}

void rightAngleStars(int num){
	for (int i = 1; i <= num; i ++){
		for (int j = 0; j < i; j ++) printf("*");
		printf("\n");
	}
}

void invertedrightStars(int num){
	for (int i = num; i > 0; i --){
		for (int j = 0; j < i; j ++) printf("*");
		printf("\n");
	}
}

// void toRightAngle(int num){ // NEED REVISITING
// 	printf("here we go\n");
// 	for (int i = 0; i > num; i ++){
// 		for (int j = 1; j <= num - i; j ++) {
// 			printf(" ");
// 		}
// 		for(int g = 0; g < i + 1; g ++) {
// 			printf("*");
// 		}
// 	printf("\n");
// 	}
// }


void xmasTree(int num){
	for (int i  = 1; i <= num; i ++){
		for (int k = 0; k = num - i; k ++){
			printf(" ");
		}
		// for (int j )
		printf("**");

		printf("\n");
	}
}

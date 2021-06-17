#include "cs50.h"
#include <stdio.h>
#include <string.h>

// initialize my functions
void laugh(void);
void laughTimes(int num);
string serve (string name);
double areaOfTriangle(float base, float height);
// char getString(char[2000]);


int main(){
  // for(int i = 0; i <= 3; i ++) laugh();
  // laughTimes(4);
  // serve("masalex8");
  areaOfTriangle(12.222, 10.4345098);
}

// the functions
void laugh(void){
  printf("you can laugh\n");
}

void laughTimes(int num){
  for(int i = 0; i <= num; i++) printf("laugh\n");
}

string serve (string name){
  printf("your name is : %s\n", name);
  return name;
}


double areaOfTriangle(float base, float height){
  double result = .5 * base * height;
  return printf("%.2f", result);
}



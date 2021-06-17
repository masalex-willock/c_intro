#include <stdio.h>
#include "cs50.h"
#include <string.h>

// my function initialize
float average ();

const int N = 3; int total = 0;
int main(void){
  
  // int count = get_int("enter number of exercises ");
  // int scores[count];
  // for(int i = 0; i < count; i ++){
  //   scores[i] = get_int("enter score %d\n", i + 1);
  // }

  // printf("the total is %d and the average is %.2f and it coresponds with character %c\n", total, average(count, scores), (int) average(count, scores));

  // string name = get_string("enter your name : ");
  // printf("your name is ");

  // for (int i = 0; name[i] != '\0'; i ++){ // -> also functional
  //   for (int i = 0; i < strlen(name); i ++){ // -> with string.h library
  //   printf("%c\n", name[i]);
  // }

  //// printf("\n");

  // average();

  string girls[5] = {"lordin", "vivian", "carol", "pousy", "lambog"};
  // printf("the first girl is %s", girls[0]);
  typedef struct{
    string name; float age;
  }girlsAndAge;

  girlsAndAge gp1[5];
  
  gp1[0].name = "juliet";
  gp1[0].age = 27;
  gp1[1].name = "bejof";
  gp1[1].age = 21;
  gp1[2].name = "beyonce";
  gp1[2].age = 38;
  gp1[3].name = "babra";
  gp1[3].age = 23;
  gp1[4].name = "benna";
  gp1[4].age = 19;


  printf("%s", gp1[3].name);
}






float average (){
  float total = 0; int len = 0; float num;
  printf("keep entering numbers, when done enter \"-1 (neg one)\"\n");
  do{
    num = get_float("");
    total += num; len ++;
  }while(num != -1);

  printf("total is %.2f, \nthe average is %.2f", total, total / len);
  return 0;
}

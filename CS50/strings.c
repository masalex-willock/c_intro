#include "cs50.h"
#include <stdio.h>
#include <string.h> //acces some string methods
#include <ctype.h> // toupper, toLower, etc

// fn initialize
string altCase(string str);

int main(){

  // string name = get_string("name: ");
  // printf("before: %s\n", name);
  // printf("after: ");

  // for (int i = 0, len = strlen(name); i < len; i ++){
  //   if(name[i] >= 'a' && name[i] <= 'z') printf("%c", name[i] - 32);
  //   else printf("%c", name[i]);
  // }
  // printf("\n");

  //a little optimized with the ctype.h library
  // string name = get_string("name: ");
  // printf("before: %s\n", name);
  // printf("after: ");

  // for (int i = 0, len = strlen(name); i < len; i ++){
  //   printf("%c", toupper(name[i]));
  // }
  // printf("\n");

  altCase("mAsAlEx8ToM");

}




//functions
string altCase(string str){
  // string str = get_string("enter a word : ");
  printf("case alternated : ");
  for (int i = 0, len = strlen(str); i < len; i ++){
    if (str[i] == tolower(str[i])) printf("%c", toupper(str[i]));
    else printf("%c", tolower(str[i]));
  }
  printf("\n");
}



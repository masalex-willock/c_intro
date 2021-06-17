#include <stdio.h>
#include "cs50.h"
#include <stdbool.h>
#include <string.h>

int main(int a, string argv[]){
  printf("you entered %d arguments.\n\n", a - 1);

  for(int i = 1; i < a; i ++) printf("the argument %s\n", argv[i]);
}
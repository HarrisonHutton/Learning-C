#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int five(void);
int addOne(int);

int main(int argc, char const *argv[]) {
  bool x = true;
  int y = 2;

  if (x){
    printf("x is true.\n");
  }
  if (y){
    printf("y is true.\n");
  }
  if (x == y){
    printf("x and y are equal.\n");
  }

  printf("%d\n", five());

  printf("Testing the addOne(...) function:\n");
  printf("%d\n", addOne(7));

  return 0;
}

int five(void){
  return 5;
}

int addOne(int num){
  return num + 1;
}

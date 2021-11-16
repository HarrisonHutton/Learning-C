#include <stdio.h>

int five(void);
int addOne(int);
char* makeHelloWorld();


int main(int argc, char const *argv[]) {
  printf("Testing addOne(...) with the input 89.\nExpected result is 90:\n");
  printf("%d\n", addOne(89));
  printf("%s\n", makeHelloWorld());
  return 0;
}

char* makeHelloWorld(){
  return "Hello World";
}

int five(void){
  return 5;
}

int addOne(int num){
  return num + 1;
}

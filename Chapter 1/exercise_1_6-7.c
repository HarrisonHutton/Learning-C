#include <stdio.h>

main(){
  int c;

  while ((c = getchar()) != EOF){
    printf("%d\t%d\n", c != EOF, c == EOF);
    printf("EOF: %d\n", EOF);
    putchar(c);
  }
}

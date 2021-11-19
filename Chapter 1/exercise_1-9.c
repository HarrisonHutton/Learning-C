#include <stdio.h>

main(){
  int c;

  while ((c = getchar()) != EOF){
    if (c == ' '){
      putchar(c);
      while ((c == getchar()) == ' '){
        ; /* keep looking through the input */
      }
    }
    if ((c == getchar()) != ' '){
      putchar(c);
    }
  }

}

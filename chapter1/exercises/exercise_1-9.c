#include <stdio.h>

/* NOT WORKING */

main(){
  int c;

  while ((c = getchar()) != EOF){
    if (c == ' '){
      putchar(c);
      while ((c == getchar()) == ' '){
        ; /* keep looking through the input */
      }
    }
  }

}

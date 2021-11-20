#include <stdio.h>


/* count characters in input; first version */
main(){
  long nc;
  int c;

  c = getchar();
  nc = 0;
  while (c != EOF){
    ++nc;
  }
  printf("Finished the while loop.\n");
  printf("%ld\n", nc);
}

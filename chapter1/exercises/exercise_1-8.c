#include <stdio.h>

/* counting blanks, tabs, and newlines */
main(){
  int c, blanks, tabs, nl;

  blanks = 0;
  tabs = 0;
  nl = 0;

  while ((c = getchar()) != EOF){
    if (c == ' '){
      ++blanks;
    }
    if (c == '\t'){
      ++tabs;
    }
    if (c == '\n'){
      ++nl;
    }
  }

  printf("Blanks: %d\t Tabs: %d\t Newlines: %d\n", blanks, tabs, nl);
}

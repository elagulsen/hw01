#include <stdio.h>

int main() {
    unsigned int i;
    i = 2100000001;
    char * p;
    p = &i;
    printf("%x\n", i); //prints in hexademical

    printf("\n\n");

    int k; //printing out individual bytes
    for (k = 0; k < 4; k++){
      printf("%hhx\n", *p);
      p++;
    }

    printf("\n\n");
    int e;
    p = &i;
    for (k = 0; k < 4; k++) {

      (*p)++;
      printf("%hhx\n", *p);
      p++;
    }

    printf("\n\n");
    
    p = &i;
    for (k = 0; k < 4; k++) {
      (*p)+= 16;
      printf("%hhx\n", *p);
      p++;
    }
    
    return 0;
}

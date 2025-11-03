#include<stdio.h>

int main() {
    
    int scores[2][3] = {
          {65, 84, 72},
          {35, 59, 67}
       };
          printf("The elementsof the array are:\n");
          for(int i =0; i<2; i++){
               for(int j = 0; j<3; j++){
                  printf("%d\t", scores[i][j]);
               }   
               printf("\n");
           }
           return 0;
        }   
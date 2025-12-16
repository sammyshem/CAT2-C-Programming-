/*
Name:Shem sammy
Reg No:PA106/G/28607/25
Date:2nd Nov 2025
Description: A C Program to define array data structure and initialize 2D Array,
              and print  the elements of the array
*/

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

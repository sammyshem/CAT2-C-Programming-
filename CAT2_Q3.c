/*
Name:Shem Sammy
Reg No:PA106/G/28607/25
Description: A C Program to handle input, processing and output related to employees wages and taxes
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void writeInputFile() {
    FILE *fp;
    int numbers[SIZE];

    fp = fopen("input.txt", "w");
    if (fp == NULL) {
        printf("Error opening input file!\n");
        exit(1);
    }

    printf("Enter %d integers:\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &numbers[i]);
        fprintf(fp, "%d\n", numbers[i]);
    }

    fclose(fp);
}

void processFile() {
    FILE *inFile, *outFile;
    int num, sum = 0, count = 0;
    float avg;

    inFile = fopen("input.txt", "r");
    if (inFile == NULL) {
        printf("Error opening input.txt!\n");
        exit(1);
    }

    outFile = fopen("output.txt", "w");
    if (outFile == NULL) {
        printf("Error opening output.txt!\n");
        fclose(inFile);
        exit(1);
    }

    while (fscanf(inFile, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    avg = (float)sum / count;

    fprintf(outFile, "Sum = %d\n", sum);
    fprintf(outFile, "Average = %.2f\n", avg);

    fclose(inFile);
    fclose(outFile);
}

void displayFiles() {
    FILE *fp;
    char ch;

    printf("\nContents of input.txt:\n");
    fp = fopen("input.txt", "r");
    if (fp == NULL) {
        printf("Error reading input.txt!\n");
        return;
    }
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);
    fclose(fp);

    printf("\nContents of output.txt:\n");
    fp = fopen("output.txt", "r");
    if (fp == NULL) {
        printf("Error reading output.txt!\n");
        return;
    }
    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);
    fclose(fp);
}

int main() {
    writeInputFile();   
    processFile();      
    displayFiles();     

    return 0;
}

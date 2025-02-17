#include <stdio.h>
#include <string.h> // For strcpy function

// Define constants
#define INT_ARRAY_SIZE 10
#define FLOAT_ARRAY_SIZE 5
#define CHAR_ARRAY_SIZE 26
#define NUM_STRINGS 10
#define MAX_CHARACTERS_PER_STRING 20
#define ALPHABET_BEGINNING 65 // 'A'

// Define struct MyDataOne
struct MyDataOne {
    int iArray[INT_ARRAY_SIZE];
    float fArray[FLOAT_ARRAY_SIZE];
};

// Define struct MyDataTwo
struct MyDataTwo {
    char cArray[CHAR_ARRAY_SIZE];
    char strArray[NUM_STRINGS][MAX_CHARACTERS_PER_STRING];
};

int main(void) {
    // Variable declarations
    struct MyDataOne data_one;
    struct MyDataTwo data_two;
    int i;

    // *** PIECE-MEAL ASSIGNMENT (HARD-CODED) ***
    data_one.fArray[0] = 0.1f;
    data_one.fArray[1] = 1.2f;
    data_one.fArray[2] = 2.3f;
    data_one.fArray[3] = 3.4f;
    data_one.fArray[4] = 4.5f;

    // *** LOOP ASSIGNMENT (USER INPUT) ***
    printf("\n\n");
    printf("Enter %d Integers : \n", INT_ARRAY_SIZE);
    for (i = 0; i < INT_ARRAY_SIZE; i++) {
        scanf("%d", &data_one.iArray[i]);
    }

    // *** LOOP ASSIGNMENT (HARD-CODED) ***
    for (i = 0; i < CHAR_ARRAY_SIZE; i++) {
        data_two.cArray[i] = (char)(i + ALPHABET_BEGINNING); // Assign alphabet characters
    }

    // *** PIECE-MEAL ASSIGNMENT (HARD-CODED) ***
    strcpy(data_two.strArray[0], "Welcome !!!");
    strcpy(data_two.strArray[1], "This");
    strcpy(data_two.strArray[2], "Is");
    strcpy(data_two.strArray[3], "ASTROMEDICOMP");
    strcpy(data_two.strArray[4], "Real");
    strcpy(data_two.strArray[5], "Time");
    strcpy(data_two.strArray[6], "Rendering");
    strcpy(data_two.strArray[7], "Batch");
    strcpy(data_two.strArray[8], "Of");
    strcpy(data_two.strArray[9], "2020-2021 !!!");

    // *** DISPLAYING DATA MEMBERS OF 'struct DataOne' AND THEIR VALUES ***
    printf("\n\n");
    printf("Members of 'struct DataOne' Along with Their Assigned Values Are: \n\n");

    printf("Integer Array (data_one.iArray[]) : \n");
    for (i = 0; i < INT_ARRAY_SIZE; i++) {
        printf("data_one.iArray[%d] = %d\n", i, data_one.iArray[i]);
    }

    printf("\n\n");
    printf("Floating-Point Array (data_one.fArray[]) : \n");
    for (i = 0; i < FLOAT_ARRAY_SIZE; i++) {
        printf("data_one.fArray[%d] = %f\n", i, data_one.fArray[i]);
    }

    // *** DISPLAYING DATA MEMBERS OF 'struct DataTwo' AND THEIR VALUES ***
    printf("\n\n");
    printf("Members of 'struct DataTwo' Along with Their Assigned Values Are: \n\n");

    printf("Character Array (data_two.cArray[]) : \n");
    for (i = 0; i < CHAR_ARRAY_SIZE; i++) {
        printf("data_two.cArray[%d] = %c\n", i, data_two.cArray[i]);
    }

    printf("\n\n");
    printf("String Array (data_two.strArray[]) : \n");
    for (i = 0; i < NUM_STRINGS; i++) {
        printf("%s ", data_two.strArray[i]);
    }

    printf("\n\n");
    return 0;
}
#include <stdio.h>

// DEFINING STRUCT
struct MyData {
    int i;
    float f;
    double d;
    char c;
};

// Inline initialization of 'data' of type 'struct MyData'
struct MyData data = {30, 4.5f, 11.451995, 'A'};

int main(void) {
    // Displaying values of the data members of 'struct MyData'
    printf("\n\n");
    printf("DATA MEMBERS OF 'struct MyData' ARE : \n\n");
    printf("i = %d\n", data.i);
    printf("f = %f\n", data.f);
    printf("d = %lf\n", data.d);
    printf("c = %c\n\n", data.c);
    
    return 0;
}
#include <stdio.h>

int main(void) {
    // DEFINING STRUCT
    struct MyData {
        int i;
        float f;
        double d;
    } data; // Declaring a single struct variable of type 'struct MyData' locally

    // Variable declarations
    int i_size, f_size, d_size, struct_MyData_size;

    // Assigning Data Values To The Data Members Of 'struct MyData'
    data.i = 30;
    data.f = 11.45f;
    data.d = 1.2995;

    // Displaying Values Of The Data Members Of 'struct MyData'
    printf("\n\n");
    printf("DATA MEMBERS OF 'struct MyData' ARE : \n\n");
    printf("i = %d\n", data.i);
    printf("f = %f\n", data.f);
    printf("d = %lf\n", data.d); // Fixed %1f to %lf for double

    // Calculating Sizes (In Bytes) Of The Data Members Of 'struct MyData'
    i_size = sizeof(data.i);
    f_size = sizeof(data.f);
    d_size = sizeof(data.d);

    // Displaying Sizes (In Bytes) Of The Data Members Of 'struct MyData'
    printf("\n\n");
    printf("SIZES (in bytes) OF DATA MEMBERS OF 'struct MyData' ARE : \n\n");
    printf("Size of 'i' = %d bytes\n", i_size);
    printf("Size of 'f' = %d bytes\n", f_size);
    printf("Size of 'd' = %d bytes\n", d_size);

    // Calculating Size (In Bytes) Of the entire 'struct MyData'
    struct_MyData_size = sizeof(struct MyData); // Fixed comments and usage

    // Displaying Sizes (In Bytes) Of the entire 'struct MyData'
    printf("\n\n");
    printf("Size of 'struct MyData' : %d bytes\n\n", struct_MyData_size);

    return 0; // Fixed return value from 'e' to '0'
}
#include <stdio.h>

// DEFINING STRUCT
struct MyData {
    int i; 
    float f; 
    double d;
};  // Adding closing brace and semicolon for struct definition

int main(void) {
    // Variable declarations
    struct MyData data;  // Declaring a single struct variable of type 'struct MyData' locally...
    int i_size, f_size, d_size, struct_MyData_size;

    // Assigning data values to the data members of 'struct MyData'
    data.i = 30;
    data.f = 11.45f;
    data.d = 1.2995;

    // Displaying values of the data members of 'struct MyData'
    printf("\n\n");
    printf("DATA MEMBERS OF 'struct MyData' ARE : \n\n");
    printf("i = %d\n", data.i);
    printf("f = %f\n", data.f);
    printf("d = %lf\n", data.d);

    // Calculating sizes (in bytes) of the data members of 'struct MyData'
    i_size = sizeof(data.i);
    f_size = sizeof(data.f);
    d_size = sizeof(data.d);

    // Displaying sizes (in bytes) of the data members of 'struct MyData'
    printf("\n\n");
    printf("SIZES (in bytes) OF DATA MEMBERS OF 'struct MyData' ARE : \n\n");
    printf("Size of 'i' = %d bytes\n", i_size);
    printf("Size of 'f' = %d bytes\n", f_size);
    printf("Size of 'd' = %d bytes\n", d_size);

    // Calculating size (in bytes) of the entire 'struct MyData'
    struct_MyData_size = sizeof(struct MyData);

    // Displaying sizes (in bytes) of the entire 'struct MyData'
    printf("\n\n");
    printf("Size of 'struct MyData' : %d bytes\n\n", struct_MyData_size);

    return 0;
}
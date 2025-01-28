#include <stdio.h>
// #include <conio.h> // Uncomment only if you're using an old compiler that supports conio.h

struct MyData {
    int i;
    float f;
    double d;
    char ch;
};

int main(void) {
    // Variable declarations
    struct MyData data; // Declaring a single struct variable

    // User input for values of data members of 'struct MyData'
    printf("\n\n");
    printf("Enter Integer Value For Data Member 'i' Of 'struct MyData' : \n");
    scanf("%d", &data.i);

    printf("Enter Floating-Point Value For Data Member 'f' Of 'struct MyData' : \n");
    scanf("%f", &data.f);

    printf("Enter 'Double' Value For Data Member 'd' Of 'struct MyData' : \n");
    scanf("%lf", &data.d);  // Corrected format specifier for double

    printf("Enter Character Value For Data Member 'ch' Of 'struct MyData' : \n");
    getchar(); // This is to consume the newline character left by previous scanf
    data.ch = getchar(); // Using getchar() instead of getch()

    // Display values of data members of 'struct MyData'
    printf("\n\n");
    printf("DATA MEMBERS OF 'struct MyData' ARE : \n\n");
    printf("i = %d\n", data.i);
    printf("f = %f\n", data.f);
    printf("d = %lf\n", data.d);
    printf("ch = %c\n\n", data.ch);

    return 0;
}
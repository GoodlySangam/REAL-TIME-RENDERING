#include <stdio.h>

struct MyPoint {
    int x; 
    int y;
};

struct Rectangle {
    struct MyPoint point_01;
    struct MyPoint point_02;
};

int main(void) {
    // Variable declarations
    struct Rectangle rect = { {1, 12}, {33, 15} }; // Correct initialization
    int length, breadth, area;

    // Calculate length and breadth
    length = rect.point_02.y - rect.point_01.y;
    if (length < 0) { // Correct comparison operator
        length = length * -1;
    }

    breadth = rect.point_02.x - rect.point_01.x;
    if (breadth < 0) { // Correct comparison operator
        breadth = breadth * -1;
    }

    // Calculate area
    area = length * breadth;

    // Display the results
    printf("\n\n");
    printf("Length Of Rectangle = %d \n\n", length);
    printf("Breadth Of Rectangle = %d \n\n", breadth);
    printf("Area Of Rectangle = %d \n\n", area);

    return 0;
}
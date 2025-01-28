#include <stdio.h>

struct MyPoint {
    int X; 
    int y;
};

struct Rectangle {
    struct MyPoint point_01;
    struct MyPoint point_02;
};

int main(void) {
    // Variable declarations
    struct Rectangle rect;
    int length, breadth, area;

    // Code to get user input
    printf("\n\n");
    printf("Enter Leftmost X-Coordinate Of Rectangle: ");
    scanf("%d", &rect.point_01.X); // Corrected to 'X'
    printf("\n\n");

    printf("Enter Bottommost Y-Coordinate Of Rectangle: ");
    scanf("%d", &rect.point_01.y);
    printf("\n\n");

    printf("Enter Rightmost X-Coordinate Of Rectangle: ");
    scanf("%d", &rect.point_02.X); // Corrected to 'X'
    printf("\n\n");

    printf("Enter Topmost Y-Coordinate Of Rectangle: ");
    scanf("%d", &rect.point_02.y); // Fixed missing quotation mark

    // Calculate length and breadth
    length = rect.point_02.y - rect.point_01.y;
    if (length < 0) // Fixed invalid comparison operator
        length = length * -1;

    breadth = rect.point_02.X - rect.point_01.X;
    if (breadth < 0) // Fixed invalid comparison operator
        breadth = breadth * -1;

    // Calculate area
    area = length * breadth;

    // Display the results
    printf("\n\n");
    printf("Length Of Rectangle = %d\n\n", length);
    printf("Breadth Of Rectangle = %d\n\n", breadth);
    printf("Area Of Rectangle = %d\n\n", area);

    return 0;
}
#include <stdio.h>

int main(void) {
    // Variable declarations
    int length, breadth, area;
    
    // Define Rectangle with MyPoint structure
    struct Rectangle {
        struct MyPoint {
            int x;
            int y;
        } point_01, point_02;
    } rect;

    // Code to take input from user
    printf("\n\n");
    printf("Enter Leftmost X-Coordinate Of Rectangle : ");
    scanf("%d", &rect.point_01.x);
    printf("\n\n");
    printf("Enter Bottommost Y-Coordinate Of Rectangle : ");
    scanf("%d", &rect.point_01.y);
    printf("\n\n");
    printf("Enter Rightmost X-Coordinate Of Rectangle : ");
    scanf("%d", &rect.point_02.x);
    printf("\n\n");
    printf("Enter Topmost Y-Coordinate Of Rectangle : ");
    scanf("%d", &rect.point_02.y);

    // Calculate length and breadth of the rectangle
    length = rect.point_02.y - rect.point_01.y;
    if (length < 0) {
        length = length * -1;
    }

    breadth = rect.point_02.x - rect.point_01.x;
    if (breadth < 0) {
        breadth = breadth * -1;
    }

    // Calculate area
    area = length * breadth;

    // Displaying the results
    printf("\n\n");
    printf("Length Of Rectangle = %d\n\n", length);
    printf("Breadth Of Rectangle = %d\n\n", breadth);
    printf("Area Of Rectangle = %d\n\n", area);

    return 0;
}
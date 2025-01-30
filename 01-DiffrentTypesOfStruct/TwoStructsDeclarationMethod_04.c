#include <stdio.h>

// DEFINING STRUCT
struct MyPoint {
    int x;
    int y;
};

// DEFINING STRUCT
struct MyPointProperties {
    int quadrant;
    char axis_location[10];
};

int main(void) {
    // Variable declarations
    struct MyPoint point; // Declaring a single variable of type 'struct MyPoint' locally
    struct MyPointProperties point_properties; // Declaring a single variable of type 'struct MyPointProperties' locally

    // User Input for the data members of 'struct MyPoint' variable 'point'
    printf("\n\n");
    printf("Enter X-Coordinate For A Point: ");
    scanf("%d", &point.x);  // Corrected format specifier
    printf("Enter Y-Coordinate For A Point: ");
    scanf("%d", &point.y);  // Corrected format specifier
    printf("\n\n");

    // Display the coordinates
    printf("Point Coordinates (x, y) Are: (%d, %d) !!!\n\n", point.x, point.y);

    // Check if the point is the origin
    if (point.x == 0 && point.y == 0)
        printf("The Point Is The Origin (%d, %d) !!!\n", point.x, point.y);
    else { // At least one of the two values (either 'X' or 'Y' or both) is nonzero
        if (point.x == 0) { // If 'X' is zero
            if (point.y < 0)  // If 'Y' is negative
                strcpy(point_properties.axis_location, "Negative Y");
            else if (point.y > 0)  // If 'Y' is positive
                strcpy(point_properties.axis_location, "Positive Y");
            point_properties.quadrant = 0; // Point is on the axis, not in any quadrant
            printf("The Point Lies On The %s Axis !!!\n\n", point_properties.axis_location);
        }
        else if (point.y == 0) { // If 'Y' is zero
            if (point.x < 0)  // If 'X' is negative
                strcpy(point_properties.axis_location, "Negative X");
            else if (point.x > 0)  // If 'X' is positive
                strcpy(point_properties.axis_location, "Positive X");
            point_properties.quadrant = 0; // Point is on the axis, not in any quadrant
            printf("The Point Lies On The %s Axis !!!\n\n", point_properties.axis_location);
        }
        else { // Both 'X' and 'Y' are non-zero
            strcpy(point_properties.axis_location, "Not on Axis");

            if (point.x > 0 && point.y > 0) {  // X > 0 and Y > 0
                point_properties.quadrant = 1;
            }
            else if (point.x < 0 && point.y > 0) {  // X < 0 and Y > 0
                point_properties.quadrant = 2;
            }
            else if (point.x < 0 && point.y < 0) {  // X < 0 and Y < 0
                point_properties.quadrant = 3;
            }
            else {  // X > 0 and Y < 0
                point_properties.quadrant = 4;
            }

            printf("The Point Lies In Quadrant Number %d !!!\n\n", point_properties.quadrant);
        }
    }

    return 0;
}
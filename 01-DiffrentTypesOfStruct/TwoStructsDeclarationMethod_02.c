#include <stdio.h>
#include <string.h> // Required for strcpy function

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
    // Declaring variables
    struct MyPoint point;
    struct MyPointProperties point_properties;

    // User Input For The Data Members Of 'struct MyPoint'
    printf("\n\n");
    printf("Enter X-Coordinate For A Point: ");
    scanf("%d", &point.x);
    printf("Enter Y-Coordinate For A Point: ");
    scanf("%d", &point.y);

    // Displaying the entered point coordinates
    printf("\n\n");
    printf("Point Coordinates (x, y) Are: (%d, %d) !!!\n\n", point.x, point.y);

    if (point.x == 0 && point.y == 0) {
        printf("The Point Is The Origin (%d, %d) !!!\n", point.x, point.y);
    } else {
        if (point.x == 0) { // If 'X' IS ZERO
            if (point.y < 0) { // If 'Y' IS -ve
                strcpy(point_properties.axis_location, "Negative Y");
            } else if (point.y > 0) { // If 'Y' IS +ve
                strcpy(point_properties.axis_location, "Positive Y");
            }
            point_properties.quadrant = 0; // Point is on an axis
            printf("The Point Lies On The %s Axis !!!\n\n", point_properties.axis_location);
        } else if (point.y == 0) { // If 'Y' IS ZERO
            if (point.x < 0) { // If 'X' IS -ve
                strcpy(point_properties.axis_location, "Negative X");
            } else if (point.x > 0) { // If 'X' IS +ve
                strcpy(point_properties.axis_location, "Positive X");
            }
            point_properties.quadrant = 0; // Point is on an axis
            printf("The Point Lies On The %s Axis !!!\n\n", point_properties.axis_location);
        } else { // BOTH 'X' AND 'Y' ARE NON-ZERO
            point_properties.axis_location[0] = '\0'; // No axis location
            if (point.x > 0 && point.y > 0) { // 'X' IS +ve AND 'Y' IS +ve
                point_properties.quadrant = 1;
            } else if (point.x < 0 && point.y > 0) { // 'X' IS -ve AND 'Y' IS +ve
                point_properties.quadrant = 2;
            } else if (point.x < 0 && point.y < 0) { // 'X' IS -ve AND 'Y' IS -ve
                point_properties.quadrant = 3;
            } else { // 'X' IS +ve AND 'Y' IS -ve
                point_properties.quadrant = 4;
            }
            printf("The Point Lies In Quadrant Number %d !!!\n\n", point_properties.quadrant);
        }
    }

    return 0;
}
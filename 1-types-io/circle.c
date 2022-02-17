//
// Created by 陈芷维 on 17/02/2022.
//
#define pi 3.14159
#include <stdio.h>

int main() {
    int radius = 10;    // All definitions are declarations, but not all declarations are definitions.
    // declare/introduce/define an *integer* variable called *radius* so that it can be used later
    // which is initialized to 10 and refers to a location(&radius) in memory.
    // The name radius is an *identifier*, which can be made up of letters/numbers/underscores, but not start with numbers.
    // Other values can be assigned to radius.
    // Initialization and spaces are recommended.
    double circumference = 2 * pi * radius;
    double area = pi * radius *radius;
    printf("circumference = %.3f\narea = %.3f\n", circumference,area);
    return 0;
}
//
// Created by 陈芷维 on 19/02/2022.
//

#include <stdio.h>
#include <math.h>

int main() {
    const double PI = 3.14159;
    int radius = 100;
    double surfaceArea = 4 * PI * pow(radius, 2);
    /**
     * In C: 4 / 3 = 1 because of the truncation
     *      pow(x,y) is x^y
     */
//    double volume = 4.0 / 3 * PI * radius * radius * radius;
    double volume = 4.0 / 3 * PI * pow(radius,3);

    printf("%15.4f: surface area\n%15.4f: volume\n", surfaceArea, volume);  // 右对齐
    printf("%-15.4f: surface area\n%-15.4f: volume\n", surfaceArea, volume);  // 左对齐
    // the sign "-" is a flag
    return 0;
}
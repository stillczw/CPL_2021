//
// Created by 陈芷维 on 25/02/2022.
//

#include <stdio.h>

int main() {
    /**
     * e/E: exponent
     */
    const double MOL = 6.02e23;
    double quantity = 6.0 / 32 * MOL;
    /**
     * %g: %f or %e
     * %.5e: 小数点后保留5位
     * %.5g: 保留5位有效数字
     */
    printf("%.3e\n%.4e\n", quantity, quantity);
    return 0;
}


#include "func.h"
#include <cmath>
#include <vector>

double TrigFunc::FuncA(double x, int n) {
    static const std::vector<int> eulerNumbers = {1, -1, 5};
    double result = 0.0;
    for (int i = 0; i < 3; ++i) {
        double term = (pow(-1, i) * eulerNumbers[i] * pow(x, 2 * i)) / tgamma(2 * i + 1);
        result += term;
    }
    return result;
}
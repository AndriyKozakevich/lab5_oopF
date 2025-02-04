#include "GeometricProgression.h"
#include <cmath>

GeometricProgression::GeometricProgression(double first, double ratio)
    : Progression(first, ratio) {}

double GeometricProgression::sum(int n) const {
    if (commonValue == 1) {
        return firstTerm * n;
    }
    return firstTerm * (1 - pow(commonValue, n)) / (1 - commonValue);
}

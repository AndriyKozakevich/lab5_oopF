#include "ArithmeticProgression.h"

ArithmeticProgression::ArithmeticProgression(double first, double diff)
    : Progression(first, diff) {}

double ArithmeticProgression::sum(int n) const {
    return (n / 2.0) * (2 * firstTerm + (n - 1) * commonValue);
}

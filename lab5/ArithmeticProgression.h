#ifndef ARITHMETIC_PROGRESSION_H
#define ARITHMETIC_PROGRESSION_H

#include "Progression.h"

class ArithmeticProgression : public Progression {
public:
    ArithmeticProgression(double first, double diff);
    double sum(int n) const override;
};

#endif // ARITHMETIC_PROGRESSION_H

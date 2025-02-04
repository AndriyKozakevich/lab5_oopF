#ifndef GEOMETRIC_PROGRESSION_H
#define GEOMETRIC_PROGRESSION_H

#include "Progression.h"

class GeometricProgression : public Progression {
public:
    GeometricProgression(double first, double ratio);
    double sum(int n) const override;
};

#endif // GEOMETRIC_PROGRESSION_H

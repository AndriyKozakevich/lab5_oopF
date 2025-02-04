#ifndef PROGRESSION_H
#define PROGRESSION_H

class Progression {
protected:
    double firstTerm;  // Перший елемент прогресії
    double commonValue; // Різниця (для арифметичної) або відношення (для геометричної)

public:
    Progression(double first, double common); // Оголошуємо, але не реалізовуємо тут

    // Чиста віртуальна функція для обчислення суми прогресії
    virtual double sum(int n) const = 0;

    // Віртуальний деструктор
    virtual ~Progression() {}
};

#endif // PROGRESSION_H

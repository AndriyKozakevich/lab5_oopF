#include <iostream>
#include <fstream>
#include "ArithmeticProgression.h"
#include "GeometricProgression.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");

    double firstTerm = 2.0;  // Перший елемент
    double diff = 3.0;  // Різниця для арифметичної
    double ratio = 2.0; // Відношення для геометричної
    int numTerms = 5; // Кількість елементів

    ArithmeticProgression ap(firstTerm, diff);
    GeometricProgression gp(firstTerm, ratio);

    // Відкриття файлу для запису
    ofstream outFile("progressions_info.txt", ios::out);

    // Перевірка, чи файл відкрився успішно
    if (!outFile.is_open()) {
        cerr << "Помилка відкриття файлу!" << endl;
        return 1;
    }
    else {
        cout << "Файл відкрито успішно.\n";
    }

    // Запис у файл
    outFile << "Сума перших " << numTerms << " елементів арифметичної прогресії: "
        << ap.sum(numTerms) << endl;

    outFile << "Сума перших " << numTerms << " елементів геометричної прогресії: "
        << gp.sum(numTerms) << endl;

    // Закриваємо файл
    outFile.close();

    cout << "Інформацію записано у файл 'progressions_info.txt'." << endl;

    return 0;
}

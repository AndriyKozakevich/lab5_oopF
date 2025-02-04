#ifndef PROGRESSION_H
#define PROGRESSION_H

class Progression {
protected:
    double firstTerm;  // ������ ������� �������
    double commonValue; // г����� (��� �����������) ��� ��������� (��� �����������)

public:
    Progression(double first, double common); // ���������, ��� �� ���������� ���

    // ����� ��������� ������� ��� ���������� ���� �������
    virtual double sum(int n) const = 0;

    // ³��������� ����������
    virtual ~Progression() {}
};

#endif // PROGRESSION_H

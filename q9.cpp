#include <iostream>
using namespace std;

class Scholarship {
public:
    virtual double calculateAward(double marks, double familyIncome) = 0;
    virtual ~Scholarship() {}
};

class MeritScholarship : public Scholarship {
public:
    double calculateAward(double marks, double familyIncome) override {
        if (marks >= 90)
            return 20000;
        else if (marks >= 80)
            return 10000;
        else
            return 0;
    }
};

class NeedBasedScholarship : public Scholarship {
public:
    double calculateAward(double marks, double familyIncome) override {
        if (familyIncome < 200000 && marks >= 70)
            return 25000;
        else
            return 0;
    }
};

int main() {
    double marks, familyIncome;

    cout << "Enter marks: ";
    cin >> marks;

    cout << "Enter annual family income (Rs.): ";
    cin >> familyIncome;

    MeritScholarship merit;
    NeedBasedScholarship need;

    Scholarship* scholarship = &merit;
    cout << "Merit scholarship award: Rs. "
         << scholarship->calculateAward(marks, familyIncome) << '\n';

    scholarship = &need;
    cout << "Need-based scholarship award: Rs. "
         << scholarship->calculateAward(marks, familyIncome) << '\n';

    return 0;
}
#include <iostream>
using namespace std;

class ElectricityPlan {
public:
    virtual double calculateBill(double units) = 0;
    virtual ~ElectricityPlan() {}
};

class ResidentialPlan : public ElectricityPlan {
public:
    double calculateBill(double units) override {
        if (units <= 100)
            return units * 4;

        return 100 * 4 + (units - 100) * 6;
    }
};

class CommercialPlan : public ElectricityPlan {
public:
    double calculateBill(double units) override {
        return units * 7;
    }
};

int main() {
    double units;
    cout << "Enter electricity units used: ";
    cin >> units;

    ResidentialPlan residential;
    CommercialPlan commercial;

    ElectricityPlan* plan = &residential;
    cout << "Residential bill: Rs. " << plan->calculateBill(units) << '\n';

    plan = &commercial;
    cout << "Commercial bill: Rs. " << plan->calculateBill(units) << '\n';

    return 0;
}
#include <iostream>
using namespace std;

class Candidate {
protected:
    int candidateId;
    double attendancePercentage;

public:
    Candidate(int id, double attendance)
        : candidateId(id), attendancePercentage(attendance) {}
};

class RegularCandidate : public Candidate {
public:
    RegularCandidate(int id, double attendance)
        : Candidate(id, attendance) {}

    void checkEligibility() const {
        cout << "Regular candidate " << candidateId << ": "
             << (attendancePercentage >= 75 ? "Eligible" : "Not eligible")
             << '\n';
    }
};

class ReappearCandidate : public Candidate {
public:
    ReappearCandidate(int id, double attendance)
        : Candidate(id, attendance) {}

    void checkEligibility() const {
        cout << "Reappear candidate " << candidateId << ": "
             << (attendancePercentage >= 60 ? "Eligible" : "Not eligible")
             << '\n';
    }
};

int main() {
    RegularCandidate regular(101, 80);
    ReappearCandidate reappear(202, 65);

    regular.checkEligibility();
    reappear.checkEligibility();

    return 0;
}
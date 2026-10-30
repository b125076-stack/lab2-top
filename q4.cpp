#include <iostream>
using namespace std;

class LibraryAccess {
protected:
    int booksBorrowed;

public:
    LibraryAccess(int books) : booksBorrowed(books) {}
};

class LaboratoryAccess {
protected:
    int pendingSubmissions;

public:
    LaboratoryAccess(int submissions) : pendingSubmissions(submissions) {}
};

class StudentAccess : public LibraryAccess, public LaboratoryAccess {
public:
    StudentAccess(int books, int submissions)
        : LibraryAccess(books), LaboratoryAccess(submissions) {}

    void displayAccessStatus() const {
        if (booksBorrowed <= 5 && pendingSubmissions == 0)
            cout << "Full resource access granted.\n";
        else
            cout << "Full resource access denied.\n";

        cout << "Books borrowed: " << booksBorrowed << '\n';
        cout << "Pending lab submissions: " << pendingSubmissions << '\n';
    }
};

int main() {
    StudentAccess student(3, 0);
    student.displayAccessStatus();

    return 0;
}
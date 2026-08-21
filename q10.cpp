#include <iostream>
using namespace std;

class Classroom
{
private:
    string className;
    int totalStudents;
    int presentStudents;
    string attendanceStatus;

public:
    Classroom(string name, int total)
    {
        className = name;
        totalStudents = total;
        presentStudents = 0;
        attendanceStatus = "Not Completed";
    }

    friend class AttendanceManager;
};

class AttendanceManager
{
public:
    void displayInformation(Classroom &c)
    {
        cout << "Class Name: " << c.className << endl;
        cout << "Total Students: " << c.totalStudents << endl;
        cout << "Present Students: " << c.presentStudents << endl;
        cout << "Attendance Status: " << c.attendanceStatus << endl;
    }

    void updatePresentStudents(Classroom &c, int present)
    {
        if (present <= c.totalStudents)
        {
            c.presentStudents = present;
            cout << "Present student count updated." << endl;
        }
        else
        {
            cout << "Invalid number of students." << endl;
        }
    }

    void markAttendanceCompleted(Classroom &c)
    {
        c.attendanceStatus = "Completed";
        cout << "Attendance marked as completed." << endl;
    }

    void displayAttendanceStatus(Classroom &c)
    {
        cout << "Attendance Status: "
             << c.attendanceStatus << endl;
    }

    void calculateAbsentStudents(Classroom &c)
    {
        int absentStudents =
            c.totalStudents - c.presentStudents;

        cout << "Absent Students: " << absentStudents << endl;
    }
};

int main()
{
    Classroom c("CSE-b", 70);
    AttendanceManager manager;

    manager.updatePresentStudents(c, 52);

    manager.markAttendanceCompleted(c);

    manager.displayInformation(c);

    manager.calculateAbsentStudents(c);

    return 0;
}
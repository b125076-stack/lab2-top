#include <iostream>
using namespace std;

class BackupPolicy {
public:
    virtual double calculateStorage(double dataSizeMB) = 0;
    virtual ~BackupPolicy() {}
};

class FullBackup : public BackupPolicy {
public:
    double calculateStorage(double dataSizeMB) override {
        return dataSizeMB;  
    }
};

class IncrementalBackup : public BackupPolicy {
public:
    double calculateStorage(double dataSizeMB) override {
        return dataSizeMB * 0.25 + 50;  
    }
};

int main() {
    double dataSize;
    cout << "Enter data size in MB: ";
    cin >> dataSize;

    FullBackup full;
    IncrementalBackup incremental;
    BackupPolicy* policy = &full;

    cout << "Full backup storage: "
         << policy->calculateStorage(dataSize) << " MB\n";

    policy = &incremental;
    cout << "Incremental backup storage: "
         << policy->calculateStorage(dataSize) << " MB\n";

    return 0;
}
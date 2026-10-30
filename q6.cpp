#include <iostream>
using namespace std;

class Document {
public:
    virtual void exportFile() {
        cout << "Exporting document\n";
    }

    virtual ~Document() {}
};

class PDFDocument : public Document {
public:
    void exportFile() override {
        cout << "Export format: PDF, file extension: .pdf\n";
    }
};

class TextDocument : public Document {
public:
    void exportFile() override {
        cout << "Export format: Plain text, file extension: .txt\n";
    }
};

class CSVDocument : public Document {
public:
    void exportFile() override {
        cout << "Export format: CSV, file extension: .csv\n";
    }
};

int main() {
    PDFDocument pdf;
    TextDocument text;
    CSVDocument csv;

    Document* documents[] = {&pdf, &text, &csv};

    for (Document* document : documents)
        document->exportFile();

    return 0;
}
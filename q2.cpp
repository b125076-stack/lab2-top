#include <iostream>
#include <string>
using namespace std;

class Image {
protected:
    int width;
    int height;

public:
    Image(int w, int h) : width(w), height(h) {}
};

class CompressedImage : public Image {
protected:
    double compressionPercentage;

public:
    CompressedImage(int w, int h, double percentage)
        : Image(w, h), compressionPercentage(percentage) {}
};

class EncryptedImage : public CompressedImage {
private:
    string encryptionAlgorithm;

public:
    EncryptedImage(int w, int h, double percentage, string algorithm)
        : CompressedImage(w, h, percentage),
          encryptionAlgorithm(algorithm) {}

    void displayMetadata() const {
        long long originalPixels = 1LL * width * height;
        double effectivePixels =
            originalPixels * compressionPercentage / 100.0;

        cout << "Image width: " << width << " pixels\n";
        cout << "Image height: " << height << " pixels\n";
        cout << "Original pixel count: " << originalPixels << '\n';
        cout << "Compression: " << compressionPercentage << "%\n";
        cout << "Effective pixel-equivalent size: "
             << effectivePixels << '\n';
        cout << "Encryption algorithm: " << encryptionAlgorithm << '\n';
    }
};

int main() {
    EncryptedImage image(1920, 1080, 50, "AES");
    image.displayMetadata();

    return 0;
}
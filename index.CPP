#include <iostream>
using namespace std;

class Printable {
public:
    void print() {
        cout << "Printing... i am anurag" << endl;
    }
};
class Scannable {
public:
    void scan() {
        cout << "Scanning..." << endl;
    }
};
// PrinterScanner inherits from both Printable and Scannable
class PrinterScanner : public Printable, public Scannable {
public:
    void info() {
        cout << "This is a PrinterScanner device." << endl;
    }
};

int main() {
    PrinterScanner device;
    device.info();
    device.print();
    device.scan();
    return 0;
}
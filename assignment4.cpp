#include <iostream>
using namespace std;
class computation {

public:
    int compute(int a, int b) {
        return a + b;
    }

    float compute(int a, float b) {
        return a + b;
    }

    double compute(int a, double b) {
        return a + b;
    }

    int compute(char a, char b) {
        return int(a) + int(b);
    }

    int compute(char a, int b) {
        return int(a) + b;
    }

    int compute() {
        return 0;
    }
};

int main() {
    computation calc;

    cout << "1 + 2 = " << calc.compute(1, 2) << endl;
    cout << "1 + 2.5 = " << calc.compute(1, 2.5f) << endl;
    cout << "1 + 2.5 = " << calc.compute(1, 2.5) << endl;
    cout << "Ascii value of 'a' + Ascii value of 'b' = " << calc.compute('a', 'b') << endl;
    cout << "Ascii value of 'a' + 3 = " << calc.compute('a', 3) << endl;
    return 0;
}
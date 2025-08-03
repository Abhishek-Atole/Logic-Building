#include <iostream>
#include <iomanip>

class PatternPrinter {
protected:
    int n;
public:
    PatternPrinter(int no)
    {
        n = no;
    }
    virtual void print() = 0; // Abstract method
};

class TrianglePattern : public PatternPrinter 
{
public:
    TrianglePattern(int n) : PatternPrinter(n) {}

    void print() override {
        for (int i = 1; i <= n; ++i) {
            // Leading spaces
            std::cout << std::setw((n - i) * 2) << "";

            // Decreasing numbers
            for (int j = i; j >= 1; --j) {
                std::cout << j << " ";
            }

            // Increasing numbers
            for (int j = 2; j <= i; ++j) {
                std::cout << j << " ";
            }

            std::cout << std::endl;
        }
    }
};

int main() {
    int n = 6;
    TrianglePattern pattern(n);
    pattern.print();
    return 0;
}

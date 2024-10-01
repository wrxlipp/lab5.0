#include <iostream>
#include <cmath> // для використання математичних функцій
using namespace std;

// Прототип функції g
double g(double x, double y);

int main() {
    double r, s;
    cout << " r: ";
    cin >> r;
    cout << " s: ";
    cin >> s;

    // Обчислення виразу
    double numerator = g(1, r) + g(pow(s, 2) - 1, pow(r, 2));
    double denominator = g(s, 1 + r);

    double result = numerator / denominator;

    cout << "Result: " << result << endl;
    return 0;
}

// Визначення функції g
double g(double x, double y) {
    return (pow(x, 2) + pow(y, 2) + sin(x * y)) / (1 + fabs(x * y));
}

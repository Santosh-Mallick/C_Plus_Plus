// Q.1 Write a program in C++ to find roots of a quadratic equation, ax2+ bx+c=0.
// Implement following conditions :
//   ->  The discriminant is positive, then display two distinct real roots. 
//   ->  If the discriminant is zero, then display two equal roots. 
//   ->  If the discriminant is negative, then display two distinct complex roots.

#include <iostream>
#include <cmath>
#include <complex>

using namespace std;

int main() {
    float a, b, c, discriminant, root1, root2, realPart, imagPart;

    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "The roots are real and distinct." << endl;
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    } else if (discriminant == 0) {
        root1 = -b / (2 * a);
        root2 = root1;
        cout << "The roots are real and equal." << endl;
        cout << "Root 1 = Root 2 = " << root1 << endl;
    } else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        complex<float> root1(realPart, imagPart);
        complex<float> root2(realPart, -imagPart);
        cout << "The roots are complex and distinct." << endl;
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    }

    return 0;
}

// Output

// Enter coefficients a, b and c: 1 -4 4
// The roots are real and equal.
// Root 1 = Root 2 = 2
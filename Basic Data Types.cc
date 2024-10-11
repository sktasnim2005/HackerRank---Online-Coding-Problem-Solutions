#include <iostream>
#include <cstdio>
#include <iomanip> // Include for setprecision
using namespace std;

int main() {
    // Complete the code.
    int a;
    long b;
    char c;
    float d;
    double e;
    
    cin >> a >> b >> c >> d >> e;
    
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << fixed << setprecision(3) << d << endl; // Set precision for float
    cout << fixed << setprecision(9) << e << endl; // Set precision for double
    
    return 0;
}


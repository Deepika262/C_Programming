#include <iostream>
using namespace std;

int main() {
    int n, m, r, sum = 0; 

    cout << "Enter a number: ";
    cin >> n;

    m = n; 

    while (n > 0) {
        r = n % 10;  
        n /= 10;    
        sum += r * r * r; 
    }

    if (sum == m) {
        cout << "It's an Armstrong number." << endl;
    } else {
        cout << "It's not an Armstrong number." << endl;
    }

    return 0;
}
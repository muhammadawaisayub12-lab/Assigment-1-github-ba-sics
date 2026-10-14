// Name: Awais
// Reg No: L1f25bscs1002

#include <iostream>
using namespace std;

int main() 
{
    int n = 50;
    int sum = 0;
    
    // Loop to calculate sum of first 50 natural numbers
    for (int i = 1; i <= n; i++) 
    {
        sum += i;
    }
    
    // Formula-based verification: n(n+1)/2

    
    int formula_sum = (n * (n + 1)) / 2;
    
    cout << "Sum using loop: " << sum << endl;
    cout << "Sum using formula: " << formula_sum << endl;
    
    return 0;
}

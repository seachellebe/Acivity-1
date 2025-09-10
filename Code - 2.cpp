#include <iostream>
using namespace std;
int main()
{
    
    int i, sum = 0;
    cout << "Enter a series of integers (enter 0 to stop): " << "\n";

    while (true) {
        cin >> i;
        if ( i == 0) {
            break; 
        }
        if ( i > 0) {
            sum += i; 
        }
    }

    cout << "Sum of positive integers: " << sum << endl;

    return 0;
}

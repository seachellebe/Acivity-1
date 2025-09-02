# Acivity-1

No. 1

#include <iostream>
using namespace std;
int main()
{
    
    int i = 0;
    cout << "Numbers from 0 to 10:" << "\n";
    while (i <= 10) {
        cout << i << " ";
        i++;
    }
    cout << endl;
    
    int j = 10;
    cout << "Numbers from 10 to 0:" << "\n";
        while (j >= 0) {
        cout << j << " ";
        j--;
    }
    cout << endl;
    return 0;
}


No.2

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


No.3

#include <iostream>
using namespace std;
int main()
{
    
    int i = 1;
    int product = 1;
    
    while (i <= 5) {
        product *= i;
        i++;
    }
    
    cout << "Product of Numbers from 1 to 5: " << product << endl;

    return 0;
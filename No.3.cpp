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
}

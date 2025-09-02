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

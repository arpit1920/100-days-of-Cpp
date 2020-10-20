#include <iostream>
using namespace std;
int main()
{
    int size, count=1;
    cout << " Input the number of characters for a side: ";
    cin >> size;
    for (int i = 1; i <= size; ++i) 
    {
        for (int j = 1; j <= size; ++j) 
        {
            cout <<count++<<" ";
        }
        cout << endl;
    }
    return 0;
}

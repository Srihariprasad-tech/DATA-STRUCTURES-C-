#include <iostream>
using namespace std;
int main()
{
    char ch[10];
    cout << " enter the string" << endl;
    cin >> ch;
    int i = 0;
    int count = 0;
    while (ch[i] != '\0')
    {
        count++;
        i++;
    }
    cout << " the string length is " << count << endl;
    return 0;
}

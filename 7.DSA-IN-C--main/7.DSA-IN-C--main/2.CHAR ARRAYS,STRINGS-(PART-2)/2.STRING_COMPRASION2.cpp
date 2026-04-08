#include <iostream>
using namespace std;

int main()
{
    string s1, s2;

    cout << "Enter first string: ";
    cin >> s1;

    cout << "Enter second string: ";
    cin >> s2;

    // compare() returns:
    // 0  -> strings are equal
    // >0 -> s1 > s2
    // <0 -> s1 < s2
    int result = s1.compare(s2);// very important line//

    if (result == 0)
    {
        cout << "Both strings are equal." << endl;
    }
    else if (result > 0)
    {
        cout << "First string is greater than second string." << endl;
    }
    else
    {
        cout << "First string is smaller than second string." << endl;
    }
    return 0;
}

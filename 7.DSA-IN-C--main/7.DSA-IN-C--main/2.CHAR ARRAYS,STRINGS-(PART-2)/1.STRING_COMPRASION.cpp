#include <iostream>
#include <string>
using namespace std;
int main()
{
    char str1[100] = "prasads";
    char str2[100] = "prasads";
    int i = 0, difference;
    while (str1[i] == str2[i])
    {
        if (str1[i] == '\0')
        {
            break;
        }
        else
        {
            i++;
        }
    }
    difference = str1[i] - str2[i];
    if (difference == 0)
    {
        cout << "str1" << str1 << " ==" << "str2" << str2 << endl;
    }
    else if (difference > 0)
    {
        cout << " str1 is greater that str2" << endl;
    }
    else
    {
        cout << "str2 is greater than str1" << endl;
    }
    return 0;
}
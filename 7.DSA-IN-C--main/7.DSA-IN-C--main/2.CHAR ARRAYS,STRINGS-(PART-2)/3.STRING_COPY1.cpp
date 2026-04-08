#include <iostream>
#include <cstring>  // for strcpy
using namespace std;

int main()
{
    char src[50], dest[50];

    cout << "Enter the source string: ";
    cin >> src;

    // Copy src → dest using inbuilt function
    strcpy(dest, src);

    cout << "Source string: " << src << endl;
    cout << "Copied string (destination): " << dest << endl;

    return 0;
}

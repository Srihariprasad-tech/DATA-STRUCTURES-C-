// to find the the most number of elements in the given array//
#include<iostream>
using namespace std;

// Function to find majority element
int majorityelement(int arr[], int n) // Start of function block
{
    int i = 0;
    while(i < n) // Start of outer while block
    {
        int count = 0;
        int j = 0;
        while(j < n) // Start of inner while block
        {
            if(arr[i] == arr[j]) // Start of if block
            {
                count++; // Inside if block
            } // End of if block
            j++;
        } // End of inner while block

        if(count > n / 2) // Start of if block
        {
            return arr[i]; // Inside if block
        } // End of if block

        i++;
    } // End of outer while block

    return -1; // After loops, return -1 if no majority element
} // End of function block

// Main function
int main() // Start of main block
{
    int arr[] = {2, 1, 3, 2, 1, 2, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = majorityelement(arr, n); // Call function

    if(result != -1) // Start of if block
    {
        cout << "majority element is = " << result << endl;
    } // End of if block
    else // Start of else block
    {
        cout << "no majority element found" << endl;
    } // End of else block

    return 0;
} // End of main block


















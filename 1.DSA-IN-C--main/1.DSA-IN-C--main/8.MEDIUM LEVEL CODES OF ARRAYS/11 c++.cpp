#include <iostream>
#include <algorithm>  // needed for max() and min()
using namespace std;

int main() {
    int arr[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int maxwater = 0;
    int width, area, height;
    int n = 9;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            width = j - i;
            height = min(arr[i], arr[j]);
            area = width * height;
            maxwater = max(area, maxwater);
        }
    }

    cout << "The maximum water that can be stored in the container is " << maxwater << endl;
    return 0;
}


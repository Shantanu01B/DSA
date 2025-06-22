#include <iostream>
using namespace std;

int main() {
    int nums[] = {12, -3, 45, 26, -9, 25};
    int size = 6;
    int target = 26;

    for (int i = 0; i < size; i++) {
        if (nums[i] == target) {
            cout << "Target found at index: " << i << endl;
            return 0; // Exit after finding
        }
    }

    cout << "Target not found in the array." << endl;
    return 0;
}

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

void visualizeArray(const vector<int>& arr) {
    for (int value : arr) {
        for (int i = 0; i < value; ++i) {
            cout << "#";
        }
        cout << " (" << value << ")" << endl;
    }
}

int main() {
    srand(time(0)); // Seed for random numbers

    int size;
    cout << "Enter size of array: ";
    cin >> size;

    vector<int> arr(size);

    // Fill array with random numbers between 1 and 20
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 20 + 1;
    }

    // Visualize the array
    cout << "\nArray Visualization:\n";
    visualizeArray(arr);

    return 0;
}




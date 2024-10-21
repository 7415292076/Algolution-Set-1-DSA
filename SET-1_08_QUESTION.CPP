/*
8.Write a program to count frequency of
 each number in an array.

*/

#include <iostream>
using namespace std;
void countFrequency(int arr[], int size) {
    int frequency[size] = {0};
    bool visited[size] = {false};


    for (int i = 0; i < size; ++i) {
        if (!visited[i]) {
            frequency[i] = 1;
            for (int j = i + 1; j < size; ++j) {
                if (arr[i] == arr[j]) {
                    frequency[i]++;
                    visited[j] = true;
                }
            }
        }
    }


    for (int i = 0; i < size; ++i) {
        if (!visited[i]) {
           cout << arr[i] << " appears " << frequency[i] << " times." << std::endl;
        }
    }
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    countFrequency(arr, size);
    return 0;
}

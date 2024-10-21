/*
 7.Write a program to print all unique
 numbers in an array.

*/
#include <iostream>
using namespace std ;
void printUniqueNumbers(int arr[], int size) {
    bool isUnique;

    for (int i = 0; i < size; ++i) {
        isUnique = true;

        for (int j = 0; j < i; ++j) {
            if (arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }

        if (isUnique) {
            cout << arr[i] << std::endl;
        }
    }
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5, 2, 3}; 
    int size = sizeof(arr) / sizeof(arr[0]); 
    printUniqueNumbers(arr, size); 
    return 0;
}

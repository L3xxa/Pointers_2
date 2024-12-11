#include <iostream>
#include <ctime>
using namespace std;

int main() {

    int M,N;
    cout << "Enter the number of elements in the array: ";
    cin >> M;
    if (M <= 0) {
        cout << "Invalid number of elements!" << endl;
        return 0;
    }

    int *A = new int [M];
    int *B = new int [N];

    cout << "Array: ";
    for (int i = 0; i < M; i++) {
        A[i] = rand() % 100;
        cout << A[i] << " ";
    }
    cout << endl;
    cout << endl;

    int choice;
    cout << "Enter 1 to remove non-even numbers,\n2 to remove even numbers: ";
    cin >> choice;

    int size = 0;
    if (choice == 1) {
        for (int i = 0; i < M; i++) {
            if (A[i] % 2 == 0) {
                B[size] = A[i];
                size++;
            }
        }
    }
    else if (choice == 2) {
        for (int i = 0; i < M; i++) {
            if (A[i] % 2 != 0) {
                B[size] = A[i];
                size++;
            }
        }
    }
    else {
        cout << "Invalid choice!" << endl;
    }

    cout << "New array: ";
    for (int i = 0; i < size; i++) {
        cout << B[i] << " ";
    }

    return 0;
}
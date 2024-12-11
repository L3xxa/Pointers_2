#include <iostream>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    int M;
    int N;
    cout << "Enter a number: ";
    cin >> M;
    cout << "Enter another number: ";
    cin >> N;

    int *A = new int[M];
    int *B = new int[N];

    cout << "Array A: ";
    for (int i = 0; i < M; i++) {
        A[i] = rand() % 10;
        cout << A[i] << " ";
    }
    cout << endl;

    cout << "Array B: ";
    for (int i = 0; i < N; i++) {
        B[i] = rand() % 10;
        cout << B[i] << " ";
    }
    cout << endl;

    int *C = new int[M + N];
    int fact_size = 0;

    bool is_unical = true;
    for (int i = 0; i < M; i++) {
        is_unical = true;
        for (int j = 0; j < N; j++) {
            if (A[i] == B[j]) {
                is_unical = false;
                break;
            }
        }
        for (int k = 0; k < fact_size; k++) {
            if (C[k] == A[i]) {
                is_unical = false;
                break;
            }
        }
        if (is_unical) {
            C[fact_size] = A[i];
            fact_size++;
        }
    }

    for (int i = 0; i < N; i++) {
        is_unical = true;
        for (int j = 0; j < M; j++) {
            if (B[i] == A[j]) {
                is_unical = false;
                break;
            }
        }
        for (int k = 0; k < fact_size; k++) {
            if (C[k] == B[i]) {
                is_unical = false;
            }
        }
        if (is_unical) {
            C[fact_size] = B[i];
            fact_size++;
        }
    }

    cout << "Array C: ";
    for (int i = 0; i < fact_size; i++) {
        cout << C[i] << " ";
    }

    return 0;
}
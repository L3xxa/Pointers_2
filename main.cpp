#include <iostream>
#include <ctime>
using namespace std;

int main() {

    int M, N;
    cout << "Enter the number of rows: ";
    cin >> M;
    cout << "Enter the number of columns: ";
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
        for (int j = 0; j < N; j++) {
            if (A[i] == B[j]) {
                bool is_unical = true;
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
        }
    }

    cout << "Array C: ";
    for (int i = 0; i < fact_size; i++) {
        cout << C[i] << " ";
    }

    delete[] A;
    delete[] B;
    delete[] C;

    return 0;
}
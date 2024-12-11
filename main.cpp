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
        A[i] = rand() % 100;
        cout << A[i] << " ";
    }
    cout << endl;

    cout << "Array B: ";
    for (int i = 0; i < N; i++) {
        B[i] = rand() % 100;
        cout << B[i] << " ";
    }
    cout << endl;

    cout << "Array C: ";
    int *C = new int[M + N];
    int fact_size = 0;

    for (int i = 0; i < M; i++) {
        bool is_unical = true;
        for (int j = 0; j < fact_size; j++) {
            if (A[i] == C[j]) {
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
        bool is_unical = true;
        for (int j = 0; j < fact_size; j++) {
            if (B[i] == C[j]) {
                is_unical = false;
                break;
            }
        }
        if (is_unical) {
            C[fact_size] = B[i];
            fact_size++;
        }
    }

    for (int i = 0; i < fact_size; i++) {
        cout << C[i] << " ";
    }
    cout << endl;

    delete[] A;
    delete[] B;
    delete[] C;

    return 0;
}

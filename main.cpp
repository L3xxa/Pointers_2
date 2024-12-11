#include <iostream>
#include <ctime>
using namespace std;

int main() {

    int M;
    int N;
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

    int *C = new int [M + N];


    return 0;
}
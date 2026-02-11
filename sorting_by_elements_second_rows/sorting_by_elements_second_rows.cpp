#include <iostream>
using namespace std;

int main() {
    const int N = 4, M = 3;
    int arr[N][M];

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < M - 1; ++i) {
        int min_el = arr[1][i];
        int min_i = i;
        for (int j = i + 1; j < M; ++j) {
            if (arr[1][j] < min_el) {
                min_el = arr[1][j];
                min_i = j;
            }
        }

        for (int k = 0; k < N; ++k) {
            int t;
            t = arr[k][i];
            arr[k][i] = arr[k][min_i];
            arr[k][min_i] = t;
        }
    }

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}
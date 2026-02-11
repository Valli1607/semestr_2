#include <iostream>
using namespace std;

int main() {
    int A[100];
    int n, d, p, q;
    cin >> n >> p >> q;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    int i = p;
    int j = q;
    while (i < j) {
        d = A[i];
        A[i] = A[j];
        A[j] = d;
        i++;
        j--;
    }
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    return 0;
}
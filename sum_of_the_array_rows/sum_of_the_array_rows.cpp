#include<iostream>
#include<clocale>
using namespace std;
int main() {
    setlocale(LC_ALL, "ru");
    const int max_size = 50;
    int arr[max_size][max_size];
    int sum[max_size];
    int n;
    cout << "Введите размер массива: ";
    cin >> n;
    if (n <= 0 || n >= 51) {
        while (n <= 0 || n >= 51) {
            cout << "Введите другой размер (0<n<51): ";
            cin >> n;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }

    cout << endl;

    for (int i = 0; i < n; i++) {
        sum[i] = 0;
        for (int j = 0; j < n; j++) {
            sum[i] += arr[i][j];
        }
        cout << sum[i] << ' ';
    }

    return 0;
}
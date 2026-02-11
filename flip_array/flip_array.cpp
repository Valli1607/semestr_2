#include<iostream>
#include<clocale>
using namespace std;
int main() {
    setlocale(LC_ALL, "ru");
    int arr[50];
    int n, m = 0;
    cout << "Введите размер массива: ";
    cin >> n;
    if (n <= 0 || n >= 51) {
        while (n <= 0 || n >= 51) {
            cout << "Введите другой размер (0<n<51): ";
            cin >> n;
        }
    }
    cout << "Исходный массив: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        cout << arr[i] << ' ';
    }
    cout << endl;
    for (int i = 0; i < n / 2; i++) {
        m = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = m;
    }
    cout << "Новый массив: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    return 0;
}
#include<iostream>
#include<clocale>
using namespace std;
int main() {
    setlocale(LC_ALL, "ru");
    int arr[50];
    int sum[50];
    int n;
    cout << "Введите размер массива: ";
    cin >> n;
    if (n <= 0 || n >= 51) {
        while (n <= 0 || n >= 51) {
            cout << "Введите другой размер (0<n<51): ";
            cin >> n;
        }
    }
    cout << "Исходный массив: ";
    for (int i = 0; i < n; i++) {
        arr[i] = -50 + rand() % 100;
        cout << arr[i] << ' ';
    }
    cout << endl;

    cout << "Получившийся массив: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    return 0;
}
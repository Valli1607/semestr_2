#include<iostream>
#include<clocale>
using namespace std;
int main() {
    setlocale(LC_ALL, "ru");
    int n;
    cout << "Введите размер массива: ";
    cin >> n;
    int arr[50];
    cout << "Исходный массив: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        cout << arr[i] << ' ';
    }
    cout << endl;

    for (int i = 1; i < n; i++) {
        for (int j = i; j > 0; j--) {
            if (arr[j] < arr[j - 1]) {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
    cout << "Получившийся массив: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    return 0;
}
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
        arr[i] = 1 + rand() % 100;
        cout << arr[i] << ' ';
    }
    cout << endl;

    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[min] > arr[j])
                min = j;
        }
        if (min != i) {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }

    cout << "Получившийся массив: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    return 0;
}
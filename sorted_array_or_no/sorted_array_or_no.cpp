#include<iostream>
#include<clocale>
using namespace std;
int main() {
    setlocale(LC_ALL, "ru");
    int arr[50];
    int n;
    bool f = true;
    cout << "Введите размер массива: ";
    cin >> n;
    if (n <= 0 || n >= 51) {
        while (n <= 0 || n >= 51) {
            cout << "Введите другой размер (0<n<51): ";
            cin >> n;
        }
    }
    cout << "Получившийся массив: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        cout << arr[i] << ' ';
    }
    cout << endl;

    for (int i = 1; i < n && f == true; i++) {
        if (arr[i - 1] >= arr[i]) {
            f = false;
        }
    }

    if (f == false)
        cout << "Массив не упорядочен";
    else
        cout << "Массив упорядочен" << endl;
    return 0;
}
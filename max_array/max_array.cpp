#include<iostream>
#include<clocale>
using namespace std;
int main() {
    setlocale(LC_ALL, "ru");
    int n;
    int i1 = 0, s = 1;
    int arr[50];
    cout << "Введите размер массива: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        cout << arr[i] << " ";
    }
    cout << endl;

    int max = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            i1 = i;
            s = 1;
        }
        else if (arr[i] == max) {
            s++;
        }
    }
    cout << "MAX из массива: " << max << endl;
    cout << "Eго номер: " << i1 + 1 << endl;
    cout << "Eго количество: " << s << endl;
    return 0;
}
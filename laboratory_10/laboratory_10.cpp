#include <iostream>
#include<clocale>
using namespace std;
int main(){
    setlocale(LC_ALL, "ru");
    int n, k;
    cout << "Введите количество строк в массиве: ";
    cin >> n;
    cout << "Введите количество слов в строке: ";
    cin >> k;
    char*** arr = new char** [n];
    for (int i = 0; i < n; i++) {
        arr[i] = new char* [k];
        for (int j = 0; j < k; j++) {
            arr[i][j] = new char[100];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            cout << "Введите " << i + 1 << " строку " << j + 1 << " слово: ";
            cin >> arr[i][j];
        }
    }
    cout << "Исходный массив: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int pos;
    cout << "Введите позицию, куда вставить новую строку: ";
    cin >> pos;
    if (pos <1 || pos >n + 1) {
        while (pos < 1 || pos >n + 1) {
            cout << "Введите другую позицию (1<=pos<=n+1): ";
            cin >> pos;
        }
    }
    char*** newarr = new char** [n + 1];
    for (int i = 0; i < n + 1; i++) {
        newarr[i] = new char* [k];
        for (int j = 0; j < k; j++) {
            newarr[i][j] = new char[100];
        }
    }
    for (int i = 0; i < pos - 1; i++) {
        for (int j = 0; j < k; j++) {
            int l = 0;
            while (arr[i][j][l] != '\0') {
                newarr[i][j][l] = arr[i][j][l];
                l++;
            }
            newarr[i][j][l] = '\0';
        }
    }
    cout << "Введите новую строку:" << endl;
    for (int j = 0; j < k; j++) {
        newarr[pos - 1][j] = new char[100];
        cout << "Cлово " << j + 1 << ": ";
        cin >> newarr[pos - 1][j];
    }
    for (int i = pos - 1; i < n; i++) {
        for (int j = 0; j < k; j++) {
            int l = 0;
            while (arr[i][j][l] != '\0') {
                newarr[i + 1][j][l] = arr[i][j][l];
                l++;
            }
            newarr[i + 1][j][l] = '\0';
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            delete[] arr[i][j];
        }
        delete[] arr[i];
    }
    delete[] arr;
    arr = newarr;
    n += 1;
    cout << "Получившийся массив: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            delete[] arr[i][j];
        }
        delete[] arr[i];
    }
    delete[] arr;
}

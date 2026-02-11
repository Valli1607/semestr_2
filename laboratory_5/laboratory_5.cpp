#include<iostream>
#include<clocale>
using namespace std;
int main() {
    int n, k;
    int arr[50][50];
    cout << "Введите количество строк: ";
    cin >> n;
    if (n <= 1 || n >= 51) {
        while (n <= 1 || n >= 51) {
            cout << "Введите другой размер (1<n<51): ";
            cin >> n;
        }
    }
    cout << "Введите количество столбцов: ";
    cin >> k;
    if (k <= 1 || k >= 51) {
        while (k <= 1 || k >= 51) {
            cout << "Введите другой размер (1<k<51): ";
            cin >> k;
        }
    }
    int brr[500];
    cout << "Введите " << n * k << " чисел для строк: ";
    for (int i = 0; i < n * k; i++) {
        cin >> brr[i];
    }
    cout << "Введите " << n * k << " чисел для столбцов: ";
    for (int i = 0; i < n * k; i++) {
        cin >> brr[n * k + i];
    }
    int temp_rows[50][50];
    int index = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            temp_rows[i][j] = brr[index++];
        }
    }
    int temp_cols[50][50];
    for (int j = 0; j < k; j++) {
        for (int i = 0; i < n; i++) {
            temp_cols[j][i] = brr[index++];
        }
    }
    for (int i = 0; i < n; i++) {
        int firstelem = temp_rows[i][0];
        for (int l = 0; l < n * k; l++) {
            if (brr[l] == firstelem) {
                int row_num = l / k;
                for (int j = 0; j < k; j++) {
                    arr[row_num][j] = temp_rows[i][j];
                }
                break;
            }
        }
    }
    for (int j = 0; j < k; j++) {
        int firstcol = arr[0][j];
        for (int l = 0; l < k; l++) {
            if (temp_cols[l][0] == firstcol && l != j) {
                for (int i = 0; i < n; i++) {
                    int temp = arr[i][j];
                    arr[i][j] = arr[i][l];
                    arr[i][l] = temp;
                }
                break;
            }
        }
    }
    cout << "Результат:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

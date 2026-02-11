#include<iostream>
#include<clocale>
using namespace std;
int main(){
    const int n = 50;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 1; i < N; ++i) {
        int t = arr[i];
        int j = i - 1;
        bool f = false;
        while (j >= 0 && !f) {
            if (arr[j] > t) {
                arr[j + 1] = arr[j];
                --j;
            }
            else {
                f = true;
            }
        }
        arr[j + 1] = t;
    }
    for (int i = 0; i < n; i++)
        cout << arr[i];
}
#include<iostream>
#include<clocale>
using namespace std;
int main() {
	int arr[50];
	int n;
	int k;
	cout << "Введите размер массива: ";
	cin >> n;
	if (n <= 0 || n >= 51) {
		while (n <= 0 || n >= 51) {
			cout << "Введите другой размер (0<n<51): ";
			cin >> n;
		}
	}
	cout << "Введите k: ";
	cin >> k;
	if (k <=0 || k >= n) {
		while (k <= 0 || k >= n) {
			cout << "Введите другой размер (0<k<n): ";
			cin >> k;
		}
	}
	cout << "Исходный массив: ";
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		cout << arr[i] << ' ';
	}
	cout << endl;
	cout << "Массив с k-того элемента: ";
	for (int i = k - 1; i < k+1; i++)
		cout << arr[i] << ' ';
	cout << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <n-i-1; j++) {
			if (arr[j+1] > arr[j]) {
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	cout << "Массив после сортировки: ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;
	int newn = 0;
	for (int i = 0; i < n; i ++) {
		if (arr[i] % 2 == 0) {
			arr[newn] = arr[i];
			newn++;
		}
	}
	cout << "Массив после удаления нечетных элементов: ";
	for (int i = 0; i < newn; i++)
		cout << arr[i] << ' ';
	cout <<endl;
	if (k >= newn)
		cout << "Не получится вывести массив с k-того элемента";
	else {
		cout << "Получившийся массив с k-того элемента: ";
		for (int i = k - 1; i < k + 1; i++)
			cout << arr[i] << ' ';
	}
	return 0;
}

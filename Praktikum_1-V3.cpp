#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Введіть кількість елементів у масиві: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Введіть елементи масиву: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int maxIndex = 0, minIndex = 0;

    // Знаходимо індекси максимального та мінімального елементів
    for (int i = 1; i < n; ++i) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }

    // Міняємо місцями максимальний і мінімальний елементи
    swap(arr[maxIndex], arr[minIndex]);

    cout << "Масив після обміну: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

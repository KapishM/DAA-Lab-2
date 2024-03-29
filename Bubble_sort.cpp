#include <iostream>
using namespace std;
void bubbleSort(int arr[], int size) {
  for (int j = 0; j < size - 1; ++j) {
    for (int i = 0; i < size - j - 1; ++i) {
      if (arr[i] > arr[i + 1]) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
      }
    }
  }
}
void display(int arr[], int size) {
  for (int i = 0; i < size; ++i) {
    cout << "  " << arr[i];
  }
  cout << "\n";
}
int main() {
  int arr[] = {-2, 45, 0, 11, -9};
  int size = sizeof(arr) / sizeof(arr[0]);
  bubbleSort(arr, size);
  cout << "Sorted array :\n";
  display(arr, size);
}

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  // Số phần tử trong dãy
  int n ;
  cin >> n;

  // Mảng chứa dãy hoán vị
  int arr[n];

  // Khởi tạo dãy
  for (int i = 0; i < n; i++) {
    arr[i] = i;
  }

  // In dãy hoán vị đầu tiên
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  // Sinh dãy hoán vị tiếp theo
  while (next_permutation(arr, arr + n)) {
    for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
    }
    cout << endl;
  }

  return 0;
}

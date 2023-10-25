#include <iostream>
using namespace std;

//Hàm sinh ra hoán vị tiếp theo của một dãy số
void next_permutation (int *arr, int n){
    //Tìm vị trí của phần tử có thể hoán đổi
    int i =n-2;
    while (i>=0 && arr[i]>=arr[i+1]){
        i--;
    }
}

//Nếu không tìm thấy phần tử có thể hoán đổi, thì dãy số đó đã là phần tử cuối cùng
if(i<0){
    return;
}

//tim phan tu lon hon arr[i] trong day so sau arr[i]
int j=n-1;
while (arr[i]>=arr[j]){
    j--;
}

//Hoan doi arr[i] va arr[j]
int temp =arr[i];
arr[i] = arr[j];
arr[j]=temp;

//sap xep cac phan tu sau arr[i] theo thu tu giam dan
  for (int k = i + 1; k < n; k++) {
    for (int l = k + 1; l < n; l++) {
      if (arr[k] < arr[l]) {
        int temp = arr[k];
        arr[k] = arr[l];
        arr[l] = temp;
      }
    }
  }
// Hàm in ra tất cả các hoán vị của một dãy số
void print_permutations(int *arr, int n) {
  // In ra hoán vị đầu tiên
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  // Sinh ra các hoán vị tiếp theo
  while (true) {
    next_permutation(arr, n);

    // Nếu không tìm thấy hoán vị tiếp theo, thì thoát khỏi vòng lặp
    if (arr[0] == 1) {
      break;
    }

    // In ra hoán vị
    for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
    }
    cout << endl;
  }
}


int main(){

int arr[n];
cin >> n;
 print_permutations(arr, sizeof(arr) / sizeof(arr[0]));
 return 0;
}
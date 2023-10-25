#include <iostream>

using namespace std;

void swap(int& a, int& b) {
  int temp = a; // store a in temp
  a = b; // assign b to a
  b = temp; // assign temp to b
}

void swap1(int& a, int& b){
  int temp = a;
  a=b;
  b=temp;

}
int main(){
    int a=3,b=2;
    cout << a << b;
    swap1 (a,b);
    cout << a << b;
    return 0;
}
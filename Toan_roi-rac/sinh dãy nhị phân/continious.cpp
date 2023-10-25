#include <iostream>
#include <math.h>
 
using namespace std;
 
int N;
 
string next(string s){
    for (int i = s.length() - 1; i >= 0; i--)
        if (s[i] == '0'){
            s[i] = '1';
            return s;
        } else
            s[i] = '0';
    return "";
}
 
int main(){
    cin >> N;
    string s = "";
    for (int i = 0; i < N; i++)
        s = "0" + s;
    for (int i = 0; i < pow(2, N); i++){
        cout << s << endl;
        s = next(s);
    }
    return 0;
}
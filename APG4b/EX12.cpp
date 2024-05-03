#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S;
  cin >> S;
 
  // ここにプログラムを追記
  int A = 1;
  int N = S.size();


  for (int i = 1; i < N; i += 2){

    if(S.at(i) == '+'){
        A++;
    }

    else{
        A--;
    } 
  }
  
  cout << A << endl;
}
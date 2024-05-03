#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N, A;
  cin >> N >> A;

  // ここにプログラムを追記
  for (int i = 0; i < N; i++){
    int B;
    string x;
    cin >> x >>B;

    if (x == "+"){
        A += B;
    }

    else if (x == "-"){
        A -= B;
    }

    else if (x == "*"){
        A *= B;
    }

    else if (x == "/"){
        
        if(B == 0){
            cout << "error" << endl;
            break;
        }
        else A /= B;
    }

    cout << i+1 << ":" << A << endl;
  }
  
}
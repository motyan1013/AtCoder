#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin >> N;
  vector <int> A(N);
  int sum = 0;

  for (int i = 0; i < N; i++){
    cin >> A.at(i);
    sum += A.at(i);
  }

    int Ave;
    Ave = (sum / N);

    for(int i = 0; i < N; i++){
        if(A.at(i) >= Ave){
            cout << A.at(i) - Ave << endl;
        }

        else{
            cout << Ave - A.at(i) << endl;
        }
    }


}
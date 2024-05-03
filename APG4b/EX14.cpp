#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int A, B, C;
  cin >> A >> B >> C;

  int Min,Max; 

  Min = min(min(A,B),C);
  Max = max(max(A,B),C);

  cout << Max - Min << endl;
}
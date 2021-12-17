#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, y, one = -1, five = -1, ten = -1;

  cin >> n >> y;

  for(int i = 0; i < n + 1; i++){
    for(int j = 0; j < n - i + 1; j++){
      if(10000 * i + 5000 * j + 1000 * (n - i - j) == y){
        one = i;
        five = j;
        ten = n - i - j;
      }
    }
  }

  cout << one << ' ' << five << ' ' << ten << endl;
}

#include <bits/stdc++.h>
using namespace std;

int main(){
  int k, s, answer = 0;

  cin >> k >> s;

  for(int x = 0; x < k + 1; x++){
    for(int y = 0; y < k + 1; y++){
      // ３重for文にすると計算時間が大きくなってしまうので、xとyが定まればzが１通りに定まる事に着目する
      if(s <= x + y + k && s >= x + y){
        answer++;
      }
    }
  }

  cout << answer << endl;
}

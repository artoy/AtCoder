#include <bits/stdc++.h>
using namespace std;

int strategy(vector<int> time, int n, int t1, int t2){
  if(n == time.size()){
    return max(t1, t2);
  }

  return min(strategy(time, n+1, t1 + time.at(n), t2), strategy(time, n+1, t1, t2 + time.at(n)));
}

int main(){
  int N, ans;
  cin >> N;
  vector<int> time(N);

  for(int i = 0; i < N; i++){
    cin >> time.at(i);
  }

  ans = strategy(time, 0, 0, 0);

  cout << ans << endl;
}
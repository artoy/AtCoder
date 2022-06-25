#include <bits/stdc++.h>
using namespace std;

// int64_tにしないとオーバーフローする
// nは二分木の深さ（Sの右から何文字目か）、kは何文字連続で+を入れないか、sumはそのnの時点での値
int64_t solve(vector<int> v, int n, int k, int sum){
  if(n == v.size() - 1){
    return sum + v.at(0) * pow(10, k);
  }

  return solve(v, n + 1, k + 1, sum + v.at(v.size() - n - 1) * pow(10, k)) +
         solve(v, n + 1, 0, sum + v.at(v.size() - n - 1) * pow(10, k));
}

int main(){
  string S;
  vector<int> V;

  cin >> S;

  for(int i = 0; i < S.size(); i++){
    // push.backは配列の末尾に追加するメソッド
    // charをintに変換すると'0'→48となってしまうので、'0'を引く事でcharの表す数字とintの表す数字を一致させる
    V.push_back(S.at(i) - '0');
  }

  cout << solve(V, 0, 0, 0) << endl;
}

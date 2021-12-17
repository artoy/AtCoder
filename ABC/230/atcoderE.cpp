#include <bits/stdc++.h>
using namespace std;

int main(){
  int q;
  vector<int> queue;

  cin >> q;

  vector<vector<int>> x(q, vector<int>(2));

  for(int i = 0; i < q; i++){
    int n;
    cin >> n;

    if(n == 1){
      x.at(i) = {n, 0};
    }else{
      x.at(i).at(0) = n;
      cin >> x.at(i).at(1);
    }
  }

  for(int i = 0; i < q; i++){
    if(x.at(i).at(0) == 1){
      queue.push_back(x.at(i).at(1));
    }else if(x.at(i).at(0) == 2){
      cout << queue.at(0) << endl;
      queue.erase(queue.begin());
    }else{
      sort(queue.begin(), queue.end());
    }
  }
}
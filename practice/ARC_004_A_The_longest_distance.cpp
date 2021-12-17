#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, answer = 0, length;

  cin >> n;

  vector<vector<double>> coordinate(n, vector<double>(2));

  for(int i = 0; i < n; i++){
    cin >> coordinate.at(i).at(0);
    cin >> coordinate.at(i).at(1);
  }

  for(int i = 0; i < n; i++){
    for(int j = i + 1; j < n; j++){
      length = pow(coordinate.at(i).at(0) - coordinate.at(j).at(0), 2)
      + pow(coordinate.at(i).at(1) - coordinate.at(j).at(1), 2);

      if(length > answer){
        answer = length;
      }
    }
  }

  cout << sqrt(answer) << endl;
}

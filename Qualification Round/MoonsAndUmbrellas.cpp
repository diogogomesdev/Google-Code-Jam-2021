#include <iostream>

using namespace std;

string s;

int main(){

  int T, X, Y, sum=0;

  cin >> T;

  for(int i=0; i<T; i++){
    cin >> X >> Y;

    cin >> s;

    for(int j=1;j<s.length();j++){
      if(s[j-1] == 'C'){
        if(s[j] == '?'){
          s[j] = 'C';
        }
        else if(s[j] == 'J'){
          sum += X;
        }
      }
      else if(s[j-1] == 'J'){
        if(s[j] == '?'){
          s[j] = 'J';
        }
        else if(s[j] == 'C'){
          sum += Y;
        }
      }
    }

    cout << "Case #" << i+1 << ": " << sum << endl;

    sum=0;

  }

  return 0;
}

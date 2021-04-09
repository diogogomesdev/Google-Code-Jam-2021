#include <iostream>

using namespace std;

int arr[1000];

int reverse(int a, int b){
  int count=b-a+1;
  if(b-a == 1){
    swap(arr[a], arr[b]);
  }
  else{
    for(int i=0;i<(b-a+1)/2;i++){
      swap(arr[a+i], arr[b-i]);
    }
  }
  return count;
}

int main(){
  int T, N, j, min=1000, sum=0, pos;

  cin >> T;

  for(int e=0;e<T;e++){

    cin >> N;
    for(int w=0;w<N;w++){
      cin >> arr[w];
    }

    sum=0;

    for(int i=0; i<N-1; i++){
      min=1000;
      for(int k=i;k<N;k++){
        if(arr[k] < min){
          pos = k;
          min = arr[k];
        }
      }
      j=pos;
      sum += reverse(i, j);
    }

    cout << "Case #" << e+1 << ": " << sum << endl;
  }

  return 0;
}

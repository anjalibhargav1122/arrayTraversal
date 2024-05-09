#include <iostream>
using namespace std ;

int main(){
 int n;
    cout << "Enter the numbers: ";
    cin >> n;

int num [n];

 for (int i = 0; i < n; i++) {
        cout << "Enter value " << i + 1 << ": ";
        cin >> num[i];
    }

  
  int size = n;
  int start = 0;
  int end = size - 1;

  
  while(true){
    if(start>end){
      break;
    }
  else{
    cout<<num[start]<<"  "<<num[end]<<endl;
  
    start++;
    end--;
    }
  }

  

}

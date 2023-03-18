#include <iostream>
using namespace std;
int main() {
  int ar[2][3]{{10,11,12},{21,22,23}};
  for(int row=0; row<2; row++){
    cout<<endl;
    for(int colum=0; colum<3; colum++){
      cout<<"    "<<ar[row][colum];
    }
  }
  }

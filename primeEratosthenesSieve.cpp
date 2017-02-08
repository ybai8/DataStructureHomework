#include<iostream>
#include<cmath>
using namespace std;
int runEratosthenesSieve(int upperBound) {
	int num=0;
      int upperBoundSquareRoot = (int)sqrt((double)upperBound);
      bool *isComposite = new bool[upperBound + 1];
      memset(isComposite, 1, sizeof(bool) * (upperBound + 1));
      for (int m = 2; m <= upperBoundSquareRoot; m++) {
            if (isComposite[m]) {
                  for (int k = m * m; k <= upperBound; k += m)
                        isComposite[k] = false;
            }
      }
      for (int m = 2; m <= upperBound; m++)
            if (isComposite[m])
                  num++;
      delete [] isComposite;
      return num;
}
int prime(int a,int b){
	if(a>b)
		 return 0;
	else
    return runEratosthenesSieve(b)-runEratosthenesSieve(a-1);
}
int main(){
	for(int n=0;n<100;n++){
	cout<<"Please input lowerbound and upperbound:";
	int a,b;
	cin>>a>>b;
	cout<<prime(a,b);
}
}
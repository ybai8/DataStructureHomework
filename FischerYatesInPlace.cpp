#include<iostream>
#include<algorithm>
#include<cstdlib>
using namespace std;
void FischerYatesInPlace(int x[], int n){
	for(int i=n-1;i>=0;i--){
		int r=rand()%(i+1);
		swap(x[r],x[i]);
	}
	for(int j=0;j<n;j++){
		cout<<x[j]<<' ';
	}
}
int main(){
int n=10;
int x[]={1,2,3,4,5,6,7,8,9,0};
FischerYatesInPlace(x,n);
}
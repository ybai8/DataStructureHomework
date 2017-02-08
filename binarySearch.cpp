#include<iostream>
using namespace std;
int binary(int *x, int target,int first, int last){
if(target<x[first]||target>x[last])
	return -1;
int i=first,j=last;
while(i<j){
	int guess=(i+j)/2;
	if(x[guess]>target)
		return binary(x,target,first,guess-1);
	else if(x[guess]<target)
		return binary(x,target,guess+1, last);
	else 
		return guess;
}
}
int main(){
	int x[]={1,2,3,4,6,7,8,9,10};
	cout<<binary(x,5,0,8);
}
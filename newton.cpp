#include<iostream>
using namespace std;
bool cmp(double d1,double d2){
	return d1-d2<0.001? true:false;
}
double newton(int n){
	if(n<0)
		return -1;
	double g=n;
	while(!cmp(g*g-n,0.001)){
		g=0.5*(g+n/g);
	}
	return g;
}
int main(){
	cout<<newton(7);
	return 0;
}
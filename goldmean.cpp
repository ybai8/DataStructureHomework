#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
typedef double (*FuncOneVar)(double);
double f(double x){
	return (x-2)*(x-2);
}
const double PHI=(1+sqrt(5))/2;
double goldMean(FuncOneVar f,double left, double right, double eps){
	double s=(right-left)/PHI;
	double a=right-s;
	double b=left+s;
	double ya=f(a);
	double yb=f(b);
	while(fabs(b-a)>eps){
		if(ya<yb){
			right=b;
		    b=left+(right-left)*0.618;
			yb=f(b);
		}
		else{
			left=a;
			a=right-(right-left)*0.618;
			ya=f(a);
		}
	}
	return (a+b)/2;
}
int main(){
	cout<<goldMean(f,-1.5,4,0.001);
}
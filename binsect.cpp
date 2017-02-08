#include<iostream>
#include<cmath>
#include<iomanip>
#include<utility>
using namespace std;
double fun(double x){
	double fx=pow(x,2)-8;
	return fx;
}
typedef double (*FuncOneVar)(double x);
double binsection(FuncOneVar fun,double left,double right,double accu){
	if(fun(left)>0&&fun(right)<0){
		swap(left,right);
	}
if(fun(left)*fun(right)>0){
	throw "No root!";
}
while(fabs(left-right)>accu){
	float target=(left+right)/2;
    if(fun(target)>0)
    	right=target;
    else if(fun(target)<0)
    	left=target;
}
return (left+right)/2;
}

int main(){
	try{
    binsection(fun,1,2,0.001);
    cout<<binsection(fun,1,2,0.001);
}catch(const char* msp){
	cout<<msp<<'\n';
}
}
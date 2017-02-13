#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
typedef double (*FuncOneVar)(double);
double f(double x){
	return x*x-8;
}
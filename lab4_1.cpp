#include<iostream>
#include<cmath>
using namespace std;

double e=2.71828;
double findY(double x)
{
 double Y=(3*x*x*x)+(2*e)+ (pow(2,2*x+1))+(pow(pow(x,2)+1,0.5));
 return Y;
}
int main(){
    int x;
    cout<<"Enter X:";
    cin>>x;
    double Y=findY(x);
    cout<<"Result y="<<findY(x);
    return 0;
}
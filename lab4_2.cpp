#include<iostream>
#include<cmath>
using namespace std;
double findDistance(double u,double a,double t)
{
    double S=(u*t)+(0.5*(a*pow(t,2)));
    return S;
}
int main()
{   double u ,a, t;
    cout<<"Input u:";
    cin>>u;
    cout<<"Input a:";
    cin>>a;
    cout<<"Input t:";
    cin>>t;

    double S=findDistance(u,a,t);
    cout<<"REsult="<<S;
    return 0;
}
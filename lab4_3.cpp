#include<iostream>
#include<cmath>
using namespace std;
int findDivisor(int x)
{  
    int y;
     if(x>1){
        int y=2;
        while(x%y!=0){
            y++;
        }
    return y ;
        }
    
}
int main(){
    int x;
    cout<<"InputX:";
    cin>>x;
    int y=findDivisor(x);
    cout<<"OutPUT="<<y;
}
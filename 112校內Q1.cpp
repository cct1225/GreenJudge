#include <iostream>
#include <string>
using namespace std; 

int f(int n,int b,int c)
{
    int x;
    if(n==1&&b==1)    return 1;
    if(n==2&&c==3)   return 3;
    if(n>2)
    {
        x=b+c;
        return f(n-1,c,x);
    }
    else    
    {
        return c;
    }
}
int main() {
    int n;
    cin>>n;
    cout<<f(n,1,3)<<endl;
    



}

 
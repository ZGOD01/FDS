#include<bits/stdc++.h>

using namespace std;
int fact(int);

int main(){
    int x,n;
    cout<<"Enter the value of n :";
    cin>>n;

    x=fact(n);
    cout<<x;
    
    int fact(int);{
        if(n==0)
            return(1); 

        return (n*fact(n-1));
    }

    return 0;
}
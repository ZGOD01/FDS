#include<bits/stdc++.h>

using namespace std;

int main(){

    int a;
    cout<<"enter the No. : ";
    cin>>a;

    try{
        if(a==1){
            throw 10;
        }
        if(a==2){
            throw float (20.89);
        }
        if(a==3){
            throw 'x';
        }
        cout<<"Exception does not  match ";
    }
    catch(int a){
        cout<<" This is first exception and value is : "<<a; 
    }catch(float a){
        cout<<" This is first exception and value is : "<<a; 
    }catch(char a){
        cout<<" This is first exception and value is : "<<a; 
    }
    return 0;
}

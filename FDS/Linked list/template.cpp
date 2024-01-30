#include<bits/stdc++.h>

using namespace std ;

template<typename T >
void MAX(T a,T b){
    if(a<b){
        cout<<"The first value is smaller";
    }else{
        cout<<"The second Value is greater ";
    }
}

int main(){
    cout<<"Example of the Template  ";
    cout<<"Interger Number ";

    MAX<int>(10,20);

    cout<<"Float Numbers ";
    MAX<float>(10.1,20.2);
    return 0;
}
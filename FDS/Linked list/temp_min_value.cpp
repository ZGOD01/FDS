#include<bits/stdc++.h>

using namespace std;

template <class t>
t findmin(t arr[],int n){
    int i;
    t min;
    min=arr[0];
    for(i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    return (min);
}

int   main(){
    
    int iarr[5];
    char carr[5];
    double darr[5];

    cout<<"Integer Value ";
    for(int i=0;i<5;i++){
        cout<<"Enter interger  value "<<i+1<< " : ";
        cin>>iarr[i];
    }
    cout<<"Character  Value ";
    for(int j=0;j<5;j++){
        cout<<"Enter character value "<<j+1<< " : ";
        cin>>carr[j];
    }
    cout<<"Decimal  Value ";
    for(int k=0;k<5;k++){
        cout<<"Enter decimal  value "<<k+1<< " : ";
        cin>>darr[k];
    }

    cout<<"Generic Function ";
    cout<<"Interger Minimum is : "<<findmin(iarr,5);
    cout<<"Character  Minimum is : "<<findmin(carr,5);
    cout<<"Decimal Minimum is : "<<findmin(darr,5);



    return 0;
}
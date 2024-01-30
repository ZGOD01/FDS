void selectionSort(){
    int i,n,j,k,temp;
    int a[n];

    for(i=0;i<n-1;i++){
        k=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[k])
                k=j;
            if(k!=i){
                temp=a[i];
                a[i]=a[k];
                a[k]=temp;
            }
        }
    }
}
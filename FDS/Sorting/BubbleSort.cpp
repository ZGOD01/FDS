void bubbleSort(){
    int i,n,j,temp;
    int a[n];
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
void display(int a[],int n){
    int i;

    for(i=0;i<n;i++)
        printf("%5d",a[i]);
    printf("\n");
  
}



void swap(int *a,int *b){
 int temp;
  temp=*a;
  *a=*b;
  *b=temp;
  
}


int insertionSort(int a[],int n){
   int i,j,v;
  
    for(i=1;i<n;i++){
        v=a[i];
      for(j=i-1;j>=0 && a[j]<v;j--) {
        a[j+1]=a[j];
           display(a,n);
      }
      a[j+1]=v;
         display(a,n);
         printf("\n");
      }
    }
  
  

void selectionSort(int a[],int n){
int mi,i,j;
    for(i=0;i<n-1;i++){
        mi=i;
      for(j=i+1;j<n;j++){
        if(a[mi]<a[j]) mi=j;
          
        }
      if(mi!=i) swap(&a[i],&a[mi]);
      display(a,n);
      printf("\n");
    }

}

void bubbleSort(int a[],int n){

int i,j;
int sorted;
// how may pair to compare?
for(j=1;j<=n-1;j++){
    sorted=1;
    for(i=0;i<n-j;i++){
        if(a[i]<a[i+1]) {
            swap(&a[i],&a[i+1]);
            sorted=0;
        }
      display(a,n);
    }
    if(sorted==1)break;
    printf("\n");

 }
  
}



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sorting.h"
int main(int argc,char **argv) {
    int *a;//[N]={3,2,6,7,3,1};
    int n=argc-2;
    a=(int*)malloc(sizeof(int)*n);
  int i,j=0;
    for(i=0;i<n;i++){
        a[i]=atoi(argv[i+2]);
      
          
    }
  
 
  display(a,n);
  if(strcmp(argv[1],"bubble")==0)
      bubbleSort(a,n);
else  if(strcmp(argv[1],"insertion")==0)
      insertionSort(a,n);

 else  if(strcmp(argv[1],"selection")==0) 
         selectionSort(a,n);
else {
    printf("Incorrect type\n");
}
   printf("\n");
   display(a,n);
    
 return 0;
}

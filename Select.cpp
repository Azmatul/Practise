/*
Steps:
1. take inputs
2. Implement SelectionSort
3. Show outputs
*/

#include<stdio.h>

int main() {
    // Input
    int a[5] = {-6,2,9,-5,0};


    // SelectionSort
    int i,j,min_index;
    for(i=0;i<5;i++){
        min_index=i;
        for(j=i+1;j<5;j++){
            if(a[j]<a[min_index]){
                min_index=j;
            }
        }
        int temp=a[i];
        a[i]=a[min_index];
        a[min_index]=temp;
    }

    // output
    for(i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    return 0;
}


    // output


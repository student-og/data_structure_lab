//insertion Sort
#include <stdio.h>
// void insertion_sort(int a[],int n){
//     int key,j;
//     for(int i=1;i<n;i++){
//         key=a[i];
//         j=i-1;
//      while((j>=0)&&(a[j]>key)){
//         a[j+1]=a[j];
//         j--;

//     }
//     a[j+1]=key;
// }
// printf("\nSorted array is: ");
// for(int k=0;k<n;k++){
//     printf("%d ",a[k]);
// }

// }

// selection sort
void selection(int a[],int n){
    int temp,min,i,j;
    for( i=0;i<n-1;i++){
        min=i;

        for( j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        temp=a[min];
        a[min]=a[i];
        a[i]=temp;
    }
}
    
    printf("\nsorted array is:");
    for(int k=0;k<n;k++){
        printf("%d ",a[k]);
    }
}




int main()
{
int a[10],n;
printf("Enter the size of array: ");
scanf("%d",&n);
printf("Enter the element of array: ");
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
printf("your given array is: ");
for(int i=0;i<n;i++){
    printf(" %d",a[i]);
}
// insertion_sort(a,n);
selection(a,n);


return 0;
} 

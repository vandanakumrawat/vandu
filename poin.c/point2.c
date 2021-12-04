#include<stdio.h>
void swaparray(int *p1, int *p2)
{
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
}
int main(){
    int i,n;
    int arr[]={10,20,30,40,50};
    for(i=0;i<n;i++)
    scanf("arr[%d]=%d",arr+1);
    swaparray(arr+1,arr+2);
    printf("resultant value");
    for(i=0;i<n;i++)
    printf("arr[%d]=%d\n",i,arr[i]);

}

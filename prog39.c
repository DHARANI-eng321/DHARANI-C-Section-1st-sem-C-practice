#include<stdio.h>
int main()
{
  int n,key,found=0;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
  {
    scanf("%d", &a[i]);
  }
  scanf("%d",&key);
  for(int i=0;i<n;i++){
  if(a[i]==key){
    found=1;
    printf("element fount index=%d",i);
    break;
    }}
    if(found==0){
    printf("element not fount");
    }
    return 0;
} 
 
  
  

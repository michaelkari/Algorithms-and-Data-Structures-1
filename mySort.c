#include <stdio.h>

void mySort(int d[], unsigned int n)
{
  int j,i,location,swap;
  for(j=0;j<n;j++)
    scanf("%d",&d[j]);
  for(j=0;j<(n-1);j++){
    location=j;
    for(i=j+1;i<n;i++){
      if(d[location]>d[i])
	location=i;
    }
    if(location!=j){
      swap=d[j];
      d[j]=d[location];
      d[location]=swap;
    }
  }
}

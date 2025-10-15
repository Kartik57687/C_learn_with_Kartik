#include <stdio.h>
int main(){
  //Pattern In c 
  int n,m,j,i;
  printf("Enter the No of rows and columns in your pattern: ");
  scanf("%d%d",&n,&m);
    for(i=0;i<n;i++){
    for(j=0;j<m;j++){
    printf("*");
    }
printf("\n");
    }
  return 0;
}

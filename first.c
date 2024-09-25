#include<stdio.h>

int main(){
  int result, inp;
  printf("Enter the Number");
scanf("%d",&inp);
result= reverse(inp);
printf("The Reversed No Is %d",result);
    return 0;
} 
int reverse(int n ){
  int rev = 0 ;
  int dig ;
  while (n!=0)
  {
    dig = n%10 ; 
    rev =rev *10 +dig;
    n/=10;
  }
  while (n!=0)
  {
    dig = n%10 ; 
    rev =rev *10 +dig;
    n/=10;
  }
  return rev;
}
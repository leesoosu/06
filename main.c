#include <stdio.h>
#include <stdlib.h>

int factorial(int x) {
   int y=1, i=1;
   if (x==1)
      return 1;
   else{
      for(i=1;i<=x;i++)
      y*=i;
   }
   return y;
}

int sub(int a,int b){
   if(a>b)
      return a-b;
   else
      return b-a;
}
int combination(int n,int r){
   return factorial(n)/(factorial(sub(n,r))*factorial(r));
}
int main(){
   
   int n,r;
   printf("input n: "); 
   scanf("%d",&n);
   printf("input r: "); 
   scanf("%d",&r);
   printf("n combination r %d\n",combination(n,r));
   system("PAUSE");   
   return 0;
}

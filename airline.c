#include <stdio.h>
int main() {
	int t,a,b,c,d,e;
	scanf("%d",&t);
	while(t--){
      
      scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
  
  if( ((a <= e) && ((b+c) <= d)) ||((c <= e)&&(a+b <= d)) || ((b <= e) &&(a+c <= d))){
        printf("YES\n");
   }
 else{
 printf("NO\n");
     }
}
	return 0;
}


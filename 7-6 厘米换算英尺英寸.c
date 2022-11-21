#include <stdio.h>
int main(){
   int cm;
   float f=30.48;
   scanf("%d",&cm);
   int foot=cm/f;
   int inch=((cm/f)-foot)*12;
   printf("%d %d",foot,inch);
   return 0;
}

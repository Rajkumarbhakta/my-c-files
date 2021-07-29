#include <stdio.h>

int main() {
   int array[1000];
   int n, loop, largest;
   printf("how many number you want to enter:");
   scanf("%d",&n);
   for (int i=0;i<n;i++)
   {
   	printf("element no %d =",i);
   	scanf("%d",&array[i]);
   }

   largest = array[0];
   
   for(loop = 1; loop < 10; loop++) {
      if( largest < array[loop] ) 
         largest = array[loop];
   }
   
   printf("Largest element of array is %d", largest);   
   
   return 0;
}
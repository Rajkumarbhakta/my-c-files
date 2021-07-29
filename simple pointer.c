 #include <stdio.h>
 int main()
 {
 	int m=10;
 	int* z;
 	z=&m;
 	printf("z store the address of m=%p\n",z);
 	printf("*z store the value of m=%d\n",*z);
 	printf("&m is the address of m=%p\n",&m);
 	printf("&z store the address of z=%p\n",&z);
 	return 0;
 }
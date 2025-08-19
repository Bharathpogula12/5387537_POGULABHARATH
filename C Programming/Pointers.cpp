/*

#include<stdio.h>
int main(){
	int x1;
	char x2;
	
	int *ptr;
	
	x1 = 10;       //-> 10 goes to data bus
	ptr =(int *) 10;     //=> 10 goes to the address bus
	
	//D0 -D7 ->byte  -D stands for Data
	//A0 -A15 ->2Bytes -A stands for Address
	return 0;
}

*/

/*

#include<stdio.h>
typedef int * pointer;
int main()
{
	int i;
	pointer p;
	i= 5;
	p= 5;
	return 0;
}

*/


#include<stdio.h>
#include<stdlib.h>
int main(){
	int x1 =10;
	int *ptr;
	ptr =&x1;
	
	printf("%d\n", *ptr);
	printf("%d\n",x1);
	
	
	x1=20;       //referencing dereferencing
	printf("%d\n",*ptr);
	
	*ptr =200;
	printf("%d\n",x1);
	
	return 0;
}

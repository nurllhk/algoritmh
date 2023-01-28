#include <stdio.h>
#define BOYUT 5
int dizi[BOYUT],top;

void push(int veri)
{
	if(top+1==BOYUT)
	{
	printf("stack dolu");
		}
	else
	{
		top=top+1;
		dizi[top]=veri;
	}
}

void pop()
{
	if(top==-1)
	{
		printf("stack zaten boþ");
	}
	else
	{
		top=top-1;
	}
}
int peek(){
	
	return dizi[top];
}






int main(){
	
	
	
	top=-1;
	return 0;
	
	}

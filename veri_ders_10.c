#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node*next;
};

struct node*top=NULL;
struct node*temp=NULL;

void push(int veri){
	struct node*eklenecek=(struct node*)malloc(sizeof(struct node));
	eklenecek->data=veri;
	eklenecek->next=NULL;
	if(top!=NULL){
	  	eklenecek->next=top;
	  	top=eklenecek;
	}	
}

void pop()
{
	if(top->data==NULL)
	{
		printf("stack dolu");
	}
	else{
		temp=top;
		top=top->next;
		free(temp);
		
	}
}

int peek(){
	
	return top->data;
}
int main(){
	
	
	return 0;
}

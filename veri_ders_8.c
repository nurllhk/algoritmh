#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node*next;
};
struct node*start=NULL;
struct node*temp=NULL;

void tersCevir(){
	struct node*prev=NULL;
	q=start;
	while(q!=NULL){
		temp=q->next;
		q->next=prev;
		prev=q;
		q=temp;
	}
	start=prev;
}

int main(int argc, char *argv[]) {
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

struct node{
	int veri;
	struct node*next;
	
	
};
struct node*start;
struct node*q;
void arayaEklenecek(int x, int y){
	
	struct node arayaekle=(struct node*)malloc(sizeof(struct node));
	
	arayaekle->data=y;
	q=start;
	
	while(q->next->data!=x){
		q=q->next;
		
	}
	struct node*onune=(struct node*)malloc(sizeof(struct node));
	onune=q->next;
	q->next=arayaekle;
	arayaekle->next=onune;
	
	
	
	
	
	
	
}



int main() {
	
	
	
	
	
	
	
	return 0;
}

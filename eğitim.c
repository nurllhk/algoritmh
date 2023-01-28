#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node*prev;
	struct node*next;
	
};
struct node*start=NULL;
struct node*temp=NULL;

void sonaEkle(int veri){
	struct node*eklenecek=(struct node*)malloc(sizeof(struct node));
	eklenecek->data=veri;
	
	if(start==NULL){
		start=eklenecek;
	}
	else{
		temp=start;
		
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=eklenecek;
		eklenecek->prev=temp;
	}
	
}

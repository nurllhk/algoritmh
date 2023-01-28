#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node*next;
};
struct node*start=NULL;
struct node*temp=NULL;

void arayaEkle(int hangisayininonune, int hangisayi){
	struct node*eklenecek=(struct node*)malloc(sizeof(struct node));
	struct node*onune=(struct node*)malloc(sizeof(struct node));
	eklenecek->data=hangisayi;
	
	if(start==NULL){
		start=eklenecek;
	}

	else{
		temp=start;
		while(temp->next->data!=hangisayininonune){
			temp=temp->next;
		}
		onune=temp->next;
		temp->next=eklenecek;
		eklenecek->next=onune;
		
	}
}

int main(){
	
	
	
	return 0;
}


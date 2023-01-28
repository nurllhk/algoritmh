#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node*next;
	
};

struct node*front=NULL;
struct node*rear=NULL;
struct node*temp=NULL;


void ekleme(int veri){
	
	if(front==NULL){
	struct node*eklenecek=(struct node*)malloc(sizeof(struct node));
	eklenecek->data=veri;
	eklenecek->next=NULL;
	
	front=rear=eklenecek;
	}
	else{	
	struct node*eklenecek=(struct node*)malloc(sizeof(struct node));
	eklenecek->data=veri;
	eklenecek->next=NULL;
	
	rear->next=eklenecek;
	rear=eklenecek;
		
	}

}

void silme(){
	if(front==NULL){
		printf("zaten bos");
		
	}
	else{
		temp=front;
		front=front->next;
		free(temp);
	
	}
}


int main(int argc, char *argv[]) {
	return 0;
}

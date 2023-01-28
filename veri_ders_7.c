#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node*next;
};
struct node*start=NULL;
struct node*temp=NULL;

void aradanSil(int silinecek){
	struct node*onceki=NULL;
	struct node*sonraki=NULL;
	if(start->data==silinecek){
		#basatn silinecek
	}
	temp=start;
	while(temp->next->data!=silinecek){
		temp=temp->next;
	}
	if(temp->next==NULL){
		#sondansilinceke
	}
	onceki=temp;
	sonraki=temp->next->next;
	free(temp->next);
	onceki->next=sonraki;
	
	
	
}
 



int main(int argc, char *argv[]) {
	return 0;
}

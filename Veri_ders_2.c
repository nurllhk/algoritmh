#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node*next;
};
struct node*start=NULL;
struct node*temp=NULL;


void sonaEkle(int sona){
	struct node*sonaekle=(struct node*)malloc(sizeof(struct node));
	sonaekle->data=sona;
	if(start==NULL){
		start=sonaekle;
	}
	else{
		temp=start;
		while(temp->next!=NULL){
			temp=temp->next;
		}
	}
}
int main(){
	return 0;
}

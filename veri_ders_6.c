#include <stdio.h>
#include <stdlib.h>


struct node{
	int data;
	struct node*next;
};
struct node*start=NULL;
struct node*temp=NULL;

void bastanSil(){
	
	if(start!=NULL){
		struct node*ikinci=(struct node*)malloc(sizeof(struct node));
		ikinci=start->next;
		free(start);
		start=ikinci;
		
	}
}
























int main(int argc, char *argv[]) {
	return 0;
}

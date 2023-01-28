#include <stdio.h>
#include <stdlib.h>


struct node {
	int data;
	struct node* next;
	
	
};
struct node *start;
struct node*temp;


void aradanSil(int x){
	
	struct node*onceki;
	struct node*sonraki;
	
	
temp=start;
if(start->data==x){
	
	printf("baþtaki silinir");
	
	
	
	
	
}	

else{
	
	temp=start;
	
	while(temp->next->data!=x){
		temp=temp->next;
		
		
		
	}
	
	onceki=temp;
	sonraki=temp->next->next
	
	free(onceki->next);
	
	onceki->next=sonraki;
	
	
	
}
	
	
	
	
	
	
	
	
}






int main() {
	
	
	
	
	
	
	
	
	
	return 0;
}

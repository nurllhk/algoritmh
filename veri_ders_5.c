 #include <stdio.h>
 #include <stdlib.h>
 
 struct node{
 	int data;
 	struct node*next;
 	
 };
 struct node*start=NULL;
 struct node*temp=NULL;
 void sondanSil(){
 	
 	if(start==NULL){
 		free(start);
	 }
 	else{
 		temp=start;
 		while(temp->next->next!=NULL){
 		temp=temp->next;	
		 }
		 free(temp->next);
		 temp->next=NULL;
	 }
 }
 int main(){
 	return 0;
 }

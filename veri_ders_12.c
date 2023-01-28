#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node*next;
	struct node*prev;
};

// Çift yönlü baðlý listelerde araya eleman ekleme
  
struct node *start=NULL;
struct node*temp=NULL;
struct node*onceki=NULL;
struct node*sonraki=NULL;

void arayaEkle(int onune, int eklenecek)
{
	struct node*eklenecek=(struct node*)malloc(sizeof(struct node));
	eklenecek->data=eklenecek;
	eklenecek->next=NULL;
	eklenecek->prev=NULL
	if(start==NULL){
	start=eklenecek;
	}

	else{
		temp=start;
		while{temp->next->data!=onune}{
		
		temp=temp->next;	
		}
		onceki=temp;
		sonraki=temp->next;
		onceki->next=eklenecek;
		eklenecek->prev=onceki;
		eklenecek->next=sonraki;
		sonraki->prev=eklencek;
		
		
		
		
		
		
	}
	
	
}





int main(){
	
	
}

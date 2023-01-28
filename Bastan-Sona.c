#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node*next;
};
struct node*start;
struct node*temp;

void sonaEkle(int veri){
	
	struct node*sonaeklenecek=malloc(sizeof(struct node));
	sonaeklenecek->data=veri;
	sonaeklenecek->next=NULL;
	
	if(start==NULL){
		
		start=sonaeklenecek;
		
	}
	else{
		
		temp=start;
		while(temp->next!=NULL){
			
			temp=temp->next;
			
		}
		temp->next=sonaeklenecek;
		
		
		
	}
	
	
	
	
	
}

void basagelecek(int basa){
	struct node*basagel=malloc(sizeof(struct node));
	basagel->data=basa;
	basagel->next=start;
	start=basagel;
	
	
	
}

void arayaEkle(int hangiSayininOnune, int hangiSayi){
	
	
	struct node*arayaeklenecek=malloc(sizeof(struct node));
	arayaeklenecek->data=hangiSayi;

temp=start;
while(temp->next->data!=hangiSayininOnune){
	temp=temp->next;
}
	struct node*onune=malloc(sizeof(struct node));
	onune=temp->next;
	temp->next=arayaeklenecek;
	arayaeklenecek->next=onune;
	
	
}

void sondanSil(){
	
	temp=start;
	
	while(temp->next->next!=NULL){
		temp=temp->next;
	}
	free(temp->next);
	temp->next=NULL;
	
}

void bastansil(){
	
	struct node* ikincieleman=NULL;
	ikincieleman=start->next;
	free(start);
	start=ikincieleman;
	
	
}

void aradanSil(int x){

if(start->data==x){
	bastansil();
}
else{
	struct node* oncekisayi=NULL;
	struct node* sonrakisayi=NULL;
	
	temp=start;
	
	while(temp->next->data!=x){
		temp=temp->next;
					
	}
	if(temp->next==NULL){
		sondanSil();
	}
	
	oncekisayi=temp;
	sonrakisayi=temp->next->next;
	free(temp->next);
	oncekisayi->next=sonrakisayi;
	
	
	
	
}	




}

void terscevir(){
	
	struct node*gecici;
	struct node*prev=NULL;
	
	temp=start;
	while(temp!=NULL){
		
		gecici=temp->next;
		temp->next=prev;
		prev=temp;
	
		temp=gecici;		
	}
		start=prev;
	
	
	
}




int main() {
	
	
	
	
	
	
	
	
	
	
	return 0;
}

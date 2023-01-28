#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node*next;
};
struct node*start=NULL;
struct node*temp=NULL;


void basaEkle(int basa){
	struct node*basaekle=(struct node*)malloc(sizeof(struct node*));
	basaekle->data=basa;
	if(start==NULL){
		start=basaekle;
	}
	else{
	basaekle->next=start;
	start=basaekle;
	}

}
void yazdir(){
	temp=start;
	while(temp->next!=NULL){
		printf("%d==>",temp->data);
		temp=temp->next;
		
	}
	printf("%d==>",temp->data);
	
}

int main(){
	while(1==1){
		int yaz;
		printf(" Bir sayi gir == ");
		scanf("%d",&yaz);
		basaEkle(yaz);
		yazdir();
	}
	
	return 0;
}

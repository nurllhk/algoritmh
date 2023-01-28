#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node* sonraki;
};




int main(){
	struct node*ilkdugum=(struct node*)malloc(sizeof(struct node));
	struct node*ikincidugum=(struct node*)malloc(sizeof(struct node));
	struct node*ucuncudugum=(struct node*)malloc(sizeof(struct node));
	ilkdugum->data=13;
	ikincidugum->data=15;
	ucuncudugum->data=17;
	ilkdugum->sonraki=ikincidugum;
	ikincidugum->sonraki=ucuncudugum;
	ucuncudugum->sonraki=NULL;
	
	printf("ilk deger : %d  ikinci deger : %d  ucuncu deger : %d",ilkdugum->data,ikincidugum->data,ucuncudugum->data);
	

	
	
	
	
}

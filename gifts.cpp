#include<stdio.h>
struct student{
	int no_of_gift;
	int arrt;
	int id;
}s[10];
void sort_arival(/*int n*/){
	struct student a;
	int min,pos;
	for(int i=0;i<10/*n*/;i++){
		min = s[i].arrt;
		pos = i;	
		for(int j=i+1;j<10/*n*/;j++){
			if(min>s[j].arrt){
				min = s[j].arrt;
				pos = j;
			}
		}
		if(i!=pos){
			a=s[i];
			s[i]=s[pos];
			s[pos]=a;
		}
	}
}
/*void sort_arival(int n){
	struct student a;
	int min,pos;
	for(int i=0;i<n;i++){
		min = s[i].arrt;
		pos = i;	
		for(int j=i+1;j<n;j++){
			if(min>s[j].arrt){
				min = s[j].arrt;
				pos = j;
			}
		}
		if(i!=pos){
			a=s[i];
			s[i]=s[pos];
			s[pos]=a;
		}
	}
}*/
int main(){
	/*int n;
	printf("Enter the no.of students:");
	scanf("%d",&n);
	struct student s[n];*/
	for(int i=0;i<10/*n*/;i++){
		s[i].id=i+1;
		printf("\nEnter the arrival time for s%d: ",i+1);
		scanf("%d",&s[i].arrt);
		printf("\nEnter the number of gift items for s%d: ",i+1);
		scanf("%d",&s[i].no_of_gift);
	}
	sort_arival(/*n*/);
	struct student m;
	int pos;
	for(int i=0;i<10/*n*/;i++){
		m = s[i];
		pos = i;
		for(int j=i+1;j<10/*n*/;j++){
			if(m.no_of_gift<s[j].no_of_gift){
				m = s[j];
				pos = j;
			}
		}
		s[pos]=s[i];
		s[i]=m;
		printf("\nBill turn for student s%d having %d items",s[i].id,s[i].no_of_gift);
	}
	
	return 0;
}

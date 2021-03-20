// CREATING A FILE

#include<stdio.h>
int main(){
	FILE *file;
	
	file=fopen("text.txt","w");
	
	if (file==NULL){
	
	
		printf("file doesn't exist'");}
		
	else{
	
	
		printf("file is opened");
		
		fclose(file);  // closing the file
		
		}
		
		
}

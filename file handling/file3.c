#include<stdio.h>
int main(){
	FILE *file;
	char name[20];
	
	file=fopen("text.txt","w");
	
	if (file==NULL){
	
	
		printf("file doesn't exist'");}
		
	else{
	
	
		printf("file is opened\n");
		printf("Enter your full name\n");
		gets(name);
		
		fputs(name,file);
		
		printf("File is written successfully");
		
		
		fclose(file);  // closing the file
		
		}
		
		
}

// WRITING INTO A FILE
// USING FPUTS()


#include<stdio.h>
int main(){
	FILE *file;
	char name[20];
	int age;
	
	file=fopen("text.txt","w");
	
	if (file==NULL){
	
	
		printf("file doesn't exist'");}
		
	else{
	
	
		printf("file is opened\n");
		printf("Enter your full name\n");
		gets(name);
		printf("Enter your age\n");
		scanf("%d",&age);
		
		//fprintf(filepointer,format specifier,variables) 
		
		fprintf(file,"Name=%s,Age=%d\n",name,age);
		
		
		
		printf("File is written successfully");
		
		
		fclose(file);  // closing the file
		
		}
		
		
}

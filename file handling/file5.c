#include<stdio.h>
int main(){
	FILE *file;
	char ch;
	
	file=fopen("text.txt","r");
	
	if (file==NULL){
	
	
		printf("file doesn't exist'");}
		
	else{
	
	
		printf("file is opened\n");
	
		while(!feof(file))
		{
			ch=fgetc(file);
			printf("%c",ch);
			
		}	
		fclose(file);  // closing the file
		}
			
}

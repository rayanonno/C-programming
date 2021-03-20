
// WRITING INTO A FILE


#include<stdio.h>
int main(){
	FILE *file;
	char name[20]="ANONNO SINGHA RAY";
	int length= strlen(name);
	int i;
	
	file=fopen("text.txt","w");
	
	if (file==NULL){
	
	
		printf("file doesn't exist'");
		
		}
		
	else{
	
	
		printf("file is opened\n");
		
		for(i=0;i<=length;i++)
		
	{
		fputc(name[i],file);
	}
		printf("file is written successfully");
		fclose(file);  // closing the file
		
		}
		
		
}

#include<stdio.h>
int main(){
FILE *file;
file = fopen("output.txt","r");
if(file == NULL){
printf("file does not exist");
}else{
printf("file exists\n");
fclose(file);
}
return 0;
}
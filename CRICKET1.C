#include<stdio.h>
int main(){
FILE *file;
char *lines[]={"chandrakanth patil","siet college","lingasugur"};
file=fopen("lines.txt","w");
if(file == NULL){
printf("error opening the file,\n");
return 1;
}
for(int i=0;i<3;i++){
fprintf(file,"%s\n",lines[i]);
}
fclose(file);
printf("lines written to file succesfully.\n");
return 0;
}
#include<stdio.h>
#include<string.h>
int main(){
int count=0;
char ch;
FILE* fp;
fp = fopen("abcd.txt","r");
// fprintf(fp,"x+y-z");
while((ch=fgetc(fp))!=EOF){
if(ch == '+'||ch == '-'||ch=='*'||ch=='/')
count++;
}
fclose(fp);
printf("no. of operator is :%d",count);
}

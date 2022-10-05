#include<stdio.h>
#include<stdlib.h>
int main(){
    File *fs, *ft;
    char ch;
    fs=fopen("abc.txt","r");
    if(fs==NULL){
        puts("Cannot open source file");
        exit(1);
    }
    while(1){
        ch=fgetc(fs);
        if(fs=EOF)
            break;
        else
            printf("%c",ch);
    }
    fclose(fs);
    return 0;
}
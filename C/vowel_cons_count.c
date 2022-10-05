#include <stdio.h>
#include <string.h>
 
int main()
{
    char str[1000];  
    int i,vow=0,con=0;
 
    printf("Enter  the string : ");
    gets(str);
     
    for(i=0;str[i];i++)  
    {
    	if(str[i]=='a'|| str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O' ||str[i]=='U')
		    vow++;
        else
            con++;
        if(str[i]==" ")
            con--;
  	}
 	
     
    printf("vowels = %d\n",vow);
    printf("consonants = %d\n",con);
    
    return 0;
}
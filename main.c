#include"my_mat.h"
#include<stdio.h>
#include <string.h>
#include <string.h>
#define TXT 256
#define WORD 30
int main()//uy
{
char line[TXT];

printf("Gematria Sequences: ");
//char word [WORD];
char s[256] ;
char s1[256];
char buf[40][256];
int countgimel[WORD];
int countgimel1[WORD];
int i=0;
     
while (fgets(line, sizeof(line), stdin)) {
strcat(s,line);
 
 strcpy(&buf[i][0],line);
  //int len=strnlen(line);
  i++;
  //
}
strcat(s1,buf[0]);
 int j;
for (j = 0; s1[j] != '\0'; j++){

};
    
j--;
int t1=0;
for (t1 = 0; s[t1] != '~'; t1++){

};
t1-=3; 
int ld1=(int)gem(s1,j);
//printf("%s",s1);
//printf("%ld%s",strlen(buf[0][0]) ,buf[0]);
int t=0;
for (t = 0; t<j; t++){
    if(s1[t]>64 && s1[t]<91 ){
   countgimel[t]=s1[t];
    }
    
    
    if(s1[t]>96 && s1[t]<123 ){
   countgimel[t]=s1[t];
    }
    
};
int t2=0;
for (t2 = 0; t2<j; t2++){
    if(s1[t2]>64 && s1[t2]<91 ){
   countgimel1[t2]=('Z'+'A')-s1[t2];
    }
    
    
    if(s1[t2]>96 && s1[t2]<123 ){
   countgimel1[t2]=('z'+'a')-s1[t2];;
    }
    
};  
    
//for ( int y = 0; y<j; y++){
//printf("%c ",(char)countgimel1[y]);
//};

findSub(s+(j+1),t1,ld1);
printf("\n");
printf("Atbash Sequences: ");
findgim1(s+(j+1),t1,countgimel1,j);
printf("\n");
printf("Anagram Sequences: ");
findgim(s+(j+1),t1,countgimel,j);
//printf("%d",ld1);
//char words[WORD];
//getWord(line,words);
//char a[]="a-bc,dbca-zwxyzabzyxw0dcba";
//int len;
//len = strlen(a);
//printf("%d ", len);
//findSub(a,len,10);

return 0;
}
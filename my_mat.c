#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "my_mat.h"
#include <ctype.h>
int gem(char c[],int n){
   int co=0;
   for (int j = 0; j < n; j++)
        {
         //printf("%d ",(c[j]-96));
          if(c[j]>96 && c[j]<123){
          co+=(c[j]-96);
        } 
          if(c[j]>64 && c[j]<91){
          co+=(c[j]-64);
        } 
        }
    return co;
}
void print(char nums[], int i, int j)
{
    
    for (int k = i; k <= j; k++) {
        printf("%c", nums[k]);
    }
    
}

void findgim(char nums[], int n, int arr[],int j1)
{
     //printf("%d %d",n,j1);
    int count=0;
    for (int i = 0; i < n ; i++)//&& strcmp(&nums[i],"~")
    {
        
 
        // consider all subarrays starting from `i` and ending at `j`
        for (int j = i; j < n  ; j++)
        {
          int flag2=1; 
        //printf("%c %d ",nums[j],sum_so_far);
          for (int h = i; h < j+1  ; h++)
         {
            int sum_so_far = 0; 
            for (int m = 0; m < j1  ; m++)
           {
            if(nums[h]>64 && nums[h]<91 && nums[h]==(char)arr[m] ){
               // printf("%d %d",sum_so_far,j1);
                sum_so_far =1;
             break;
            }
           
            if(nums[h]>96 && nums[h]<123 && nums[h]==(char)arr[m]){
              
            
              sum_so_far = 1;
            
            break;
            }
            
            if(nums[h]==" " ){
                
            break;
            }
        }
            if(sum_so_far==0){
                flag2=0;
                break;
            }
        }  
         //printf("%d ",sum_so_far);
         // if the sum so far is equal to the given sum
            if (flag2 == 1 && isalpha(nums[i]) && isalpha(nums[j]) && (j-i)>=j1-1) {
               if(count>0){
               printf("~");
               };
                count++;
                print(nums, i, j);
             
            }
        }    
    }
}        
            
            
           
            
            
 
           

void findSub(char nums[], int n, int target)
{
    int count=0;
    for (int i = 0; i < n ; i++)//&& strcmp(&nums[i],"~")
    {
        int sum_so_far = 0;
 
        // consider all subarrays starting from `i` and ending at `j`
        for (int j = i; j < n  ; j++)
        {
            
            if(nums[j]>64 && nums[j]<91 ){
                sum_so_far += (nums[j]-64);
            }
            
            
            
            if(nums[j]>96 && nums[j]<123){

              sum_so_far += (nums[j]-96);
            }
            
            
 
            // if the sum so far is equal to the given sum
            if (sum_so_far == target && isalpha(nums[i]) && isalpha(nums[j]) ) {
               if(count>0){
               printf("~");
               };
                count++;
                print(nums, i, j);
             
            }
        }
    }
}


int getWord(char *str,char w[]){
    
    int size=0;
 
for(int i=0; *(str+i)!=' '&&*(str+i)!='\n'&& *(str+i)!='\t'; i++){
    w[i]=*(str+i);
    size++;
}
return size;
}

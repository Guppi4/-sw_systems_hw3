#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "my_mat.h"
#include <ctype.h>
int gem(char c[],int n){
   int co=0;
   for (int j = 0; j < n; j++)
        {
          co+=(c[j]-96);
        } 

    return co;
}
void print(char nums[], int i, int j)
{
    
    for (int k = i; k <= j; k++) {
        printf("%c", nums[k]);
    }
    
}
void findSub(char nums[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        int sum_so_far = 0;
 
        // consider all subarrays starting from `i` and ending at `j`
        for (int j = i; j < n; j++)
        {
            
            if(nums[j]>64 && nums[j]<91 ){
                sum_so_far += (nums[j]-64);
            }
            
            
            
            if(nums[j]>96 && nums[j]<123){

              sum_so_far += (nums[j]-96);
            }
            
            
 
            // if the sum so far is equal to the given sum
            if (sum_so_far == target && isalpha(nums[i]) && isalpha(nums[j]) ) {
               
                print(nums, i, j);
             printf("~");
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

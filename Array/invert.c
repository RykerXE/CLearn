//To invert the given String
//Note: in char, space is treated as charachter so give a space before using %c 

#include<stdio.h>
int main(){
    char arr1[10],arr2[10]={0,0,0,0,0,0,0,0,0};
    char i,j=0,temp;
    int n;
    printf("Enter the length of the word:");
    scanf("%d",&n);
    printf("Enter the word: \n");
    for(i=0;i<n;i++){
        scanf(" %c",&arr1[i]);
    
    }
    
    for (i=n;i>=0;i--){
        while(j>=0){
            arr2[j]=arr1[i-1];
            j++;
            break;
        }
    }
         printf("The reversed word is : ");
         for(j=0;j<n;j++){
          printf(" %c",arr2[j]);
         }

         return 0;
    
    
}


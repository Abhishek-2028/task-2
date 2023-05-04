
#include <stdio.h>

int main() {

int n;

printf("Please enter your lucky number: \n");


scanf("%d",&n);

printf("your number is %d",n);

for( int i=0;i<=n;i++){
        int k=49;
        for(int j=0;j<=(n*2)-1;j++){
                if( j>= (n+1)-i && j<=(n-1)+i){
                    printf("%c",k);
                    j<=n?k=k+2:k++;
                    if(j==n){
                        k=65;
                    }
                }
                else{
                    printf(" ");
                }
        }
        printf("\n");
       }
    
    for( int i=2;i<=n;i++){
        int k=49;
        for(int j=2;j<=(n*2)-1;j++){
            if(j>=i && j<=(n*2)-i){
                     printf("%c",k);
                    j<=n?k=k+2:k++;
                    if(j==n){
                        k=65;
                    }
            }
                else{
                    printf(" ");
                }
        }
        
        printf("\n");
       }
   

    return 0;
}
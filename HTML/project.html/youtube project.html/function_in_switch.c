#include<stdio.h>
int evenorodd();
int nagativeorposative();
int main(){
    int n , x; 
    char ch;
    do
    {      
    printf("Enter the number which you want to cheak  : \n");
    scanf("%d",&n);
    printf("press 1 for cheak the number is even or odd  \n");
	printf("press 2 for cheak the number is nagative or posative  \n");
	printf("Enter your choice \n");
	scanf("%d",&x);
    switch(x){
        //find the number is even or odd
            case 1:
                evenorodd(n);
            break ;
            //find the number is nagative or posative
             case 2:
             nagativeorposative(n);
            break ;
            default:
			printf("worng choice\n");
    }
    printf("\n Do you want continue (y/n) ? ");
	fflush(stdin);
	scanf("%c",&ch);
        } while (ch=='y'||ch=='Y');
    return 0;
}
int evenorodd(int v){
     if(v%2==0){
                printf("The number is even\n");
            }else
            {
                printf("The number is odd \n");
            }
}
int nagativeorposative(int z){
     if(z>=0){
                printf("The number is posative\n");
            }else
            {
                printf("The number is nagative \n");
            }
}
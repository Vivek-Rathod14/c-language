#include <stdio.h>

int main()
 {
    int num,rev =0,r;

   
    printf("Enter any Number : ");
    scanf("%d", &num);

    while (num!=0)
   {
        r=num%10; 
        rev= rev*10+ r; 
        num /= 10; 
    }

    printf("___________________\n");
    printf("\n1Rev Number: %d\n", rev);
    printf("___________________");
   
}


#include <stdio.h>

main()
 {
    char ch;

    
    printf("Enter an char : ");
    scanf("%c",&ch);

    
    if (ch>='a'&&ch<='z'|| ch>='A'&&ch<='Z') 
	{
       
        if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u' ||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') 
            
			
            printf("%c is a vowel",ch);
         
		
		else 
		
            printf("%c is a consonant",ch);
        
    

}
}


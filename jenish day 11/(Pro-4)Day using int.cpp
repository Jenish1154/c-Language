#include<stdio.h>

int main()
{
    char d_n;
    printf("\n Enter Day : ");
    scanf("%d",&d_n);
    
    switch(d_n)
    {
        case 1: printf("\n monday");
                break;
                
        case 2: printf("\n Tuesday");
                break;
                
        case 3: printf("\n Wednesday");
                break;
                
        case 4: printf("\n Thursday");
                break;
                
        case 5: printf("\n friday");
                break;
                
		case 6: printf("\n Saturday");
                break;
        
		case 7: printf("\n Sunday");
                break;
                
        default : printf("\n The input you entered is invalid !\nplease think twise before entering a value"); 
    }

return 0;

}


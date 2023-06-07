#include<stdio.h>

int main()
{
    char day;
    printf("\n Enter Day : ");
    scanf("%c",&day);
    
    switch(day)
    {
        case 'M': printf("\n Monday");
                break;
                
        case 'T': printf("\n Tuesday");
                break;
                
        case 'W': printf("\n Wednesday");
                break;
                
        case 'H': printf("\n Thursday");
                break;
                
        case 'F': printf("\n friday");
                break;
                
		case 'S': printf("\n Saturday");
                break;
        
		case 'U': printf("\n Sunday");
                break;
                
        default : printf("\n The number you entered is invalid !"); 
    }

return 0;

}


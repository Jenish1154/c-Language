#include<stdio.h>

int main()
{
    char month;
    printf("\n Enter value : ");
    scanf("%c",&month);
    
    switch(month)
    {
        case 'A': printf("\n January");
                break;
                
        case 'F': printf("\n February");
                break;
                
        case 'M': printf("\n March");
                break;
                
        case 'P': printf("\n April");
                break;
                
        case 'Y': printf("\n May");
                break;
                
		case 'J': printf("\n June");
                break;
        
		case 'U': printf("\n July");
                break;
        
		case 'G': printf("\n August");
                break;
        
		case 'S': printf("\n September");
                break;
                
		case 'O': printf("\n October");
                break;
        
		case 'N': printf("\n November");
                break;
        
		case 'D': printf("\n December");
                break;
                
        default : printf("\n The number you entered is invalid !\nplease think twise before entering a value"); 
    }

return 0;

}


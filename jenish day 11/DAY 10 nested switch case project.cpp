#include<stdio.h>

int main()
{
    int a,b,c;
    
    printf("1.international\n");
    printf("2.domestic\n");
    
    printf("\nEnter your choise : ");
	scanf("%d",&a);
    
    switch(a)
    {
        case 1
		      : printf("\n1.europe trip=76,000 inr for 7 days 8 nights\n\n");
                printf("2.dubai trip= 60,000 inr for 6 days 7 nights\n");
    
                printf("\nEnter your choise : ");
	            scanf("%d",&b);
                
        switch (b)
        {
        	case 1 : printf("\n\nthanks for booking your europe trip from us, for more details of for your confirmation visit our website ");
        	break;
        	      
            case 2 : printf("\n\nthanks for booking your dubai trip from us, for more details visit our website for your confirmation ");
            break;
            
        	default :  printf("\n\tinvalid! input from you,\n\tplease think twise before entering a value");
        	
        }
            break;
	
		case 2
		      :  printf("\n1.north india trip = 36,000 inr for 7 days 8 nights visiting ancient temple and monumnets\n\n");
                printf("2.goa = 17,000 inr for 6 days 7 nights visiting beaches and attending a music concert\n");
    
                printf("\nEnter your choise : ");
	            scanf("%d",&c);
                
                switch(c)  
                {
        	    case 1 : printf("\n\nthanks for booking your northen indan tour from us, for more details visit our website for your confirmation or contact 1800 888 9799");
        	    break;
        	      
                case 2 : printf("\n\nthanks for booking your goa trip from us, for more details visit our website for your confirmation or contact 1800 888 9799");
                break;
        
        	    default: printf("\n\tinvalid! input from you,\n\tplease think twise before entering a value");
				       	
		        }
		    break;
                
        default :  printf("\n\tinvalid! input from you,\n\tplease think twise before entering a value");
    }

return 0;

}


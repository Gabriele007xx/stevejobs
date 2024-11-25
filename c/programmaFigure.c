#include <stdio.h>

int main()
{
    int lato, i,j,scelta;
    
    printf("1) disegna un quadrato pieno\n");
    printf("2) disegna un quadrato vuoto\n");
    printf("3) disegna un triangolo rettangolo pieno\n");
    printf("4) disegna un quadrato semipieno (tipo bicchiere)\n\n");
    prinf("Inserire scelta: ");
    scanf("%d", &scelta);
    
    switch(scelta)
    {
        case 1:
        printf("\nDammi il lato: ");
	    scanf("%d", &lato);
	    for(i=0;i<lato;i++)
	    {
		    for(j=0;j<lato;j++)
		    {
			    printf("*");	
		    }
		    printf("\n");
	    }       
        break;
        case 2:
        printf("\nDammi il lato: ");
	    scanf("%d", &lato);
        for(i=0;i<lato;i++)
	    {
		    if(i==0 || i==lato-1)
		    {
			    for(j=0;j<lato;j++)
			    {
				    printf("*");	
			    }
		    }
		    else
		    {
			    for(j=0;j<lato;j++)
			    {
				    if(j==0 || j==lato-1)
				    {
					    printf("*");	
				    }
				    else
				    {   
					    printf(" ");
				    }	
			    }
		    }
		
		    printf("\n");
	    }
        break;
        case 3:
        printf("\nDammi il lato: ");
	    scanf("%d", &lato);
	    for(i=0;i<lato;i++)
	    {
		    for(j=0;j<i;j++)
		    {
			    printf("*");	
		    }
		    printf("\n");
	    }
        break;
        case 4:
        printf("\nDammi il lato: ");
	    scanf("%d", &lato);
        for(i=0;i<lato;i++)
	    {
		    if(i==0 || i==lato-1 || i>=lato/2)
		    {
			    for(j=0;j<lato;j++)
			    {
				    printf("*");	
			    }
		    }
            else
            {
                for(j=0;j<lato;j++)
			    {
				    if( && (j==0 || j==lato-1))
				    {
					    printf("*");	
				    }
				    else
				    {   
					    printf(" ");
				    }	
			    }
            }
			    
		   }
		
		    printf("\n");
	    }
        break;
        default:
        printf("\nScelta sbagliata");
               
    }
    return 0;
    
}

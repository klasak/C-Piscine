// calculates the number of blocks you see (j)

#include <stdio.h>

int main()
{
    int i,j;
    int ptr[]={2, 4, 3, 1};
    
     
    i=0;
    j=1;
    
    while (i<4)
    {
        if(ptr[i]<ptr[i+1])
        {
            j++;
            i++;
        }
        else
        {
            if (ptr[i]<ptr[i+2] && i<=1)
            {
                j++;
                i+=2;
            }
            else if (ptr[i]<ptr[i+3] && i==0)
            {
                j++;
                i+=3;
                
            }
            else break;
        }
        
    }
        
    
   printf("%d", j);
    
    
    return (0);
}

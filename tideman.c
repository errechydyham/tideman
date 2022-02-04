#include <stdio.h>

int main(void)
{
    //get the num of voters 
    int n; 
    printf("Number of voters: "); 
    scanf("%i", &n); 

    //make the voters vote
    char memebers[1024];  
    for(int x=0; x<n; x++)
    {
        for(int j=1; j<=3; j++)
        {     
            char t[1024]; 
            printf("Rank %i:", j);
            scanf("%s", t);
            strcat(memebers, t); 
        }
        printf("\n");
    }

    //check the memebers
    /*
    ...
    */ 
}
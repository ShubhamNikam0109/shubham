#include<stdio.h>
int main()
{
    int ivalue1 = 0, ivalue = 0;
    printf("Enter number : ");
    scanf("%d%d",&ivalue1,&ivalue);
    rangeprint(ivalue1,ivalue);
    return 0;
}

void rangeprint(int istart, int iend)
{
    int icnt = 0;
    BOOL Bret = FALSE;
    if((istart < 0)||(iend < 0)||(istart > iend))
    {
        return ;
    }
    for(icnt = istart ; icnt<=iend; icnt++)
    {
        Bret = checkprime(icnt);
        if(Bret = TRUE)
        {
            printf("%d",icnt);
        }
    }
}
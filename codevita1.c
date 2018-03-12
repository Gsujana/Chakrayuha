#include<stdio.h>
int count=1,n,k=1,row=0,column=0,rpt=1,change=1,a[100][100];

repeat()
{
        if(rpt==1)
            return;
        else
            column++;
}
display()
{
    for(row=0;row<n;row++)
    {
        for(column=0;column<n;column++)
        {
            printf("%d\t",a[row][column]);
        }
        printf("\n");
    }
}
print()
{
    a[row][column]=k;
    k++;
}
power()
{
    int count=1,i=0,j=0,pp=0;
    printf("(0,0)");

    while(pp<(n*n))
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if((a[i][j]%11)==0)
                {
                    printf("(%d,%d)",i,j);
                    count=count++;

                }
            }
        }
        pp=n*n;

    }
}

main()
{
    int min,max;
    scanf("%d",&n);
    min=0;max=n-1;
    a[0][0]=1;
    while(a[row][column]<(n*n))
    {
        if(change%2!=0)
        {
            if(change==1)
            {
                repeat();
                while(column<=max)
                {
                    print();
                    column++;
                }
                column--;
                change=2;
            }
            else
            {
                column=column-1;
                while(column>=min)
                {
                    print();
                    column--;
                }
                column++;
                min=min+1;
                change=4;
            }
        }
        else
        {
            if(change==2)
            {
                row++;
                while(row<=max)
                {
                    print();
                    row++;
                }
                row--;
                change=3;
            }
            else
            {
                row--;
                while(row>=min)
                {
                    print();
                    row--;
                }
                row++;
                rpt++;
                change=1;
                max--;
            }
        }
    }
    display();
    power();
}











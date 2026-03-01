#include<stdio.h>
#include<stdlib.h>

int main()
{
    printf("pattern printing first (1)\n");
    int i,j;
    for (i=0;i<5;i++)                      // *****
    {for(j=0;j<5;j++)                      // *****
    {printf("*");                          // *****
    }                                      // *****
    printf("\n");                          // ***** 
    }
    
    printf("pattern printing (2)\n");       //*****
    for(i=0;i<5;i++)                        //****
    {for(j=i;j<5;j++)                       //***
    {printf("*");                           //**
    }                                       //*
    printf("\n");}
     printf("third pattern(3)\n");
     for(i=0;i<5;i++)
     {for(j=i;j>=0;j--)
     {printf("*");}
     printf("\n");}
     
     printf("fouth pattern (4);\n" );
     for(i=0;i<5;i++)
     {for(j=0;j<5;j++)
     {if(((i+j)==4)||(i==j))
     {printf("* ");}
     else
     {printf("  ");}}
     
     printf("\n");}
     
printf("pattern fifth(5);\n");
        for(i=0;i<5;i++)
        {for(j=0;j<5;j++)
        {if(i<=j)
        printf("*");
        else
        printf(" ");
        }printf("\n");}
printf("pattern sixth(6)\n"  );
     for(i=0;i<5;i++)
     {for(j=0;j<5;j++)
    { if((i+j)>=4)
     printf("*");
     else
     printf(" ");}
     printf(" \n");  } 






      return 0;
}
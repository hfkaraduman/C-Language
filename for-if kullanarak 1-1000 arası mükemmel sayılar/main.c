
#include<conio.h>
#include<stdio.h>

main(){
      int tp=0;
      int i,j;
      
      for(i=1;i<=1000;i++)
      {
         tp=0;
                         
         for(j=1;j<i;j++)
         {
             if(i%j==0)
             {
                tp = tp + j;         
             }       
         }     
         
         if(tp==i)
         {
            printf("%d sayisi mukemmel sayidir.\n",i);        
         }   
      }       
      
      getch();
}

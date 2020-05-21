#include<iostream.h>
using namespace std;
#include<conio.h>
int main()
 {
          int nop,nof,page[20],i,count=0;
          cout<<"\n\tEnter the No. of Pages:";
          cin>>nop; 
         cout<<"\n\t Enter the Reference String:";
          for(i=0;i<nop;i++)
          {
          cout<<"\t";
          cin>>page[i]; 
          }
          cout<<"\n\t Enter the No of frames:-";
          cin>>nof;
          int frame[nof],fcount[nof];
          for(i=0;i<nof;i++)
          {
          frame[i]=-1; 
         fcount[i]=0; 
          }
          i=0;
          while(i<nop)
          {
            int j=0,flag=0;
            while(j<nof)
            {
               if(page[i]==frame[j])
	    { 
               flag=1;
               fcount[j]=i+1;
               }
               j++;
            }   
            j=0;  
            cout<<“\n\t**************************************\n”;
cout<<"\t"<<page[i]<<"-->";   
 if(flag==0)
            {
             int min=0,k=0;
              while(k<nof-1)
                {
                   if(fcount[min]>fcount[k+1]) 
                  min=k+1;
                  k++;
                }
               frame[min]=page[i]; 
               fcount[min]=i+1;    
               count++;           
            while(j<nof)
            {
               cout<<"\t|"<<frame[j]<<"|";
               j++;
            }
             }
           i++; 
          }
          cout<<"\n\t**************************************\n";
          cout<<"\n\tPage Fault is:"<<count;
          getch();
          return 0;
}       

#include <iostream>
#include <cstring>
#include <string>
using namespace std;
void MaHoa(char a[5][5], char *data)
{
	int kt=74,	checkgiong=0,checkhang=0,checkcot=0;
    string kq="Ban Ma :";
 
     
     
     
   for(int i=0;i<strlen(data);i=i+2)
   {
     checkgiong=0;
   	 if((int)data[i]==74)
    	{
    		data[i]='I';
   		
	    }
	 if((int)data[i +1]==74)
    	{
    		data[i+1]='I';
	    }
   	//giong nhau
     if((int)data[i]==(int)data[i+1])
	    {
	 	kq=kq+data[i]+"X";
	 	checkgiong=1;		 	 
	    } 	 	 
	   // cung mot hang
	    for(int j=0;j<5;j++)
	   {	  
	      int check=0;
	      int hang1,hang2,cot1,cot2;
	      for(int k=0;k<5;k++)
	      {
	    	if((int)data[i]==(int)a[j][k]&&checkgiong==0)
	    	{
	    		check++;
	    		hang1=j;
	    		cot1=k;	    									    		
			}
			if((int)data[i+1]==(int)a[j][k]	&&checkgiong==0)
	    	{
	    		check++;
	    		hang2=j;
	    		cot2=k;	    			
			}	          
	      }
		   if(check==2)
		   {		   
		      kq=kq+a[hang1][(cot1+1)%5]+a[hang2][(cot2+1)%5];
		      checkhang=1;
		   }  
	    }
	    
	    
	    
	   // cung m ô t côt 	    
	    for(int j=0;j<5;j++)
	   {	  
	      int check=0;
	      int hang1,hang2,cot1,cot2;
	      for(int k=0;k<5;k++)
	      {
	    	if((int)data[i]==(int)a[k][j]&&checkgiong==0)
	    	{
	    		check++;
	    		hang1=k;
	    		cot1=j;	    								    		
			}
			if((int)data[i+1]==(int)a[k][j]	&&checkgiong==0)
	    	{
	    		check++;
	    		hang2=k;
	    		cot2=j;	    			
			}	      
		
	      }
	    
		   if(check==2)
		   {		     	   
		      kq=kq+a[(hang1+1)%5][cot1]+a[(hang2+1)%5][cot2];
		      checkcot=1;
		   }  
	    }
	    //khong cung hang ko cung cot ko giong
	    if(checkgiong==0&&checkhang==0&&checkcot==0)
	    {
		
	    int hang11,hang22,cot11,cot22,check1=0;	      
    	for(int j=0;j<5;j++)
	     {	  	      	     
	      for(int k=0;k<5;k++)
	      {
	    	if((int)data[i]==(int)a[j][k]&&checkgiong==0)
	    	{	check1++;
	    		hang11=j;
	    		cot11=k;	  
											    		
			}
			if((int)data[i+1]==(int)a[j][k]	&&checkgiong==0)
	    	{	
			    check1++;	
	    		hang22=j;
	    		cot22=k;	  				  			
			}	          
	      }		       		 		    
	      }
	      kq=kq+a[hang11][cot22]+a[hang22][cot11];
      }
	    	   	    		 	   	   				 
	}		             
  cout<<kq;    
}

      
   
	

int main()
{
	char a[5][5];
	char data[1000000],key[26];
   int luachon,d=0,chu=65;
   bool kt=true;
   cout<<"nhap chuoi: ";
   cin>>data;
   cout<<"Nhap key  :";
   cin>>key;
   //chuyen sang chu in hoa
   for(int i=0;i<=strlen(data);i++){
      if(data[i]>=97&&data[i]<=122)
         data[i]=data[i]-32;
   }
    for(int i=0;i<=strlen(key);i++){
      if(key[i]>=97&&key[i]<=122)
         key[i]=key[i]-32;
   }
  //nhap du lieu cho bang
   for(int i=0;i<5;i++)
     for(int j=0;j<5;j++)
     {
     	
     	if(strlen(key)-1>=d)
     	 {		 
     	    a[i][j]=key[d];    	   
     	    d++;
         }
        else
          {
          //key:cbeato
          	for(int k=0;k<=strlen(key);k++)
          	{
          		if(chu == (int)key[k])
          		{
          			  //kt=false;
					  chu++;
					  k=-1;								 									 		      			
				}				
		    }
		    
		    if(chu!=73)
		     {					 	 
		     a[i][j]=(char)chu;
		     chu++;
		     }
			else
			 {					  			   		   	
		         a[i][j]='I' ;
		         chu=chu+2;  		       
		     }		    
		 }		     	
	 }
	 cout<<"Ma Tra Khoa \n";
	for(int i=0;i<5;i++)
	{
	
     for(int j=0;j<5;j++)
     {
     	cout<<"\t"<<a[i][j];
	 }
	 cout<<"\n";	 
    }
    //kiem tra neu mang du lieu la so le thi them X
    if(strlen(data)%2==1)
    {
    	int sum=strlen(data);
    	data[sum]='X';
	}
   MaHoa(a,data);
     
	 
	
	
}

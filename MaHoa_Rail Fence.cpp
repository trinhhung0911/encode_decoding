#include <iostream>
#include <cstring>
#include <string>
using namespace std;
void MaHoa(int k,char *data)
{
	string kq=" Ban Ma :";
	int n=k,m,d=0;
	
	if(strlen(data)%k==0)
	{
		m=strlen(data)/k;		
	}
	else
	{
			m=strlen(data)/k+1;
	}	
	char a[n][m];
	for(int i=0;i<m;i++)
	  for(int j=0;j<n;j++)
	  {
	  	a[j][i]=data[d];
	  	d++;	  	
	  }
	 
	
	  
	  
	for(int i=0;i<n;i++)
	{		  
	    for(int j=0;j<m;j++)
	   {
	  	cout<<" "<<a[i][j];
	   }
	  cout<<"\n";
    }
    
    
    for(int i=0;i<n;i++)
	  {		  
	    for(int j=0;j<m;j++)
	   {
	  	kq=kq+a[i][j];
	   }
     }
       cout<<kq;
    
	 
	  
	
}
void GiaiMa(int k,char *data)
{
		string kq=" Ban Goc :";
	int n=k,m,d=0;
	if(strlen(data)%k==0)
	{
		m=strlen(data)/k;		
	}
	else
	{
			m=strlen(data)/k+1;
	}	
	
	char a[n][m];
	for(int i=0;i<n;i++)
	  for(int j=0;j<m;j++)
	  {
	  	a[i][j]=data[d];
	  	d++;	  	
	  }
	  
	for(int i=0;i<n;i++)
	 {		  
	    for(int j=0;j<m;j++)
	   {
	  	cout<<" "<<a[i][j];
	   }
	  cout<<"\n";
    }
	  
	  
	for(int i=0;i<m;i++)
	  {		  
	    for(int j=0;j<n;j++)
	   {
	  	kq=kq+a[j][i];
	   }
     }
       cout<<kq;
   }
	  
	  
	
	
	


int main()
{
    char data[1000000];
   int i,k,luachon;
   cout<<"nhap chuoi: ";
   cin>>data;
   cout<<"Nhap k:";
   cin>>k;
   
   //chuyen sang chu in hoa
   for(i=0;i<=strlen(data);i++){
      if(data[i]>=97&&data[i]<=122)
         data[i]=data[i]-32;
   }
   cout<<"1.Ma Hoa";
   cout<<"\n2.Gia Ma";
   cout<<"\nNhap lua chon: ";
   cin>>luachon;
   switch(luachon)
   {
   	case 1:
   		 MaHoa(k,data);
   		 break;
   	case 2:
   		  GiaiMa(k,data);
   		  break;
   		
   }
}

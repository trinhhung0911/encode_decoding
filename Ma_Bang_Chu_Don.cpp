#include <iostream>
#include <cstring>
#include <string>
using namespace std;
void MaHoa(char *key, char *data)
{
	string kq=" ";
	                 
	char khung[26] ={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	    
    for(int i=0;i<strlen(data);i++)
      for(int j=0;j<strlen(khung);++j)
    {
    	if(int(data[i])==(int)(khung[j]))
    	{   	
    		kq=kq+key[j];  		
    	}   	
	}
	cout<<"\nBan Ma :"<<kq;	
}
void GiaiMa(char *key,char *data)
{
		
	string kq=" ";		        	
		char khung[26] ={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};				   		   		  		   
	for(int i=0;i<strlen(data);i++)
      for(int j=0;j<strlen(key);++j)
    {
    	if(int(data[i])==(int)(key[j]))
    	{   	
    		kq=kq+khung[j];  		
    	}
    	
	}
		cout<<"\nBan goc:"<<kq;	
}
int main()
{
	 char data[1000000],key[1000000];
	 int luachon;
	cout<<"Nhap chuoi :";
	cin>>data;
	cout<<"\nNhap Key :";
	cin>>key;
	cout<<"1.Ma Hoa";
    cout<<"\n2.Gia Ma";
	
	 //chuyen sang chu in hoa
   for(int i=0;i<=strlen(data);i++){
      if(data[i]>=97&&data[i]<=122)
         data[i]=data[i]-32;
   }
   for(int i=0;i<=strlen(key);i++){
      if(key[i]>=97&&key[i]<=122)
         key[i]=key[i]-32;
   }
   cout<<"\nNhap lua chon: ";
   cin>>luachon;
   switch(luachon)
   {
   	case 1:
   		MaHoa(key,data);
   		 break;
   	case 2:
   		 GiaiMa(key,data);
   		  break;
   		  default :
   		  	cout<<" Lua chon ko dung";
   		  	break;
   		
   }
   	
	
}

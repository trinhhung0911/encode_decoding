#include <iostream>
#include <cstring>
#include <string>
using namespace std;
void MaHoa(char *key, char *data)
{
	int p[strlen(data)];
	int k[strlen(key)];
	int c[strlen(data)];
	
	string kq=" ";
	for(int i=0;i<strlen(data);i++)
	{
		 p[i]=data[i]-65;			
	}	
    for(int i=0;i<strlen(key);i++)
	{
		 k[i]=key[i]-65;				
	}
	
	for(int i=0;i<strlen(data);i++)
	{						
	  	c[i]=(p[i]+k[i])%26;		   	  	   
	}
	for(int i=0;i<strlen(data);i++)
	{		
		c[i]=c[i]+65;
		kq=kq+(char)c[i];
	}
	cout<<"\nBan Ma :"<<kq;	  		
}
/*void  GiaiMa(char *key, char *data)
{
	for(int i=0;i<strlen(key);i++)
	{
		  // k[i]=key[i]-65;	
		  cout<<" "<<key[i];			
	}
	
    int p[strlen(data)];
	int k[strlen(key)];
	int c[strlen(data)];
	string kq=" ";	
	//cout<<"c\n";
	for(int i=0;i<strlen(data);i++)
	{
		 c[i]=data[i]-65;
		 //cout<<" "<<c[i];
	}
	//cout<<"\nk\n";
   for(int i=0;i<strlen(key);i++)
	{
		 k[i]=key[i]-65;	
		  //cout<<" "<<k[i];			
	}	
	//cout<<"\np\n";	
	for(int i=0;i<strlen(data);i++)
	{
		int l=(c[i]-k[i]);
		if(l<0)
		{
	       p[i]=26-(-l%26);
		}
		else
		{
		  p[i]=(c[i]-k[i])%26;
		}
		//cout<<"  "<<p[i];					
	}
	for(int i=0;i<strlen(data);i++)
	{
		 p[i]=p[i]+65;
		 kq=kq+(char)p[i];
	}
	cout<<"\nBan Goc :"<<kq;
}*/	
int main()
{
	char data[1000000],key[1000000];
	 int luachon;
	cout<<"Nhap chuoi :";
	cin>>data;
	cout<<"\nNhap Key :";
	cin>>key;
	cout<<"1.Ma Hoa";
   // cout<<"\n2.Gia Ma";
	
	 //chuyen sang chu in hoa
   for(int i=0;i<=strlen(data);i++){
      if(data[i]>=97&&data[i]<=122)
         data[i]=data[i]-32;
   }
   for(int i=0;i<=strlen(key);i++){
      if(key[i]>=97&&key[i]<=122)
         key[i]=key[i]-32;
   }

   //nho hon thi them vao chuoi khoa
   if(strlen(data)>strlen(key))
   {  
   int l=strlen(key);
   	 for(int i=strlen(key);i<strlen(data);i++)
   	 {
   	 	key[i]=data[i-l];   	 	  	 	 	 	
	 }  
   }
 
 cout<<"\nNhap lua chon: ";
   cin>>luachon;
   switch(luachon)
   {
   	case 1:
   		MaHoa(key,data);
   		 break;
   	/*case 2:
   		GiaiMa(key,data);
   	    break;*/
   		  default :
   		  	cout<<" Lua chon ko dung";
   		  	break;
   		
   }
	
}

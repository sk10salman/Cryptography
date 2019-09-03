#include<iostream>
#include<bits/stdc++.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s1,s2="",p,c,s3,s4,s5="";
   int k;
    
      cout<<"enter string\n";
     getline(cin,s1);
     cout<<"enter key\n";
       cin>>k;
      cout<<"enter plain file name:";
    cin>>p;
    ofstream o1(p.c_str());
    int l1=s1.length();
   
    o1 <<s1;
    o1.close();
 
   
    while(true){
        cout<<"\n\n1.encript 2.decription 3.exit";
     int ch;
    cin>>ch;
    if(ch==1)
     {cout<<"enter plain file text for cipher:";
        cin>>c;
     ifstream openFile(c.c_str());
    if (openFile.is_open()){ 
      
    getline(openFile, s3); 
    
          }
 
    for(int i=0;i<l1;i++)
      {
       
       
          if(s3[i]>='a' && s3[i]<='z')
           { int a=s3[i]-'a';
            
            a = a+k;
            a %=26;
            s2 += char(a+65);}
       else
        s2 +=s3[i];
      }

        cout<<"enter encript file name:";
    cin>>p;
    ofstream o2(p.c_str());
      o2<<s2;
       o2.close();}
    else if(ch==2)
     {
        {cout<<"enter cipher file text for plain:";
        cin>>c;
     ifstream openFile(c.c_str());
    if (openFile.is_open()){ 
      
    getline(openFile, s4); 
    
          }
   
    for(int i=0;i<l1;i++)
      {
       
       
          if(s4[i]>='A' && s4[i]<='Z')
           { int a=s4[i]-'A';
            
            a = a-k;
            if(a<0)
            {
               a += 26;}
            a %=26;
            s5 += char(a+97);}
       else
        s5 +=s4[i];
      }

        cout<<"enter decript file name:";
    cin>>p;
    ofstream o3(p.c_str());
      o3<<s5;
       o3.close();} 
      }
    else
         exit(0);}
     return 0;
}

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s1,k,s2="",s4,s5="",l,m,x;
        cout<<"enter string\n";
     getline(cin,s1);
     cout<<"generate key\n";
       getline(cin,k);
    string p,s3,c;
   cout<<"enter plain file name:";
   getline(cin,p);
   ofstream o1(p.c_str());
   o1<<s1;
  o1.close();
    int l1=s1.length(),l2=k.length();
   while(true)
   {
      int ch;
       cout<<"\n\n1.encription 2.decrypyon 3.exit:";
       cin>>ch;
   if(ch==1)
    {
        cout<<"enter plain file text for cipher:";
        cin>>x;
     ifstream openFile(x.c_str());
    if (openFile.is_open()){ 
      
    getline(openFile, s3); 
    
          }
        openFile.close();
    for(int i=0;i<s3.size();i++)
      {

          if(s3[i]>='a' && s3[i]<='z')
           { int a=s3[i]-'a';
             int j=i%l2;
            int b=k[j]-'a';
            a = a+b;
            a %=26;
            s2 += char(a+65);}
       else
        s2 +=s3[i];
      }
       cout<<"encript message::>\t"<<s2<<endl;
           cout<<"enter encrypted file name:";
      cin>>l;
         ofstream o2(l.c_str());
   o2<<s2;
  o2.close();}
    else if(ch==2)
     {
        cout<<"enter cipher file text for plain text:";
        cin>>c;
     ifstream openFile(c.c_str());
    if (openFile.is_open()){ 
      
    getline(openFile, s4); 
    
          }
     openFile.close();
    for(int i=0;i<s4.size();i++)
      {

          if(s4[i]>='A' && s4[i]<='Z')
           { int a=s4[i]-'A';
             int j=i%l2;
            int b=k[j]-'a';
            a = a-b;
            if(a<0)
            {
                a+=26;
             }
            a %=26;
            s5 += char(a+97);}
       else
        s5 +=s4[i];
      }
       cout<<"decrypted message::>\t"<<s5<<endl;
        cout<<"enter decrypt file name:";
   cin>>m;
   ofstream o3(m.c_str());
   o3<<s5;
  o3.close();
}
    else
        exit(0);
     }
     return 0;
}

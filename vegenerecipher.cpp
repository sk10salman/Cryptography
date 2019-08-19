#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s1,k,s2="";
        cout<<"enter string\n";
     getline(cin,s1);
     cout<<"enter key\n";
       getline(cin,k);
    int l1=s1.length(),l2=k.length();
    for(int i=0;i<l1;i++)
      {
          if(s1[i]>='a' && s2[i]<='z')
           { int a=s1[i]-'a';
             int j=i%l2;
            int b=k[j]-'a';
            a = a+b;
            a %=26;
            s2 += char(a+97);}
        else if(s1[i]>='A' && s2[i]<='Z')
           { int a=s1[i]-'A';
             int j=i%l2;
            int b=k[j]-'A';
            a = a+b;
            a %=26;
            s2 += char(a+65);}
       else
        s2 +=s1[i];
      }
       cout<<"encript message::>\t"<<s2<<endl;
     return 0;
}
  

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s1="hillcipher",s2="";
      int n;
      cout<<"enter size:";
      cin>>n;
      int a[1][n];
        a[0][0]=s1[0];
        a[0][1]=s1[1];
      int k[n][n],m[1][n]={0};
      for(int i=0;i<n;i++)
       for(int j=0;j<n;j++)
            cin>>k[i][j];
       for(int i=0;i<1;i++)
            for(int j=0;j<n;j++)
               {for(int l=0;l<n;l++)
                    { m[i][j] += a[i][l] * k[l][j];}
                          m[i][j] %=26;
                      s2 +=char(m[i][j]+97);}
       cout<<"encript message::>\t"<<s2<<endl;
     return 0;
}
  

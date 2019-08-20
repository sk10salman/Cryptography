#include<iostream>
#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
     /*string s1="hillcipher",s2="";*/
     string s1,name,name2,s2="";
     cout<<"enter the string\n";
     getline(cin,s1);
     cout<<"enter plain file name:";
     cin>>name;
     
     ofstream o1(name.c_str());
     o1 << s1;
      int n,det;
      cout<<"enter size:";
      cin>>n;
      int x=0;
      int a[1][n];
        int k[n][n];
      for(int i=0;i<n;i++)
       for(int j=0;j<n;j++)
            cin>>k[i][j];
      if(n==2)
       {
           det=k[0][0]*k[1][1]-k[0][1]*k[1][0];
           
        }
        if(n==3)
        {
             det=k[0][0]*(k[1][1]*k[2][2]-k[1][2]*k[2][1])-k[0][1]*(k[1][0]*k[2][2]-k[1][2]*k[2][0])+k[0][2]*(k[1][0]*k[2][1]-k[1][1]*k[2][0]);  
             
              }
       if(det!=0){   
      while(x<s1.length())
      {    int m[1][n]={0};
          for(int i=0;i<n;i++)
             {
                if(int(s1[x])>=97 && int(s1[i])<=122)
                {a[0][i]=int(s1[x])-97;}
                else
                     a[0][i]=24;
                     x++;}
    
       for(int i=0;i<1;i++)
            for(int j=0;j<n;j++)
            {m[i][j]=0;
               {for(int l=0;l<n;l++)
                    { m[i][j] += a[i][l] * k[l][j];}
                          m[i][j] %=26;
                      s2 +=char(m[i][j]+97);}
                     }}
                         cout<<"enter encript file name:";
                            cin>>name2;
                             ofstream o2;
                             o2.open(name2.c_str());
                               o2 << s2;
                               cout<<"encript message>>\t"<<s2;}
                           else
                               cout<<"invalid key:";
      
     return 0;
}

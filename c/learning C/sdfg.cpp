#include<iostream>

using namespace std;

int main()
{
    char x[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    
    char y[26]={'z','y','x','w','v','u','t','s','r','q','p','o','n','m','l','k','j','i','h','g','f','e','d','c','b','a'};
    string  s="hey";
    for(int i=0;i<s.length();i++)
    {
        for(int j=0;j<26;j++)
        {
            if(s[i]==x[j])
            {
            
                cout<<y[j];
            }
        
        }
    }
   

}
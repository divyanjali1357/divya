#include<iostream>
#include<string.h>  
 
using namespace std; 
int main() 
{ 
 int time=0;
    string str="this is my demo example";  
  

    
    cout << str.length() << endl;  
      
     
  
  
    int i = 0; 
    while (str[i] != '\0') 
    { 
        ++i;
        ++time;
        
    } 
    cout << i << endl;
    
  if(i>20 && time>10)
  {
     cout<<"level 1 crossed"; 
  }
  else
  {
      cout<<"repeat again";
  }
    
return 0; 
} 


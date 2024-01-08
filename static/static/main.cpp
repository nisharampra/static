//
//  main.cpp
//  static
//
//  Created by Nisha Ramprasath on 4/11/23.
//
#include<iostream>
using namespace std;
    
void fun()
{
    static int s=10;
    s++;
        
    cout<<s<<endl;
}
    
int main()
{
    fun();
    fun();
        
}

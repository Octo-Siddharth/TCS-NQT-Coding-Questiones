//Program to find the Quadrant in which coordinate lies
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    if(x > 0 && y > 0)
    {
        cout<<x<<" and "<<y<<" lies on First Quadrant"<<endl; 
    }
    else if(x < 0 && y > 0)
    {
        cout<<x<<" and "<<y<<" lies on Second Quadrant"<<endl; 
    }
    else if(x < 0 && y < 0)
    {
        cout<<x<<" and "<<y<<" lies on Third Quadrant"<<endl; 
    }
    else if(x > 0 && y < 0)
    {
        cout<<x<<" and "<<y<<" lies on Fourth Quadrant"<<endl; 
    }
    else if(x == 0 && y == 0)
    {
        cout<<x<<" and "<<y<<" lies on Origin"<<endl; 
    }
    else if(x == 0 && y != 0)
    {
        cout<<x<<" and "<<y<<" lies on x axis"<<endl; 
    }
    else if(x != 0 && y == 0)
    {
        cout<<x<<" and "<<y<<" lies on y axis"<<endl; 
    }
    return 0;
}
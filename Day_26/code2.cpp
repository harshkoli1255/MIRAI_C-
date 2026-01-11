#include<iostream>
using  namespace std;


int sum(int x , int y , int z){
     //it must return an integer value
     return x+y+z;  //it will throw sum of 3 arguments
}

/*
int a = 5;
int b = 10;
int c = a+b;



*/

int main()
{

   int ans = sum(4,5,6);   //cout<<sum(4,5,6);
   cout<<ans<<endl;
   return 0;

}



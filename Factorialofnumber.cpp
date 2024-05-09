// To find the factorial of a number 
#include<iostream>
using namespace std;
int main(){
     int n,i,fact=1;
     cout<<"Enter the number:";
     cin>>n;
     for(i=1;i<=n;i++){
         fact=fact*i;
     }
     cout<<"The factorial of "<<n<<" is "<<fact<<endl;
}

/*
Sample output:
Enter the number:5
The factorial of 5 is 120
*/

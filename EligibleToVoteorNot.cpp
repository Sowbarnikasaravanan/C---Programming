// To check whether a person is eligible to vote or not 
// Age should be greater than 18 to vote 
#include<iostream>
using namespace std;
int main(){
    int age;
    cin>>age;
    if(age>=18){
        cout<<("You are eligible to vote");
    }
    else{
       cout<<"You are not eligible to vote";
    }
    return 0;
}

/*
Sample Output:
20
You are eligible to vote

15
You are not eligible to vote
*/

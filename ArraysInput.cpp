  #include <iostream>
#define num1 = 1;
using namespace std;

int main(){
    // Initialize an array with size 5
    int nums[5];

    // Prompt the user to enter 5 integers
    cout<<"Enter 5 integers";
    // Read integers from user and store them in the array
    cin>>nums[0];
    cin>>nums[1];
    cin>>nums[2];
    cin>>nums[3];
    cin>>nums[4];

    // Display the values entered by the user
    cout<<"The five values entered are"<<endl;
    cout<<nums[0]<<endl;
    cout<<nums[1]<<endl;
    cout<<nums[2]<<endl;
    cout<<nums[3]<<endl;
    cout<<nums[4]<<endl;

    return 0;
}

#include<iostream>
using namespace std;

int main(){
    cout<<"Enter array size"<<endl;
    int arrNum;
    cin>>arrNum;
    // Initialize an array with size 5
    int numbers[arrNum];
    int index = 0;

    while (index < arrNum){
        cout<<"Enter a number"<<endl;
        cin>>numbers[index];
        index++;
    }

    // // Prompt the user to enter 5 integers
    // cout<<"Enter "<<n<<" integers: "<<endl;

    // // Read integers from user and store them in the array
    // for(int i=0; i<sizeof(numbers); i++){
    //     cin>>numbers[i];
    // }

    // Display the values entered by the user
    cout<<"The "<<arrNum<<" values entered are:"<<endl;
    for(int j=0; j<arrNum; j++){
        cout<<numbers[j]<<endl;
    }

    return 0;
}
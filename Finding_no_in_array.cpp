//Mishree Kalaria
//24070123052
//Batch: A2

#include <iostream>
using namespace std;

int main() {
    int arr[5]={52,81,50,37,89};
    int n;
    
    cout<<"Enter index to know th number(0-4): ";
    cin>>n;
    
    for(int i=0;i<5;i++){
        if (n==i){
            cout<<arr[i];
        }
        else{
            continue;
        }
    }
    return 0;
}

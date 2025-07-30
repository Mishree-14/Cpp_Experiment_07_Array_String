//Mishree Kalaria
//24070123052
//Batch: A2

#include <iostream>
using namespace std;

int main() {
    int max;
    int arr[5]={52,81,50,37,89};
    
    for(int i=0;i<5;i++){
        cout<<arr[i]<<"\t";
    }
    
    max = arr[0];
    cout<<"\n"<<"Largest Number of Array: ";
    for(int i=0;i<5;i++){
       if(arr[i]>max){
           max = arr[i];
       }
       else{
           continue;
       }
    }
    cout<<max;
    
    return 0;
}

//Mishree Kalaria
//24070123052
//Batch: A2

#include <iostream>
using namespace std;

int main() {
    int min;
    int arr[5]={11,42,50,90,7};
    
    for(int i=0;i<5;i++){
        cout<<arr[i]<<"\t";
    }
    
    min = arr[0];
    cout<<"\n"<<"Smallest Number of Array: ";
    for(int i=0;i<5;i++){
       if(arr[i]<min){
           min = arr[i];
       }
       else{
           continue;
       }
    }
    cout<<min;
    
    return 0;
}


// Bubble short :
// Reaptedly swap two adjacent elements if they are in wrong order .
// wrong oder = Left number > Right number 

#include<iostream>
using namespace std;

int main() {
     int n;
    cout<<"Enter array size : ";
    cin>>n;

    int array[n];

    for (int i=0; i<n; i++){
        cin>>array[i];
    }

    int counter=1;
    while(counter<n){
        for(int i=0; i<n-counter; i++){
            if(array[i]>array[i+1]){
                int temp=array[i];
                array[i]=array[i+1];
                array[i+1]=temp;
            }
        }
        counter++;
    }
    for(int i=0; i<n; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;

}
#include<iostream>
using namespace std;
int main(){
    int maxleft=0;
    int maxright=0;
    int water=0;
    int index=0;
    int n;
    cout<<"enter size of an array";
    cin>>n;
    int height[100];
    int maxheight=height[0];
    for(int i=0;i<n;i++){
        cin>>height[i];
    }
    for(int i=0;i<n;i++){
        if(height[i]>maxheight){
            maxheight=height[i];
        }
    }
    for(int i=0;i<=index;i++){
        if(maxleft>height[i]){
            water+=maxleft-height[i];
        }
        else{
            maxleft=height[i];
        }
    }
    for(int i=n-1;i>=index;i--){
        if(maxright>height[i]){
            water+=maxright-height[i];
        }
        else{
            maxright=height[i];
        }
 }
 cout<<water;

}
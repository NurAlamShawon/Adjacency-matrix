#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the total vertex number ";
cin>>n;
int counter[n];
int counters=0;
int matrix[n][n];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<"Enter the "<<i+1<<"th vertex connection ";
        cin>>matrix[i][j];
        if(matrix[i][j]==1){
                counters++;
        }

    }
    counter[i]=counters;
    counters=0;
}
int degree;
cout<<" Which vertex you want to find the degree? ";
cin>>degree;
cout<<endl;
cout<<counter[degree];


}

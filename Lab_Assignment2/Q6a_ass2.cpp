// to find transpose of a sparse matrix assuming matrix is represented using triplets.
#include<iostream>
using namespace std;
void show(int trip[][3],int t){
    for(int i=0;i<t;i++){
        cout<<trip[i][0]<<" "<<trip[i][1]<<" "<<trip[i][2]<<"\n";
    }
}
void transpose(int a[][3],int t,int res[][3]){
    int k=0;
    for(int c=0;c<3;c++){
        for(int i=0;i<t;i++){
            if(a[i][1]==c){res[k][0]=a[i][1];res[k][1]=a[i][0];res[k][2]=a[i][2];k++;}
        } 
    }
}      
int main(){
    int a[3][3]={{0,0,5},{0,2,8},{2,1,6}},t=3;
    int res[10][3];
    transpose(a,t,res);
    show(res,t);
    return 0;
}
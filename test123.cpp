#include<iostream>
using namespace std;

int a[]={3,3,5};
int b[]={2,4,6};
int c[6]={0};
int m=0;
void test123(){
    for(int i =0;i<3;i++){
        for(int j =0;j<3;j++){
            if(a[i]<b[j]){
                c[m]=a[i];
            }else{

            }
        }
    }
}
#include <vector>
#include <iostream>
using namespace std;
#include <string>
void test001(){
int arr[]={11,10,8,1,3};
int a = arr[3];
int arr2[5];
for (int i = 0; i < 5; i++)
{
    int temp = 0;
    if(arr[i]<a){
        temp =a[i];
        arr2[i]=arr[i];
        }else{
            arr2[5-i-1]=arr[i];
            }
    
    
    
    // if(i!=3){
    //     if(arr[i]<a){
    //     arr2[i]=arr[i];
    //     }else{
    //         arr2[5-i-1]=arr[i];
    //         }
    // }   
}
for (int i = 0; i < 5; i++)
{
    cout<<arr2[i]<<endl;
}
}
int main() {

	test001();

	system("pause");

	return 0;
}
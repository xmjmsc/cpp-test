#include <iostream>
#include <fstream> 
using namespace std;

//创建BinaryStream类
class BinaryStream
{
    void read(){
        ifstream in("test.txt", ios::binary);
        if(!in.is_open()){
            cout << "文件打开失败" << endl;
            return;
        }
        char buf[1024] = {0};
        in.read(buf, sizeof(buf));
        cout << buf << endl;
        in.close();
    }
};
#include<iostream>
#include<fstream>
#include<string>
#include <vector>
using namespace std;


void readInToMatrix() {
	
    //fstream &in;
    string FilePath;
    int data[13][3];

    ifstream in;
	in.open("1.txt", ios::in);

    //in.open(FilePath, ios::in);//打开一个file
	if (!in.is_open()) {
		cout << "Can not find " << endl;
		system("pause");
	}
	string buff;
	int i = 0;//行数i
	while (getline(in, buff)) {
		vector<double> nums;
		// string->char *
		char *s_input = (char *)buff.c_str();
		const char * split = ",";
		// 以‘，’为分隔符拆分字符串
		char *p = strtok(s_input, split);
		double a;
		while (p != NULL) {
			// char * -> int
			a = atof(p);
			//cout << a << endl;
			nums.push_back(a);
			p = strtok(NULL, split);
		}//end while
		for (int b = 0; b < nums.size(); b++) {
			data[i][b] = nums[b];
		}//end for
		i++;
	}//end while
	in.close();
	cout << "get  data" << endl;
}


int main() {

	readInToMatrix();

	system("pause");

	return 0;
}
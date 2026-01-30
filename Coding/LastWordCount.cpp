#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;//定义一个字符串，长度可变
	getline(cin, str);//cin无法读取空格和tab
	int len = 0;//记录最后一个单词的字符数
	for (int i = str.length() - 1; i >= 0; i--)
	{
		if (str[i] == ' ')//从最后一个字符往前计数，遇到空格跳出循环
		{
			break;
		}
		len++;
	}
	cout << len << endl;
	return 0;
}
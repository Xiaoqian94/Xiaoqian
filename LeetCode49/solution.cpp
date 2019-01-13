#include "solution.h"
//#include<unordered_map>
#include<algorithm>
#include<tr1/unordered_map>
using namespace std::tr1;

vector<vector<string> > Solution::groupAnagrams(vector<string>& strs)
{
	int index = 0;//���ؽ������ĸ��λ����������ʾ����ĸ��λ�ʳ��ֵ�˳��ţ� 
	unordered_map<string, int> myMap;//���ڱ��������ĵ��ʼ�����ĸ��λ������
	string str;
	for(int i = 0; i< strs.size(); i++)
	{
		str = strs[i];
		sort(str.begin(), str.end());
		if(myMap.find(str) == myMap.end())
		{
			myMap[str] = index;//��index�����ֵ���λ��
			index++;
			res.push_back(vector<string>{}); 
		}
		res[myMap[str]].push_back(strs[i]);
	}
	return res;
}

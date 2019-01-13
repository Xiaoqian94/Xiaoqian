#include "solution.h"
//#include<unordered_map>
#include<algorithm>
#include<tr1/unordered_map>
using namespace std::tr1;

vector<vector<string> > Solution::groupAnagrams(vector<string>& strs)
{
	int index = 0;//返回结果的字母异位词索引（表示该字母异位词出现的顺序号） 
	unordered_map<string, int> myMap;//用于保存排序后的单词及其字母异位词索引
	string str;
	for(int i = 0; i< strs.size(); i++)
	{
		str = strs[i];
		sort(str.begin(), str.end());
		if(myMap.find(str) == myMap.end())
		{
			myMap[str] = index;//第index个出现的异位词
			index++;
			res.push_back(vector<string>{}); 
		}
		res[myMap[str]].push_back(strs[i]);
	}
	return res;
}

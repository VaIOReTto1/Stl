#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<deque>
#include<stack>
#include<queue>
#include<list>
#include<set>
#include<map>
#include<functional>
#include<ctime>
#include<numeric>
using namespace std;

//vector存放内部数据
//void print(int val){
//	cout << val << endl;
//}
//void test(){
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	vector<int>::iterator itBegin = v.begin();
//	vector<int>::iterator itEnd = v.end();
	/*while (itBegin != itEnd){
		cout << *itBegin << endl;;
		itBegin++;
	}*/

	//for (vector<int>::iterator itBegin = v.begin(); itBegin != v.end(); itBegin++) cout << *itBegin << endl;

	/*for_each(v.begin(), v.end(), print);*/
//}
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//vector存放自定义数据
//class Person{
//public:
//	Person(string name, int age){
//		this->name = name;
//		this->age = age;
//	}
//	string name;
//	int age;
//};
//void test(){
//	vector<Person> v;
//
//	Person p1("a", 18);
//	Person p2("b", 18);
//	Person p3("c", 18);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//
//	//for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) /*cout << (*it).name << " " << (*it).age<<endl;*/
//	//	cout << it->name << " " << it->age << endl;
//
//	vector<Person *> vv;
//
//	vv.push_back(&p1);
//	vv.push_back(&p2);
//	vv.push_back(&p3);
//
//	for (vector<Person *>::iterator it = vv.begin(); it != vv.end(); it++) cout << (*it)->name << " " <<(*it)->age<<endl;
//}
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//容器嵌套容器
//void test(){
//	vector<vector<int>>v;
//	vector<int> v1;
//	vector<int> v2;
//	for (int i = 0; i < 4; i++){
//		v1.push_back(i + 1);
//		v2.push_back(i + 2);
//	}
//	v.push_back(v1);
//	v.push_back(v2);
//	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++){
//		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++)
//			cout << *vit << " ";
//		cout << endl;
//	}
//}
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//vector构造函数
//void test(){
//	vector<int>v1;
//	for (int i = 0; i < 10; i++) v1.push_back(i);
//	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++) cout << *it<<" ";
//	cout << endl;
//	vector<int>v2(v1);
//	for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++) cout << *it<<" ";
//	cout << endl;
//	vector<int>v3(10, 100);
//	for (vector<int>::iterator it = v3.begin(); it != v3.end(); it++) cout << *it << " ";
//	cout << endl;
//	vector<int>v4(v3.begin(), v3.end());
//	for (vector<int>::iterator it = v4.begin(); it != v4.end(); it++) cout << *it << " ";
//	cout << endl;
//}
//
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//vector赋值
//void test(){
//	vector<int>v1;
//	for (int i = 0; i < 10; i++) v1.push_back(i);
//	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++) cout << *it<<" ";
//	cout << endl;
//	vector<int>v2;
//	v2 = v1;
//	for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++) cout << *it<<" ";
//	cout << endl;
//	vector<int>v3;
//	v3.assign(v1.begin(), v1.end());
//	for (vector<int>::iterator it = v3.begin(); it != v3.end(); it++) cout << *it << " ";
//	cout << endl;
//	vector<int>v4;
//	v4.assign(10, 100);
//	for (vector<int>::iterator it = v4.begin(); it != v4.end(); it++) cout << *it << " ";
//	cout << endl;
//}
//
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//void print(vector<int>v1){
//	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++) cout << *it << " ";
//	cout << endl;
//}
//vector容量和大小
//void test(){
//	vector<int>v1;
//	for (int i = 0; i < 10; i++) v1.push_back(i);
//	print(v1);
//	if (v1.empty()) cout << "1" << endl;
//	else cout << "0" << endl;
//	cout << "rongliang:" << v1.capacity() << endl;
//	cout << "daixiao:" << v1.size() << endl;
//	v1.resize(15);
//	print(v1);
//	v1.resize(16,10);
//	print(v1);
//	v1.resize(5);
//	print(v1);
//}
//
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//vector插入和删除
//void test(){
//	vector<int>v1;
//	for (int i = 0; i < 10; i++) v1.push_back(i);
//	print(v1);
//	v1.insert(v1.begin(), 2, 100);
//	print(v1);
//	v1.erase(v1.begin());
//	print(v1);
//	//v1.erase(v1.begin(),v1.end());
//	v1.clear();
//	print(v1);
//}
//
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//vector数据存储
//void test(){
//	vector<int>v1;
//	for (int i = 0; i < 10; i++) v1.push_back(i);
//	for (int i = 0; i < 10; i++) cout << v1[i] << " ";
//	cout << endl;
//	for (int i = 0; i < 10; i++) cout << v1.at(i)<< " ";
//	cout << endl;
//	cout << v1.back() << endl;
//	cout << v1.front() <<endl;
//}
//
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//vector数据交换
//void test(){
//	vector<int>v1;
//	for (int i = 0; i < 10; i++) v1.push_back(i);
//	print(v1);
//	vector<int>v2;
//	for (int i = 10; i > 0; i--) v2.push_back(i);
//	print(v2);
//	v1.swap(v2);
//	print(v1);
//	print(v2);
//}
//
//void test2(){
//	vector<int>v1;
//	for (int i = 0; i < 100000; i++) v1.push_back(i);
//	cout << "rongliang:" << v1.capacity() << endl;
//	cout << "daixiao:" << v1.size() << endl;
//	v1.resize(3);
//	cout << "rongliang:" << v1.capacity() << endl;
//	cout << "daixiao:" << v1.size() << endl;
//	vector<int>(v1).swap(v1);
//	cout << "rongliang:" << v1.capacity() << endl;
//	cout << "daixiao:" << v1.size() << endl;
//}
//int main(){
//	test2();
//
//	system("pause");
//	return 0;
//}

//vector预留空间
//void test(){
//	vector<int>v1;
//	int num = 0, *p = NULL;
//	//for (int i = 0; i < 10000; i++) {
//	//	v1.push_back(i);
//	//	if (p != &v1[0]){
//	//		p = &v1[0];
//	//		num++;
//	//	}
//	//}
//	//cout << num << endl;
//
//	/*v1.reserve(10000);
//	for (int i = 0; i < 10000; i++) {
//		v1.push_back(i);
//		if (p != &v1[0]){
//			p = &v1[0];
//			num++;
//		}
//	}
//	cout << num << endl;*/
//
//	v1.reserve(1000);
//	for (int i = 0; i < 10000; i++) {
//		v1.push_back(i);
//		if (p != &v1[0]){
//			p = &v1[0];
//			num++;
//		}
//	}
//	cout << num << endl;
//}
//
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//string容器构造函数
//void test(){
//	string s1;
//	const char* str = "abcd";
//	string s2(str);
//	string s3(s2);
//	string s4(10, 'a');
//	cout << s2 << " " << s3 << " " << s4;
//}
//int main(){
//	test();
//	system("pause");
//	return 0;
//}

//string容器赋值
//void test(){
//	string s1 = "abcd";
//	string s2 = s1;
//	string s3;
//	s3 = 'a';
//	string s4;
//	s4.assign("abcd");
//	string s5;
//	s5.assign(s1);
//	string s7;
//	s7.assign("abcdef", 5);
//	string s6;
//	s6.assign(10, 'a');
//	cout << s1 << " " << s2 << " " << s3 << " " << s4 << " " << s5 << " " << s6 << " " << s7;
//}
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//string容器拼接字符串
//void test(){
//	string str1;
//	str1 += "hh";
//	cout << str1 << endl;
//	str1 += 'a';
//	cout << str1 << endl;
//	str1 += str1;
//	cout << str1 << endl;
//	str1.append("hh");
//	cout << str1 << endl;
//	str1.append("xxxx",3);
//	cout << str1 << endl;
//	str1.append(str1);
//	cout << str1 << endl;
//	str1.append(str1, 2, 5);
//	cout << str1 << endl;
//}
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//字符串查询和替代
//void test1(){
//	string str1;
//	str1 = "abcdefde";
//	int pos = str1.find("de");
//	if (pos != -1) cout << pos << endl;
//	else cout << "not" << endl;
//	pos = str1.find("g");
//	if (pos != -1) cout << pos << endl;
//	else cout << "not" << endl;
//	pos = str1.rfind("de");
//	if (pos != -1) cout << pos << endl;
//	else cout << "not" << endl;
//	str1 = "abcdef";
//	pos = str1.rfind("de");
//	if (pos != -1) cout << pos << endl;
//	else cout << "not" << endl;
//}
//
//void test2(){
//	string str1 = "abcdef";
//	str1.replace(1, 3, "1234");
//	cout << str1 << endl;
//}
//
//int main(){
//	test1();
//    test2();
//
//	system("pause");
//	return 0;
//}

//字符串比较
//void test(){
//	string str1 = "hellow";
//	string str2 = "hellow";
//	if (str1.compare(str2) == 0) cout << "=" << endl;
//	else if (str1.compare(str2) > 0) cout << ">" << endl;
//	else cout << "<" << endl;
//	str1 = "xellow"; 
//	if (str1.compare(str2) == 0) cout << "=" << endl;
//	else if (str1.compare(str2) > 0) cout << ">" << endl;
//	else cout << "<" << endl;
//	str1 = "hellowe";
//	if (str1.compare(str2) == 0) cout << "=" << endl;
//	else if (str1.compare(str2) > 0) cout << ">" << endl;
//	else cout << "<" << endl;
//	str1 = "zzzz";
//	if (str1.compare(str2) == 0) cout << "=" << endl;
//	else if (str1.compare(str2) > 0) cout << ">" << endl;
//	else cout << "<" << endl;
//	str1 = "z";
//	if (str1.compare(str2) == 0) cout << "=" << endl;
//	else if (str1.compare(str2) > 0) cout << ">" << endl;
//	else cout << "<" << endl;
//	str1 = "h";
//	if (str1.compare(str2) == 0) cout << "=" << endl;
//	else if (str1.compare(str2) > 0) cout << ">" << endl;
//	else cout << "<" << endl;
//	str1 = "i";
//	if (str1.compare(str2) == 0) cout << "=" << endl;
//	else if (str1.compare(str2) > 0) cout << ">" << endl;
//	else cout << "<" << endl;
//}
// 
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//字符存取
//void test(){
//	string str = "hello";
//	cout << str << endl;
//	for (int i = 0; i < str.size(); i++){
//		cout << str[i] << " ";
//	}
//	cout << endl;
//	for (int i = 0; i < str.size(); i++){
//		cout << str.at(i)<< " ";
//	}
//	cout << endl;
//	str[0] = 'x';
//	cout << str << endl;
//	str.at(1) = 'x';
//	cout << str << endl;
//}
//
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//string插入和删除
//void test(){
//	string str = "hello";
//	str.insert(1, 3, '1');
//	cout << str << endl;
//	str.erase(1, 3);
//	cout << str << endl;
//}
//
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//string求字串
//void test(){
//	string email = "violet@cumt.com";
//	string username = email.substr(0, email.find('@'));
//	cout << username;
//}
//
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//void print(const deque<int>v1){
//	for (deque<int>::const_iterator it = v1.begin(); it != v1.end(); it++) {
//		//*it = 100;
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//deque构造函数
//void test(){
//	deque<int>d1;
//	for (int i = 0; i < 10; i++) d1.push_back(i);
//	print(d1);
//	deque<int>d2(d1);
//	print(d2);
//	deque<int>d3(d1.begin(), d1.end());
//	print(d3);
//	deque<int>d4(10,100);
//	print(d4);
//}
//
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//deque赋值
//void test(){
//	deque<int>d1;
//	for (int i = 0; i < 10; i++) d1.push_back(i);
//	print(d1);
//	deque<int>d2;
//	d2 = d1;
//	print(d2);
//	deque<int>d3;
//	d3.assign(10,100);
//	print(d3); 
//	deque<int>d4;
//	d4.assign(d2.begin(),d2.end());
//	print(d4);
//}
//
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//deque容器
//void test(){
//	deque<int>d1;
//	for (int i = 0; i < 10; i++) d1.push_back(i);
//	if (d1.empty()) cout << "kong" << endl;
//	else {
//		print(d1);
//		cout << "daixiao:" << d1.size() << endl;//没有容量
//	}
//	d1.resize(15, 1);
//	print(d1);
//}
//
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//deque插入和删除
//void test(){
//	deque<int>d1;
//	d1.push_front(10);
//	d1.push_front(20);
//	d1.push_back(100);
//	d1.push_back(200);
//	print(d1);
//	deque<int>::iterator it= d1.begin();
//	it++;
//	d1.erase(it);
//	d1.insert(d1.begin(), 2, 100);
//	print(d1);
//	deque<int>d2;
//	d2.push_front(1);
//	d2.push_front(2);
//	d2.push_back(10);
//	d2.push_back(20);
//	print(d2);
//	d2.insert(d2.begin(), d1.begin(), d1.end());
//	print(d2);
//	d2.clear();
//	d1.erase(d1.begin(), d1.end());
//	print(d1);
//	print(d2);
//}
//
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//deque数据存取
//void test(){
//	deque<int>d1;
//		d1.push_front(10);
//		d1.push_front(20);
//		d1.push_back(100);
//		d1.push_back(200);
//		for (int i = 0; i < d1.size(); i++){
//			cout << d1[i] << " ";
//		}
//		cout << endl;
//		for (int i = 0; i < d1.size(); i++){
//			cout << d1.at(i) << " ";
//		}
//		cout << endl;
//		cout << "1:" << d1.front() << endl;
//		cout << "2:" << d1.back() << endl;
//}
//
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//deque排序
//void test(){
//	deque<int>d1;
//			d1.push_front(10);
//			d1.push_front(20);
//			d1.push_back(100);
//			d1.push_back(200);
//			print(d1);
//			sort(d1.begin(), d1.end());
//			print(d1);
//}
//
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//stack接口
//void test(){
//	stack<int> s;
//	s.push(10);
//	s.push(20);
//	s.push(30);
//	s.push(40);
//
//	while (!s.empty()){
//		cout << "yuansu: " << s.top() << endl;
//		s.pop();
//	}
//	cout << "daixao: " << s.size() << endl;
//}
//
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//queue接口
//class Person{
//public:
//	Person(string name, int age){
//		this->name= name;
//		this->age = age;
//	}
//	string name;
//	int age;
//};
//void test(){
//	queue<Person> s;
//	Person p1("hh", 18);
//	Person p2("hh", 19);
//	Person p3("hh", 20);
//	Person p4("hh", 21);
//	s.push(p1);
//	s.push(p2);
//	s.push(p3);
//	s.push(p4);
//
//	cout << "daixao: " << s.size() << endl;
//	while (!s.empty()){
//		cout << "shou:  " << s.front().name<<" " <<s.front().age<< endl;
//		cout << "wei:  " << s.back().name << " " << s.back().age << endl;
//		s.pop();
//	}
//	cout << "daixao: " << s.size() << endl;
//}
//
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//void print(const list<int>v1){
//	for (list<int>::const_iterator it = v1.begin(); it != v1.end(); it++) {
//		//*it = 100;
//		cout << *it << " ";
//	}
//	cout << endl;
//}

//list容器构造函数
//void test(){
//	list<int> l1;
//	l1.push_back(10);
//	l1.push_back(20);
//	l1.push_back(30);
//	l1.push_back(40);
//	print(l1);
//	list<int>l2(l1.begin(), l1.end());
//	print(l2);
//	list<int>l3(l2);
//	print(l3);
//  list<int>l4(1, 10);
//  print(l4);
//}
//
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//list容器赋值和交换
//void test(){
//	list<int> l1;
//	l1.push_back(10);
//	l1.push_back(20);
//	l1.push_back(30);
//	l1.push_back(40);
//	print(l1);
//
//	list<int>l2;
//	l2 = l1;
//	print(l2);
//	list<int>l3;
//	l3.assign(l2.begin(), l2.end());
//	print(l3);
//	list<int>l4;
//	l4.assign(4, 10);
//	print(l4);
//
//	l1.swap(l4);
//	print(l1);
//}
//
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//list容器大小操作
//void test(){
//	list<int> l1;
//	if (l1.empty()) cout << "empty" << endl;
//	else cout << "not empty" << endl;
//
//	l1.push_back(10);
//	l1.push_back(20);
//	l1.push_back(30);
//	l1.push_back(40);
//	print(l1);
//
//	if (l1.empty()) cout << "empty" << endl;
//	else {
//		cout << "not empty" << endl;
//		cout << "个数:" << l1.size() << endl;
//	}
//
//	l1.resize(10, 100);
//	print(l1);
//	l1.resize(2);
//	print(l1);
//}
//
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//list容器插入和删除
//void test(){
//	list<int> l1;
//	l1.push_back(10);
//	l1.push_back(20);
//	l1.push_back(30);
//	print(l1);
//
//	l1.push_front(100);
//	l1.push_front(200);
//	l1.push_front(300);
//	print(l1);
//
//	l1.pop_back();
//	l1.pop_front();
//	print(l1);
//
//	list<int>::iterator it = l1.begin();
//	l1.insert(++it, 1000);
//	it = l1.begin();
//	l1.insert(it, 3, 2000);
//	print(l1);
//
//	l1.erase(it);
//	print(l1);
//	/*l1.erase(l1.begin(), l1.end());
//	print(l1);*/
//
//	l1.remove(2000);
//	print(l1);
//
//	l1.clear();
//	print(l1);
//}
//
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//list容器数据存取
//void test(){
//	list<int> l1;
//	l1.push_back(10);
//	l1.push_back(20);
//	l1.push_back(30);
//	print(l1);
//	/*l1[0];
//	l1.at(1);*/
//	cout << "first:" << l1.front() << endl;
//	cout << "last:" << l1.back() << endl;
//	list<int>::iterator it = l1.begin();
//	it++;
//	it--;
//	/*it + 1;*/
//}
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//list容器排序
//bool Compare(int v1, int v2){
//	return v1 > v2;
//}
//void test(){
//	list<int> l1;
//	l1.push_back(10);
//	l1.push_back(30);
//	l1.push_back(20);
//	print(l1);
//
//	l1.reverse();
//	print(l1);
//	l1.sort();
//	print(l1);
//	l1.sort(Compare);
//	print(l1);
//}
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//list容器自定义数据排序 
//class Person{
//public:
//	int age;
//	string name;
//	int height;
//
//	Person(string name, int age, int height){
//		this->age = age;
//		this->name = name;
//		this->height = height;
//	}
//};
//bool ComparePerson(Person &p1,Person &p2){
//	if (p1.age == p2.age) return p1.height > p2.height;
//	else return p1.age < p2.age;
//}
//void test(){
//	list<Person> l1;
//	Person p1("aa", 10, 190);
//	Person p2("bb", 10, 160);
//	Person p3("cc", 10, 180);
//	Person p4("dd", 12, 190);
//	Person p5("ee", 12, 140);
//	Person p6("ff", 15, 190);
//	Person p7("gg", 16, 190);
//
//	l1.push_back(p1);
//	l1.push_back(p2);
//	l1.push_back(p3);
//	l1.push_back(p4);
//	l1.push_back(p5);
//	l1.push_back(p6);
//	l1.push_back(p7);
//	
//	for (list<Person>::const_iterator it = l1.begin(); it != l1.end(); it++){
//		cout << "name: "<<(*it).name << " "<<"age: "<<(*it).age<<" height: "<<(*it).height<<endl;
//	}
//	cout << "-----------------------------------------------" << endl;
//	l1.sort(ComparePerson);
//	for (list<Person>::const_iterator it = l1.begin(); it != l1.end(); it++){
//		cout << "name: " << (*it).name << " " << "age: " << (*it).age << " height: " << (*it).height << endl;
//	}
//}
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//void print(set<int>s){
//	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
//		cout << (*it) << " ";
//	cout << endl;
//}

//set容器构造函数和赋值
//void test(){
//	set<int> s;
//	s.insert(10);
//	s.insert(10);//不允许同元素存在
//	s.insert(40);//自动排序
//	s.insert(20);
//	s.insert(30);
//
//	print(s);
//
//	set<int> s2(s);
//	print(s2);
//
//	set<int>s3;
//	s3 = s2;
//	print(s3);
//}
//
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//set容器大小和交换
//void test(){
//	set<int> s;
//
//	if (s.empty()) cout << "empty" << endl;
//	else {
//		cout << "not empty" << endl;
//		cout << "size: " << s.size() << endl;
//	}
//
//	s.insert(10);
//	s.insert(10);
//	s.insert(40);
//	s.insert(20);
//	s.insert(30);
//	print(s);
//	if (s.empty()) cout << "empty" << endl;
//	else {
//		cout << "not empty" << endl;
//		cout << "size: " << s.size() << endl;
//	}
//
//	set<int> s2;
//	s2.insert(100);
//	s2.insert(200);
//	s2.insert(400);
//	s2.insert(300);
//
//	cout << "preview: s"<<endl;
//	print(s);
//	cout << "s2" << endl;
//	print(s2);
//
//	s.swap(s2);
//	cout << "next: s" << endl;
//	print(s);
//	cout << "s2" << endl;
//	print(s2);
//}
//
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//set容器插入和删除
//void test(){
//	set<int> s;
//
//	s.insert(20);
//	s.insert(10);
//	s.insert(40);
//	s.insert(20);
//	s.insert(30);
//	print(s);
//
//	s.erase(s.begin());
//	print(s);
//	s.erase(30);
//	print(s);
//	s.erase(s.begin(), s.end());//s.clear(）
//	print(s);
//}
//
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//set容器查找和统计
//void test(){
//	set<int> s;
//
//	s.insert(20);
//	s.insert(10);
//	s.insert(40);
//	s.insert(20);
//	s.insert(30);
//	print(s);
//
//	set<int>::iterator it = s.find(20);
//	if (it != s.end()) cout << "找到: " << *it << endl;
//	else cout << "没找到" << endl;
//
//	it = s.find(2);
//	if (it != s.end()) cout << "找到了" << *it << endl;
//	else cout << "没找到" << endl;
//
//	int num = s.count(20);
//	cout << "num: " << num << endl;
//	num = s.count(2);
//	cout << "num: " << num << endl;
//}
//
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//set容器和multiset区别
//void test(){
//	set<int> s;
//
//	pair<set<int>::iterator, bool>ret =s.insert(10);
//	if (ret.second) cout << "第一次查入成功" << endl;
//	else cout << "第二次插入失败" << endl;
//
//	ret =s.insert(10);
//	if (ret.second) cout << "第一次查入成功" << endl;
//	else cout << "第二次插入失败" << endl;
//
//	multiset<int> m;
//	m.insert(10);
//	m.insert(10);
//	m.insert(10);
//	for (multiset<int>::iterator it = m.begin(); it != m.end(); it++) cout << *it << " ";
//	cout << endl;
//}
//
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//pair对组创建
//void test(){
//	pair<string, int>p("aa", 18);
//	cout << "name: " << p.first << " age: " << p.second << endl;
//
//	pair<string, int>p1=make_pair("bb",19);
//	cout << "name: " << p1.first << " age: " << p1.second << endl;
//}
//
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//set容器内置类型指定排序
//class Compare{
//public:
//	bool operator()(int v1, int v2){
//		return v1 > v2;
//	}
//};
//
//void test(){
//	set<int, Compare>s;
//	s.insert(10);
//	s.insert(30);
//	s.insert(20);
//	s.insert(50);
//	s.insert(40);
//
//	for (set<int, Compare>::iterator it = s.begin(); it != s.end(); it++) cout << *it << " ";
//	cout << endl;
//}
//
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//set容器自定义数据类型指定排序
//class Person{
//public:
//	int age;
//	string name;
//	Person(string name, int age){
//		this->age = age;
//		this->name = name;
//	}
//};
//
//class Compare{
//public:
//	bool operator()(const Person &p1, const Person &p2){
//		return p1.age>p2.age;
//	}
//};
//
//void test(){
//	set<Person, Compare>s;
//
//		Person p1("aa", 10);
//		Person p2("bb", 10);
//		Person p3("cc", 10);
//		Person p4("dd", 12);
//		Person p5("ee", 12);
//		Person p6("ff", 15);
//		Person p7("gg", 16);
//	s.insert(p1);
//	s.insert(p2);
//	s.insert(p3);
//	s.insert(p4);
//	s.insert(p5);
//	s.insert(p6);
//	s.insert(p7);
//
//	for (set<Person, Compare>::iterator it = s.begin(); it != s.end(); it++) cout << "name: " << (*it).name << " age:" << (*it).age << endl;
//	cout << endl;
//}
//
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//void print(map<int, int>&m){
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//		cout << "key: " << (*it).first << " value: " << it->second << endl;
//	cout << endl;
//}

//map容器构造与赋值
//void test(){
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(4, 40));
//	m.insert(pair<int, int>(2, 20));
//
//	print(m);
//
//	map<int, int>m2(m);
//	print(m);
//
//	map<int, int>m3;
//	m3 = m2;
//	print(m3);
//}
//
//int main(){
//	test();
//	system("pause");
//	return 0;
//}

////map容器大小和交换
//void test(){
//	map<int, int>m;
//
//	if (m.empty()) cout << "empty" << endl;
//	else cout << "Not empty " << "size: " << m.size() << endl;
//
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(3, 30));
//	m.insert(pair<int, int>(4, 40));
//	m.insert(pair<int, int>(2, 20));
//	if (m.empty()) cout << "empty" << endl;
//	else cout << "Not empty " << "size: " << m.size() << endl;
//
//	map<int, int>m2;
//	m2.insert(pair<int, int>(1, 10));
//	m2.insert(pair<int, int>(4, 40));
//	m2.insert(pair<int, int>(2, 20));
//
//	cout << "交换前" << endl;
//	print(m);
//	print(m2);
//
//	m.swap(m2);
//	cout << "交换后" << endl;
//	print(m);
//	print(m2);
//}
//
//int main(){
//	test();
//	system("pause");
//	return 0;
//}

//map插入和删除
//void test(){
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(make_pair(3, 30));
//	m.insert(map<int, int>::value_type(2, 20));
//	m[4] = 40;
//	
//	/*cout << m[5];*/
//	print(m);
//
//	m.erase(m.begin());
//	m.erase(3);
//	print(m);
//
//	m.erase(m.begin(), m.end());//m.clear();
//}
//
//int main(){
//	test();
//	system("pause");
//	return 0;
//}

//map查找和查询
//void test(){
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(make_pair(3, 30));
//	m.insert(map<int, int>::value_type(2, 20));
//	m[4] = 40;
//
//	map<int, int>::iterator it = m.find(2);
//	if (it != m.end()) cout << "key: " << (*it).first << " value: " << (*it).second << endl;
//	else cout << "没找到" << endl;
//
//
//	it = m.find(5);
//	if (it != m.end()) cout << "key: " << (*it).first << " value: " << it->second << endl;
//	else cout << "没找到" << endl;
//
//	int num = m.count(3);
//	cout << "num: " << num << endl;
//
//}
//
//int main(){
//	test();
//	system("pause");
//	return 0;
//}

//map容器排序
//class Compare{
//public:
//	bool operator()(int val1, int val2){
//		return val1 > val2;
//	}
//};
//
//void test(){
//	map<int, int, Compare>m;
//	m.insert(pair<int, int>(1, 10));
//	m.insert(make_pair(3, 30));
//	m.insert(map<int, int>::value_type(2, 20));
//	m[4] = 40;
//
//	for (map<int, int, Compare>::iterator it = m.begin(); it != m.end();it++)
//		cout << "key: " << (*it).first << " value: " << it->second << endl;
//	cout << endl;
//}
//
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//函数对象基本使用
//class Add{
//public:
//	int operator()(int v1, int v2){
//		return v1 + v2;
//	}
//};
//
//class Print{
//	public:
//		Print(){ count = 0; }
//		void operator()(string text){
//			cout << text<<endl;
//			count++;
//		}
//		int count;
//};
//
//void test2(Print & a, string text){
//	a(text);
//}
//
//void test(){
//	Add add;
//	cout << add(10, 20) << endl;
//
//	Print print;
//	print("hello world");
//	print("hello world");
//	print("hello world");
//	print("hello world");
//	cout << "count: " << print.count << endl;
//
//	test2(print, "hello world");
//}

//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//一元谓词
//class FindFive{
//public:
//	bool operator()(int val){
//		return val > 5;
//	}
//};
//
//void test(){
//	vector<int>v;
//	for (int i = 1; i < 10; i++) v.push_back(i);
//	vector<int>::iterator it = find_if(v.begin(), v.end(), FindFive());
//	if (it == v.end()) cout << "Not Found" << endl;
//	else cout << "Position: " << (*it) << endl;
//}
//
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//二元谓词
//class Mycompare{
//public:
//	bool operator()(int val1, int val2){
//		return val1 > val2;
//	}
//};
//
//void test(){
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(50);
//	v.push_back(20);
//	v.push_back(70);
//	v.push_back(30);
//
//	sort(v.begin(), v.end());
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++){
//		cout << (*it) << endl;
//	}
//
//	cout << "----------------------"<<endl;
//
//	sort(v.begin(), v.end(), Mycompare());
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++){
//		cout << (*it) << endl;
//	}
//}
//
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//内建函数对象 算术仿函数
//void test(){
//	negate<int>n;
//	cout << n(50) << endl;
//	plus<int>p;
//	cout << p(10, 20)<< endl;
//	minus<int>m1;
//	cout << m1(10, 20)<< endl;
//	multiplies<int>m2;
//	cout << m2(10, 20)<< endl;
//	divides<int>d;
//	cout << d(10, 20)<< endl;
//	modulus<int>m3;
//	cout << m3(10, 20)<< endl;
//}
//
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//关系仿函数
//	void test(){
//			vector<int> v;
//			v.push_back(10);
//			v.push_back(50);
//			v.push_back(20);
//			v.push_back(70);
//			v.push_back(30);
//	
//			sort(v.begin(), v.end());
//			for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//				cout << (*it) << endl;
//				cout << "----------------------" << endl;
//
//				sort(v.begin(), v.end(),greater<int>());
//				for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//					cout << (*it) << endl;
//}
//	int main(){
//		test();
//
//		system("pause");
//		return 0;
//	}
	
//逻辑仿函数
//void test(){
//	vector<bool>v;
//	v.push_back(true);
//	v.push_back(false);
//	v.push_back(true);
//	v.push_back(false);
//
//	for (vector<bool>::iterator it = v.begin(); it != v.end(); it++)
//		cout << (*it) << endl;
//	cout << "----------------------" << endl;
//
//	vector<bool>v1;
//	v1.resize(v.size());
//	transform(v.begin(), v.end(), v1.begin(), logical_not<int>());
//	for (vector<bool>::iterator it = v1.begin(); it != v1.end(); it++)
//		cout << (*it) << endl;
//}
//
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//常用遍历算法
//class Print{
//public:
//	void operator()(int v){
//		cout << v << " ";
//	}
//};
//
//class Transform{
//public:
//	int operator()(int v){
//		return v + 10;
//	}
//};
//
//void print(int v){
//	cout << v<<" ";
//}
//
//void test(){
//	vector<int>v;
//	for (int i = 0; i < 10; i++) v.push_back(i);
//
//	for_each(v.begin(), v.end(), print);
//	cout << endl;
//	for_each(v.begin(), v.end(), Print());
//	cout << endl;
//
//	vector<int>v1;
//	v1.resize(v.size());
//	transform(v.begin(), v.end(), v1.begin(), Transform());
//	for_each(v1.begin(), v1.end(), Print());
//	cout << endl;
//}
//
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//常用查找算法 find
//class Person{
//	string name;
//	int age;
//public:
//	Person(string name, int age){
//		this->age = age;
//		this->name = name;
//	}
//	bool operator==(const Person &p){
//		if (this->age == p.age&&this->name == p.name) return true;
//		else return false;
//	}
//};
//void test(){
//	vector<int>v;
//	for (int i = 0; i < 10; i++) v.push_back(i);
//	vector<int>::iterator it = find(v.begin(), v.end(), 50);
//	if (it == v.end()) cout << "Not Found" << endl;
//	else cout << "Found" << endl;
//
//	Person p1("aa", 10);
//	Person p2("bb", 20);
//	Person p3("cc", 30);
//	Person p4("dd", 40);
//	Person p5("ee", 50);
//
//	vector<Person>v1;
//	v1.push_back(p1);
//	v1.push_back(p2);
//	v1.push_back(p3);
//	v1.push_back(p4);
//	v1.push_back(p5);
//
//	Person p("dd", 40);
//	vector<Person>::iterator it1 = find(v1.begin(), v1.end(), p);
//	if (it1 == v1.end()) cout << "Not Found" << endl;
//	else cout << "Found" << endl;
//}
//
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//find_if
//class Person{
//public:
//	string name;
//	int age;
//	Person(string name, int age){
//		this->age = age;
//		this->name = name;
//	}
//};
//
//class Compare{
//public:
//	int operator()(int v){
//		return v > 5;
//	}
//};
//
//class _Compare{
//public:
//	bool operator()(const Person & p){
//		if (p.age == 50) return true;
//		else return false;
//	}
//};
//void test(){
//	vector<int>v;
//	for (int i = 0; i < 10; i++) v.push_back(i);
//	vector<int>::iterator it = find_if(v.begin(), v.end(), Compare());
//	if (it == v.end()) cout << "Not Found" << endl;
//	else cout << "Position: " << (*it) << endl;
//
//	Person p1("aa", 10);
//	Person p2("bb", 20);
//	Person p3("cc", 30);
//	Person p4("dd", 40);
//	Person p5("ee", 50);
//
//	vector<Person>v1;
//	v1.push_back(p1);
//	v1.push_back(p2);
//	v1.push_back(p3);
//	v1.push_back(p4);
//	v1.push_back(p5);
//
//	Person p("dd", 40);
//	vector<Person>::iterator it1 = find_if(v1.begin(), v1.end(), _Compare());
//	if (it1 == v1.end()) cout << "Not Found" << endl;
//	else cout << "Name: "<<(*it1).name<<" Age: "<<(*it1).age << endl;
//}
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//adjacent_find
//void test(){
//	vector<int>v;
//	v.push_back(0);
//	v.push_back(1);
//	v.push_back(0);
//	v.push_back(2);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(3);
//	vector<int>::iterator it = adjacent_find(v.begin(), v.end());
//	if (it == v.end()) cout << "Not Found" << endl;
//	else cout << "Element: " << (*it) << endl;
//}
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//binary_search
//void test(){
//	vector<int>v;
//	for (int i = 0; i < 10; i++) v.push_back(i);
//	bool it = binary_search(v.begin(), v.end(),9);
//	if (!it) cout << "Not Found" << endl;
//	else cout << "Found" << endl;
//	v.push_back(7);//需有序
//	bool it1 = binary_search(v.begin(), v.end(), 9);
//	if (!it1) cout << "Not Found" << endl;
//	else cout << "Found" << endl;
//}
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//count
//class Person{
//public:
//	string name;
//	int age;
//	Person(string name, int age){
//		this->age = age;
//		this->name = name;
//	}
//	bool operator==(const Person& p){
//		if (this->age == p.age) return true;
//		else return false;
//	}
//};
//
//void test(){
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(10);
//	v.push_back(10);
//	int num = count(v.begin(), v.end(), 10);
//	cout << "count: " << num << endl;
//
//	Person p1("aa", 10);
//	Person p2("bb", 20);
//	Person p3("cc", 30);
//	Person p4("dd", 40);
//	Person p5("ee", 40);
//
//	vector<Person>v1;
//	v1.push_back(p1);
//	v1.push_back(p2);
//	v1.push_back(p3);
//	v1.push_back(p4);
//	v1.push_back(p5);
//
//	Person p("dd", 40);
//	num= count(v1.begin(), v1.end(),p);
//	cout << "count: " << num << endl;
//}
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//count_if
//class Person{
//public:
//	string name;
//	int age;
//	Person(string name, int age){
//		this->age = age;
//		this->name = name;
//	}
//};
//
//class AgeCompare{
//public:
//	bool operator()(const Person& p){
//		if (p.age>=20) return true;
//		else return false;
//	}
//};
//class Compare{
//public:
//	bool operator()(int v){
//		return v > 20;
//	}
//};
//
//void test(){
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(20);
//	int num = count_if(v.begin(), v.end(), Compare());
//	cout << "count: " << num << endl;
//
//	Person p1("aa", 10);
//	Person p2("bb", 20);
//	Person p3("cc", 30);
//	Person p4("dd", 40);
//	Person p5("ee", 40);
//
//	vector<Person>v1;
//	v1.push_back(p1);
//	v1.push_back(p2);
//	v1.push_back(p3);
//	v1.push_back(p4);
//	v1.push_back(p5);
//
//	num = count_if(v1.begin(), v1.end(), AgeCompare());
//	cout << "count: " << num << endl;
//}
//
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//常用排序算法 sort
//void print(int v){
//	cout << v << " ";
//}
//
//void test(){
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(50);
//	v.push_back(40);
//	v.push_back(20);
//
//	sort(v.begin(), v.end());
//	for_each(v.begin(), v.end(), print);
//	cout << endl;
//
//	sort(v.begin(), v.end(),greater<int>());
//	for_each(v.begin(), v.end(), print);
//	cout << endl;
//}
//
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//random_shuffle
//void print(int v){
//	cout << v << " ";
//}
//
//void test(){
//	srand((unsigned int)time(NULL));
//	vector<int>v;
//	for (int i = 0; i < 10; i++) v.push_back(i);
//	random_shuffle(v.begin(), v.end());
//	for_each(v.begin(), v.end(), print);
//	cout << endl;
//}
//
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//merge
//void print(int v){
//	cout << v << " ";
//}
//
//void test(){
//	vector<int>v;
//	vector<int>v1;
//	vector<int>v2;
//
//	for (int i = 0; i < 10; i++) {
//		v.push_back(i);
//		v1.push_back(i + 1);
//	}
//
//	v2.resize(v.size() + v1.size());
//	merge(v.begin(), v.end(),v1.begin(),v1.end(),v2.begin());
//
//	for_each(v2.begin(), v2.end(), print);
//	cout << endl;
//}
//
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//reverse
//void print(int v){
//	cout << v << " ";
//}
//
//void test(){
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(50);
//	v.push_back(40);
//	v.push_back(30);
//	v.push_back(20);
//
//	cout << "previous: " << endl;
//	for_each(v.begin(), v.end(), print);
//	cout << endl;
//
//	reverse(v.begin(), v.end());
//
//	cout << "later:" << endl;
//	for_each(v.begin(), v.end(), print);
//	cout << endl;
//}
//
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//常用拷贝和替换算法 copy
//void print(int v){
//	cout << v << " ";
//}
//
//void test(){
//	vector<int> v;
//	for (int i = 0; i < 10; i++) v.push_back(i);
//	for_each(v.begin(), v.end(), print);
//	cout << endl;
//
//	vector<int>v1;
//	v1.resize(v.size());
//	copy(v.begin(), v.end(), v1.begin());
//	for_each(v1.begin(), v1.end(), print);
//}
//
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//replace
//class Print{
//public:
//	void operator()(int v){
//		cout << v << " ";
//	}
//};
//
//void test(){
//	vector<int> v;
//	for (int i = 0; i < 10; i++) v.push_back(i);
//	cout << "Previous: ";
//	for_each(v.begin(), v.end(), Print());
//	cout << endl;
//
//	replace(v.begin(), v.end(), 2, 200);
//	cout << "Later: ";
//	for_each(v.begin(), v.end(), Print());
//}
//
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//replace_if
//class Print{
//public:
//	void operator()(int v){
//		cout << v << " ";
//	}
//};
//
//class Greater30{
//public:
//	int operator()(int v){
//		return v >= 3;
//	}
//};
//
//void test(){
//	vector<int> v;
//	for (int i = 0; i < 10; i++) v.push_back(i);
//	cout << "Previous: ";
//	for_each(v.begin(), v.end(), Print());
//	cout << endl;
//
//	replace_if(v.begin(), v.end(), Greater30(), 200);
//	cout << "Later: ";
//	for_each(v.begin(), v.end(), Print());
//}
//
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//swap
//class Print{
//public:
//	void operator()(int v){
//		cout << v << " ";
//	}
//};
//
//void test(){
//	vector<int> v;
//	vector<int> v1;
//	for (int i = 0; i < 10; i++) {
//		v.push_back(i);
//		v1.push_back(i + 100);
//	}
//
//	cout << "Previous: "<<endl;
//	for_each(v.begin(), v.end(), Print());
//	cout << endl;
//	for_each(v1.begin(), v1.end(), Print());
//	cout << endl;
//
//	swap(v, v1);
//	cout << "Later: "<<endl;
//	for_each(v.begin(), v.end(), Print());
//	cout << endl;
//	for_each(v1.begin(), v1.end(), Print());
//}
//
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//常用算术生产算法 accumulate
//void test(){
//	vector<int>v;
//	for (int i = 0; i <= 100; i++) v.push_back(i);
//
//	int total = accumulate(v.begin(), v.end(), 0);//0为初始值
//	cout << "Total: " << total<<endl;
//	total = accumulate(v.begin(), v.end(), 1000);
//	cout << "Total: " << total;
//}
//
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//fill
//void print(int v){
//	cout << v << " ";
//}
//
//void test(){
//	vector<int>v;
//	v.resize(10);
//
//	fill(v.begin(), v.end(), 20);
//	for_each(v.begin(), v.end(), print);
//}
//
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//常用集合算法 set_intersection
//void print(int v){
//	cout << v << " ";
//}
//
//void test(){
//	vector<int>v;
//	vector<int>v1;
//	vector<int>v2;
//	for (int i = 0; i < 10; i++){
//		v.push_back(i);
//		v1.push_back(i + 5);
//	}
//
//	v2.resize(min(v1.size(), v.size()));
//	vector<int>::iterator End = set_intersection(v.begin(), v.end(), v1.begin(), v1.end(), v2.begin());
//	for_each(v2.begin(), End, print);
//	//for_each(v2.begin(), v2.end(), print);
//}
//
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//set_union
//void print(int v){
//	cout << v << " ";
//}
//
//void test(){
//	vector<int>v;
//	vector<int>v1;
//	vector<int>v2;
//	for (int i = 0; i < 10; i++){
//		v.push_back(i);
//		v1.push_back(i + 5);
//	}
//
//	v2.resize(v1.size()+v.size());
//	vector<int>::iterator End = set_union(v.begin(), v.end(), v1.begin(), v1.end(), v2.begin());
//	for_each(v2.begin(), End, print);
//}
//
//int main(){
//	test();
//
//	system("pause");
//	return 0;
//}

//set_difference
void print(int v){
	cout << v << " ";
}

void test(){
	vector<int>v;
	vector<int>v1;
	vector<int>v2;
	for (int i = 0; i < 10; i++){
		v.push_back(i);
		v1.push_back(i + 5);
	}

	v2.resize(v1.size() + v.size());
	vector<int>::iterator End = set_difference(v.begin(), v.end(), v1.begin(), v1.end(), v2.begin());
	for_each(v2.begin(), End, print);
	cout << endl;
	End = set_difference(v1.begin(), v1.end(), v.begin(), v.end(), v2.begin());
	for_each(v2.begin(), End, print);
	cout << endl;
}

int main(){
	test();

	system("pause");
	return 0;
}
#include "pch.h"

int hp;
vector<Thing> backpack;
string name;
int Cnum;

void save();

int main() {
	if (_access(PATH, 0) == -1) {
		firstprint();
		cout << "你的名字：";
		cin >> name;
		hp = 100;
		system("mkdir .\\4627488\\");
		save();
	}
	cout << "正在读档...";
	ifstream f1(PATH);
	f1 >> name >> Cnum >> hp;
	int n;
	f1 >> n;
	for (int i = 0; i < n; i++) {
		bool b1, b2;
		string s1, s2;
		f1 >> b1 >> b2 >> s1 >> s2;
		Thing t(s1, b2, s2, b1);
		backpack.push_back(t);
	}
	cout << "完成";
	for (;;) {
		system("cls");
		everyprint();
		cout << "huxke,go! @ " << name << " -> ";
		string order;
		getline(cin, order);
		if (order == "start game") {
			switch (Cnum)
			{
				case 1: chapterOne(); break;
				default: cout << "游戏还没出，不如来瓶冰阔落休息下。"; break;
			}
		}
		else if (order == "setting") {
			cout << "暂无设置。" << endl;
			cout << "4627488：这绝对是这个游戏里最朴实的一句话了。" << endl;
		}
		system("pause");
	}
	
}

void save() {
	cout << "正在存档...";
	remove(PATH);
	ofstream f1(PATH);
	if (!f1) {
		cout << "4627488: 创建文件失败了，真是匪夷所思..." << endl;
		system("pause");
	}
	f1 << name << endl;
	f1 << Cnum << endl;
	f1 << hp << endl;
	f1 << backpack.size() << endl;
	for (int i = 0; i < backpack.size(); i++) {
		Thing t = backpack[i];
		f1 << t.canTake << endl;
		f1 << t.canUse << endl;
		f1 << t.name << endl;
		f1 << t.tell << endl;
	}
	f1.close(); //关闭文件
	cout << "完成" << endl;
}
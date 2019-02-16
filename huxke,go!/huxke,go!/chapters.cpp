#include "pch.h"


void chapterOne() {
	Room rooms[5];
	rooms[0].name = "机长舱";
	rooms[1].name = "乘客舱";
	rooms[2].name = "机尾舱";
	rooms[3].name = "左翼";
	rooms[4].name = "右翼";
	rooms[0].s = 1;
	rooms[1].n = 0;
	rooms[1].s = 2;
	rooms[1].w = 3;
	rooms[1].e = 4;
	rooms[2].n = 1;
	rooms[3].e = 1;
	rooms[4].w = 1;
	cout << "Chapter 1 : 起因" << endl;
	cout << endl;
	printSlowly("4627488：\"你已经到达了 2A2E 航空管制区域。\"");
	printSlowly("4627488：\"你将在这里执行任务。\"");
	printSlowly("4627488：\"这是 hrbr 上校（鸡块），负责本次侦察行动，有什么要求请找他。\"");
	printSlowly("hrbr 上校：\"你好，"+name+"。\"");
	system("pause");
	printSlowly("hrbr 上校：\"你可以命令侦察队去一些地方。\"");
	printSlowly("hrbr 上校：\"说 go n / go s / go w / go e 分别表示去北/南/西/东 。\"");
	int thisR = 1;
	for(;;) {
		cout << "hrbr 上校：\"你现在在 " << rooms[thisR].name <<"。\""<< endl;
		cout << "hrbr 上校：你可以走的方向有：";
		if (rooms[thisR].e != -1) {
			cout << "e，";
		}
		if (rooms[thisR].w != -1) {
			cout << "w，";
		}
		if (rooms[thisR].s != -1) {
			cout << "s，";
		}
		if (rooms[thisR].n != -1) {
			cout << "n，";
		}
		cout << "\b。\"" << endl;
		cout << name << "：";
		string o;
		cin >> o;
		switch (o[4])
		{
			case 'n':thisR = (rooms[thisR].n == -1) ? thisR : rooms[thisR].n;
			case 's':thisR = (rooms[thisR].s == -1) ? thisR : rooms[thisR].s;
			case 'w':thisR = (rooms[thisR].w == -1) ? thisR : rooms[thisR].w;
			case 'e':thisR = (rooms[thisR].e == -1) ? thisR : rooms[thisR].e;
		}
	}
}
#include "pch.h"


void chapterOne() {
	Room rooms[6];
	rooms[0].name = "机长舱";
	rooms[1].name = "乘客舱";
	rooms[2].name = "机长舱";
	rooms[3].name = "机长舱";
	rooms[4].name = "机长舱";
	cout << "Chapter 1 : 起因" << endl;
	cout << endl;
	printSlowly("4627488：\"你已经到达了 2A2E 航空管制区域。\"");
	printSlowly("4627488：\"你将在这里执行任务。\"");
	printSlowly("4627488：\"这是 hrbr 上校（鸡块），负责本次侦察行动，有什么要求请找他。\"");
	printSlowly("hrbr 上校：\"你好，"+name+"。\"");
	system("pause");

}
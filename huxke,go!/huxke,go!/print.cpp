#include "pch.h"
#define VIS "0.1.013 Beta"
#define DATE "Feb,10.2019"

void distime(int x) {
#ifndef DEBUG
	Sleep(x);
#endif
}

void firstprint() {
	printSlowly("\"呼吸科，站在这里......\"");
	printSlowly("\"不是这，我说的是2A2E......\"");
	printSlowly("\"注意：飞机重心位移。请机组人员手动操控并执行紧急迫降！\"");
	printSlowly("\"注意：飞机左翼温度过高。请立即执行机翼降温作业！\"");
	printSlowly("\"飞机乘客注意：执行紧急迫降作业。请戴好您头顶上的氧气罩。氧气已开始供应。\"");
	system("pause");
	system("cls");
	printSlowly(".......................");
	printSlowly(".......................");
	printSlowly("......\" 蛤？\"....");
	printSlowly("4627488：\"你还活着！\"");
	printSlowly("你：\"...\"");
	printSlowly("4627488：\"你竟然还活着！\"");
	printSlowly("你：\"...\"");
	printSlowly("4627488：\"咳...你被派往飞机残骸现场搜集线索。\"");
	printSlowly("你：\"我？\"");
	printSlowly("4627488：\"对，你。\"");
	printSlowly("你：\"为什么？\"");
	printSlowly("4627488：\"因为你是这次飞机失事后唯一活下来的人。\"");
	printSlowly("你：\"？？？！\"");
	printSlowly("4627488：\"我知道这很扯，（因为这是我编的）但事实就是这样。\"");
	printSlowly("你：\"我活着就让我去？\"");
	printSlowly("4627488：\"对呀，你要不去游戏咋往下写呀？\"");
	printSlowly("于是你光荣地前往现场...");
	system("pause");
	system("cls");
}

void everyprint() {
	cout << "欢迎回来，" << name << "。" << endl;
	cout << "当前版本为 " << VIS << " 发布于 " << DATE << "。" << endl;
	cout << "存档无损坏，程序正常运行。可以开始游戏。" << endl;
	cout << "输入 start game 开始游戏。输入 setting 打开设置。按右上角的红色按钮关闭（对就是他）。" << endl;
}

void printSlowly(string str) {
	for (int i = 0; i < str.length(); i++) {
		cout << str[i];
		distime(40);
	}
	for (int i = 0; i <= str.length() / 10;i++) {
		distime(700);
	}
	cout << endl;
}
#include "pch.h"
#define VIS "0.1.013 Beta"
#define DATE "Feb,10.2019"

void distime(int x) {
#ifndef DEBUG
	Sleep(x);
#endif
}

void firstprint() {
	printSlowly("\"�����ƣ�վ������......\"");
	printSlowly("\"�����⣬��˵����2A2E......\"");
	printSlowly("\"ע�⣺�ɻ�����λ�ơ��������Ա�ֶ��ٿز�ִ�н����Ƚ���\"");
	printSlowly("\"ע�⣺�ɻ������¶ȹ��ߡ�������ִ�л�������ҵ��\"");
	printSlowly("\"�ɻ��˿�ע�⣺ִ�н����Ƚ���ҵ���������ͷ���ϵ������֡������ѿ�ʼ��Ӧ��\"");
	system("pause");
	system("cls");
	printSlowly(".......................");
	printSlowly(".......................");
	printSlowly("......\" ��\"....");
	printSlowly("4627488��\"�㻹���ţ�\"");
	printSlowly("�㣺\"...\"");
	printSlowly("4627488��\"�㾹Ȼ�����ţ�\"");
	printSlowly("�㣺\"...\"");
	printSlowly("4627488��\"��...�㱻�����ɻ��к��ֳ��Ѽ�������\"");
	printSlowly("�㣺\"�ң�\"");
	printSlowly("4627488��\"�ԣ��㡣\"");
	printSlowly("�㣺\"Ϊʲô��\"");
	printSlowly("4627488��\"��Ϊ������ηɻ�ʧ�º�Ψһ���������ˡ�\"");
	printSlowly("�㣺\"��������\"");
	printSlowly("4627488��\"��֪����ܳ�������Ϊ�����ұ�ģ�����ʵ����������\"");
	printSlowly("�㣺\"�һ��ž�����ȥ��\"");
	printSlowly("4627488��\"��ѽ����Ҫ��ȥ��Ϸզ����дѽ��\"");
	printSlowly("��������ٵ�ǰ���ֳ�...");
	system("pause");
	system("cls");
}

void everyprint() {
	cout << "��ӭ������" << name << "��" << endl;
	cout << "��ǰ�汾Ϊ " << VIS << " ������ " << DATE << "��" << endl;
	cout << "�浵���𻵣������������С����Կ�ʼ��Ϸ��" << endl;
	cout << "���� start game ��ʼ��Ϸ������ setting �����á������Ͻǵĺ�ɫ��ť�رգ��Ծ���������" << endl;
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
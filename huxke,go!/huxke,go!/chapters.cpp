#include "pch.h"


void chapterOne() {
	Room rooms[5];
	rooms[0].name = "������";
	rooms[1].name = "�˿Ͳ�";
	rooms[2].name = "��β��";
	rooms[3].name = "����";
	rooms[4].name = "����";
	rooms[0].s = 1;
	rooms[1].n = 0;
	rooms[1].s = 2;
	rooms[1].w = 3;
	rooms[1].e = 4;
	rooms[2].n = 1;
	rooms[3].e = 1;
	rooms[4].w = 1;
	cout << "Chapter 1 : ����" << endl;
	cout << endl;
	printSlowly("4627488��\"���Ѿ������� 2A2E ���չ�������\"");
	printSlowly("4627488��\"�㽫������ִ������\"");
	printSlowly("4627488��\"���� hrbr ��У�����飩�����𱾴�����ж�����ʲôҪ����������\"");
	printSlowly("hrbr ��У��\"��ã�"+name+"��\"");
	system("pause");
	printSlowly("hrbr ��У��\"�������������ȥһЩ�ط���\"");
	printSlowly("hrbr ��У��\"˵ go n / go s / go w / go e �ֱ��ʾȥ��/��/��/�� ��\"");
	int thisR = 1;
	for(;;) {
		cout << "hrbr ��У��\"�������� " << rooms[thisR].name <<"��\""<< endl;
		cout << "hrbr ��У��������ߵķ����У�";
		if (rooms[thisR].e != -1) {
			cout << "e��";
		}
		if (rooms[thisR].w != -1) {
			cout << "w��";
		}
		if (rooms[thisR].s != -1) {
			cout << "s��";
		}
		if (rooms[thisR].n != -1) {
			cout << "n��";
		}
		cout << "\b��\"" << endl;
		cout << name << "��";
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
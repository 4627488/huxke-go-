#ifndef PCH_H
#define PCH_H
#define DEBUG

//预编译标头
using namespace std;

#define PATH ".\\4627488\\huxke_go_data.log"
#include <Windows.h>
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <io.h>
#include<iomanip>
#include<fstream>
#include "print.h"
#include "chapters.h"
#include<cstdio>

struct Thing {
	string name;
	bool canUse;
	bool canTake;
	string tell;

	Thing(string name0, bool canUse0, string tell0, bool canTake0) {
		name = name0;
		canUse = canUse0;
		tell = tell0;
		canTake = canTake0;
	}

	Thing operator =(const Thing t)const {
		Thing tt(t.name, t.canUse, t.tell, t.canTake);
	}
};

struct Room {
	string name;
	int n, s, w, e;
};

extern int hp;
extern vector<Thing> backpack;
extern string name;
extern int Cnum;


#endif //PCH_H


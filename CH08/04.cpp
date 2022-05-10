#include <iostream>
#include <cstring>

using namespace std;

struct stringy{
	char* str;
	int ct;
};

void set(stringy & str, const char * ch);
void show(const char * ch, int times = 1);
void show(const stringy & str, int times = 1);

int main()
{
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";

	set(beany, testing);
	int n = strlen(testing);
	char* p1 = new char[n + 1];
	show(beany);
	show(beany,2);
	delete[]beany.str;
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Done!");
    // cout << testing << endl;
	
	return 0;
}

void set(stringy & str, const char * ch){
    int count = strlen(ch);
    str.str = new char[count + 1];
    strcpy(str.str, ch);
    str.ct = count;
}

void show(const char * ch, int times){
    for(int i = 0; i < times; i++){
        cout << ch << endl;
    }
}

void show(const stringy & str, int times){
    for(int i = 0; i < times; i++){
        cout << str.str << endl;
    }
}
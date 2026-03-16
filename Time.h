#include <iostream>
#include <iomanip>

using namespace std;

struct Time{
	int m,h,s;
};


// create 3 functions

// 1.  getTime function
// 2. subtract fuctions
// 3. display functions

void getTime(struct Time& t){
	cout<<"Input Time(h m s): ";
	cin>>t.h>>t.m>>t.s;
}

struct Time subtract(struct Time t2, struct Time t1){
	struct Time result;
	result.h = t2.h - t1.h;
	result.m = t2.m - t1.m;
	result.s = t2.s - t1.s;

	if(result.s < 0){
		result.s += 60;
		result.m--;
	}
	if(result.m < 0){
		result.m += 60;
		result.h--;
	}
	return result;
}

void display(struct Time t){
	cout << setfill('0') << setw(2) << t.h << ":" << setw(2) << t.m << ":" << setw(2) << t.s << endl;
}
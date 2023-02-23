#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *R1, Rect *R2){
	double x = min((R1->x+R1->w),(R2->x+R2->w))-max(R1->x,R2->x);
	double y = min((R1->y+R1->h),(R2->y+R2->h))-(R2->y);
	if(x>0 && y>0){
		return x*y;
	}else{
		return 0;
	}
}

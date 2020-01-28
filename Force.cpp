#include "Force.h"
#include <iostream>
using namespace std;
Force::Force():fx(0),fy(0)
{
}

Force::~Force()
{
}

Force Force::operator+(Force const f)
{
//	cout<<"in +"<<endl;cout<<fx<<"  "<<fy<<endl;
	this->fx=this->fx+f.fx;
	this->fy=this->fy+f.fy;
//	cout<<fx<<"  "<<fy<<endl;
	return *this;
}

void Force::clean()
{
	fx=0;
	fy=0;
}

//void Force::operator=(Force const obj)
//{
//	cout<<"in ="<<endl;
//	this->fx=obj.fx;
//	this->fy=obj.fy;
//	getforce();
//}

void Force::getforce()
{
	Force *p=this;
	cout<<"fx:"<<this->fx<<"   "<<"fy:"<<this->fy<<"  "<<"this:"<<p<<endl;
}

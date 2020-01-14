#include "Planet.h"
#include "SpaceTime.h"
#include <math.h>
Planet::Planet():fm(0),x(0),y(0),Vx(0),Vy(0)
{
	cout<<"请用户输入星球信息：质量，坐标，初速度:\n";
	putmv();
	cout<<"对象创建成功"<<endl;  
}

Planet::~Planet()
{
	cout<<"对象析构成功"<<endl; 
}

void Planet::putmv()
{
	cout<<"请输入星球名字:";cin>>name; 
	cout<<"请输入质量:";cin>>fm;
	cout<<"请输入坐标:";cin>>x>>y;
	cout<<"请输入速度向量:";cin>>Vx>>Vy;
}

string Planet::sGetname()
{
	cout<<"星球名字是"<<name<<endl;
} 

Force Planet::operator&(Planet const &obj)
{
	Force tmp;
	tmp.fx=G*fm*obj.fm/pow((pow((x-obj.x),2)+pow((y-obj.y),2)),2)*(obj.x-x);
	tmp.fy=G*fm*obj.fm/pow((pow((x-obj.x),2)+pow((y-obj.y),2)),2)*(obj.y-y);
	return tmp;
//	return G*fm*obj.fm/pow((x-obj.x),2)+pow((y-obj.y),2);
}

#include "Planet.h"
#include "SpaceTime.h"
#include <math.h>
Planet::Planet():m(0),x(0),y(0),Vx(0),Vy(0)
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
	cout<<"请输入质量:";cin>>m;
	cout<<"请输入坐标:";cin>>x>>y;
	cout<<"请输入速度向量:";cin>>Vx>>Vy;
}

void Planet::sGetname()
{
	cout<<"星球名字是"<<name<<endl;
} 

Force Planet::operator&(Planet const &obj)
{
//	if(x-obj.x==0||y-obj.y==0)//exception handing
//	{
//		throw this;
//	}
	Force tmp;
	tmp.fx=G*m*obj.m/((pow((x-obj.x),2)+pow((y-obj.y),2))*sqrt((pow((x-obj.x),2)+pow((y-obj.y),2))))*(obj.x-x);//力的x分量 
	tmp.fy=G*m*obj.m/((pow((x-obj.x),2)+pow((y-obj.y),2))*sqrt((pow((x-obj.x),2)+pow((y-obj.y),2))))*(obj.y-y);//力的y分量 
	return tmp;
//	return G*m*obj.m/pow((x-obj.x),2)+pow((y-obj.y),2);
}

void Planet::fMove(double const dt)
{
	x+=Vx*dt+(F.fx/m)*pow(dt,2)/2;
	y+=Vy*dt+(F.fy/m)*pow(dt,2)/2;
	Vx+=(F.fx/m)*dt;
	Vy+=(F.fy/m)*dt;
}

void Planet::getmsg()
{
	sGetname(); 
	cout<<"横坐标："<<x<<"    "<<"纵坐标："<<y<<"\n\n\n"<<"速度x分量:"<<Vx<<"    "<<"速度y分量"<<Vy<<"\n\n"<<endl;
}

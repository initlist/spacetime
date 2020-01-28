#include "Planet.h"
#include "SpaceTime.h"
#include <math.h>
Planet::Planet():m(0),x(0),y(0),Vx(0),Vy(0)
{
	cout<<"���û�����������Ϣ�����������꣬���ٶ�:\n";
	putmv();
	cout<<"���󴴽��ɹ�"<<endl;  
}

Planet::~Planet()
{
	cout<<"���������ɹ�"<<endl; 
}

void Planet::putmv()
{
	cout<<"��������������:";cin>>name; 
	cout<<"����������:";cin>>m;
	cout<<"����������:";cin>>x>>y;
	cout<<"�������ٶ�����:";cin>>Vx>>Vy;
}

void Planet::sGetname()
{
	cout<<"����������"<<name<<endl;
} 

Force Planet::operator&(Planet const &obj)
{
//	if(x-obj.x==0||y-obj.y==0)//exception handing
//	{
//		throw this;
//	}
	Force tmp;
	tmp.fx=G*m*obj.m/((pow((x-obj.x),2)+pow((y-obj.y),2))*sqrt((pow((x-obj.x),2)+pow((y-obj.y),2))))*(obj.x-x);//����x���� 
	tmp.fy=G*m*obj.m/((pow((x-obj.x),2)+pow((y-obj.y),2))*sqrt((pow((x-obj.x),2)+pow((y-obj.y),2))))*(obj.y-y);//����y���� 
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
	cout<<"�����꣺"<<x<<"    "<<"�����꣺"<<y<<"\n\n\n"<<"�ٶ�x����:"<<Vx<<"    "<<"�ٶ�y����"<<Vy<<"\n\n"<<endl;
}

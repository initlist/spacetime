#include "Planet.h"
#include "SpaceTime.h"
#include <math.h>
Planet::Planet():fm(0),x(0),y(0),Vx(0),Vy(0)
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
	cout<<"����������:";cin>>fm;
	cout<<"����������:";cin>>x>>y;
	cout<<"�������ٶ�����:";cin>>Vx>>Vy;
}

string Planet::sGetname()
{
	cout<<"����������"<<name<<endl;
} 

Force Planet::operator&(Planet const &obj)
{
	Force tmp;
	tmp.fx=G*fm*obj.fm/pow((pow((x-obj.x),2)+pow((y-obj.y),2)),2)*(obj.x-x);
	tmp.fy=G*fm*obj.fm/pow((pow((x-obj.x),2)+pow((y-obj.y),2)),2)*(obj.y-y);
	return tmp;
//	return G*fm*obj.fm/pow((x-obj.x),2)+pow((y-obj.y),2);
}

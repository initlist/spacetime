#ifndef PLANET_H
#define PLANET_H
#include "Force.h"
#include<iostream>
class SpaceTime;
using namespace std;
class Planet
{
	public:
		Planet();//构造 
		~Planet();//析构 ;
		friend class SpaceTime;
		void putmv();//用户输入质量,速度,坐标的接口 
		Force operator&(Planet const &);//计算两个星球之间的力 
		float fForce(float);//受力 
		void fMove(double const);//接受运动指令就是时间,时间由时空发出
		void sGetname();
		void getmsg();
	protected:
		Force F;
		string name;
		double m;//质量
		double Vx,dVx;//x分量和微分 
		double Vy,dVy;//y分量和微分 
		double x,dx;//横坐标和微分 
		double y,dy;//纵坐标和微分 
};

#endif

#ifndef PLANET_H
#define PLANET_H
#include "Force.h"
#include<iostream>
class SpaceTime;
using namespace std;
class Planet
{
	public:
		Planet();//���� 
		~Planet();//���� ;
		friend class SpaceTime;
		void putmv();//�û���������,�ٶ�,����Ľӿ� 
		Force operator&(Planet const &);//������������֮����� 
		float fForce(float);//���� 
		void fMove(double const);//�����˶�ָ�����ʱ��,ʱ����ʱ�շ���
		void sGetname();
		void getmsg();
	protected:
		Force F;
		string name;
		double m;//����
		double Vx,dVx;//x������΢�� 
		double Vy,dVy;//y������΢�� 
		double x,dx;//�������΢�� 
		double y,dy;//�������΢�� 
};

#endif

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
		float fMove(float);//�����˶�ָ�����ʱ��ʱ����ʱ�շ���
		string sGetname();
	protected:
		Force F;
		string name;
		double fm;//����
		double Vx,dVx;//x������΢�� 
		double Vy,dVy;//y������΢�� 
		double x,dx;//�������΢�� 
		double y,dy;//�������΢�� 
};

#endif

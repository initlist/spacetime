#ifndef SPACETIME_H
#define SPACETIME_H
const double G=6.67259e-11;
class Planet;
class SpaceTime//ʱ�ո��𴫵���Ϣ��ʱ�䣬�������룩 �ռ���Լ��������ǣ�0��0���������ģ����Ե����ο�ϵ 
{
	public:
		SpaceTime();
		~SpaceTime();
		void putdt();
		void dTimeFly(double &,double const,int);//ʱ��ݽ� 
		void Force();//�������ļ��� :���㵱ǰ�ռ���ĳ�������ܵ��ĺ��� 
		void play(); 
		friend class Planet;
	protected:
		Planet *pPlanet;//���ڶ�ȡ�������Ϣ 
		int icounter;//��������¼��������� 
		double t,dt;//ʱ���΢�֣���λ�룩
};

#endif

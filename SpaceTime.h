#ifndef SPACETIME_H
#define SPACETIME_H
const double G=6.67259e-11;
class Planet;
class SpaceTime//时空负责传递信息（时间，力，距离） 空间的自己的坐标是（0，0）是隐含的，可以当作参考系 
{
	public:
		SpaceTime();
		~SpaceTime();
		void putdt();
		void dTimeFly(double &,double const,int);//时间递进 
		void Force();//作用力的计算 :计算当前空间下某个星球受到的合力 
		void play(); 
		friend class Planet;
	protected:
		Planet *pPlanet;//用于读取星球的信息 
		int icounter;//计数器记录星球颗数； 
		double t,dt;//时间和微分（单位秒）
};

#endif

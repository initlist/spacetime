#include "SpaceTime.h"
#include "Planet.h"
#include <math.h> 
#include <iostream>
using namespace std;
SpaceTime::SpaceTime():dt(0),t(0), icounter(0)
{
	cout<<"请输入星球的个数:"; 
	cin>>icounter;
	pPlanet=new Planet[icounter];//通过new同时完成创建星球对象和利用星球指针 
	
}

SpaceTime::~SpaceTime()
{
	delete[] pPlanet;
}

void SpaceTime::putdt()
{
	cout<<"请输入时间流逝间隔:(秒)"; 
	cin>>dt;
	cout<<" s";
}

void SpaceTime::Force()
{
	int i(icounter),j(icounter);
	for(j;j>0;j--)
	{
		pPlanet[j-1].F.clean();
	}
	for(i;i>0;i--)//用于调用当前所需要计算力的星球地址 
	{
		int tmp(0);//用于调用其他星球的地址 
		while(tmp<=icounter-1)
		{
			if(tmp==(i-1))
			{
				tmp++;
				continue;
			}
//			try{
				pPlanet[i-1].F=pPlanet[i-1].F+(pPlanet[i-1]&pPlanet[tmp]);
//			}
//			catch (Planet *p)
//			{
//				cout<<p<<endl;
//				
//			}
			
			tmp++;
		}
//		cout<<pPlanet[i-1].name<<endl;
//		pPlanet[i-1].F.getforce();
		
	}
}

void SpaceTime::dTimeFly(double &t,double const dt,int n)
{
	while(t<n)
	{	
		Force();
		int i(icounter);
		while(i-1>=0)
		{
			pPlanet[i-1].fMove(dt);
			i--;
		}
		t+=dt;
	}
}

void SpaceTime::play()
{
	tip: 
	int n;
	cout<<"请输入运行的时间"<<endl;
	cin>>n;
	putdt();
//	Force();
	dTimeFly(t,dt,n);
	for(int i(icounter);i>0;i--)
	pPlanet[i-1].getmsg();
	cout<<"最终地月距离："<<sqrt(pow(pPlanet[1].x-pPlanet[0].x,2)+ pow(pPlanet[1].y-pPlanet[0].y,2))<<endl;
}

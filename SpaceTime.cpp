#include "SpaceTime.h"
#include "Planet.h"
#include <iostream>
using namespace std;
SpaceTime::SpaceTime()
{
	cout<<"请输入星球的个数:"; 
	cin>>icounter;
	pPlanet=new Planet[icounter];
	
}

SpaceTime::~SpaceTime()
{
	delete[] pPlanet;
}

void SpaceTime::putdt()
{
	cin>>dt;
}

double SpaceTime::dTimeFly(double &t,double const dt,int n)
{
	while(t<n)
	{
		t=t+dt;
	}
}

void SpaceTime::Force()
{
	int i(icounter);
	for(i;i>0;i--)
	{
		int tmp(0);
		while(1)
		{
			if(tmp>icounter-1)
			{
				break;
			}
			pPlanet[i-1].F=pPlanet[i-1].F+(pPlanet[i-1]&pPlanet[tmp]);
			tmp++;
		}
	}
}

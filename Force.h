#ifndef FORCE_H
#define FORCE_H

class Force
{
	public:
		friend class Planet;
		Force();
		~Force();
		Force operator+(Force const &);
	protected:
		double fx;
		double fy;
		
};

#endif

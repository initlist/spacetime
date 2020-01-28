#ifndef FORCE_H
#define FORCE_H

class Force
{
	public:
		friend class Planet;
		Force();
		~Force();
		void getforce();
		Force operator+(Force const );
//		void operator=(Force const );
		void clean();
	protected:
		double fx;
		double fy;
		
};

#endif

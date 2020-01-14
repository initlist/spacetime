#include "Force.h"

Force::Force():fx(0),fy(0)
{
}

Force::~Force()
{
}

Force Force::operator+(Force const &f)
{
	fx=fx+f.fx;
	fy=fy+f.fy;
}

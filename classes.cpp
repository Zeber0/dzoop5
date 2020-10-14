#include "classes.h"
Kladovshikov::~Kladovshikov()
{
}

Kladovshikov_child::Kladovshikov_child()
{
	*a = 1;
}

Kladovshikov_child* Kladovshikov_child::Copy()
{
	return new Kladovshikov_child(*this);
}

Kladovshikov_child::Kladovshikov_child(const Kladovshikov_child& obj)
{
	*a = *obj.a;
}

Kladovshikov_child::~Kladovshikov_child()
{
	delete a;
}


Kladovshikov_child_child::Kladovshikov_child_child()
{
	b = 1.11;
}

Kladovshikov_child_child* Kladovshikov_child_child::Copy()
{
	return new Kladovshikov_child_child(*this);
}

Kladovshikov_child_child::Kladovshikov_child_child(const Kladovshikov_child_child& obj)
{
	float b; b = obj.b;
}

Kladovshikov_child_child::~Kladovshikov_child_child()
{
}

Kladovshikov_child_child_child::Kladovshikov_child_child_child()
{
	for (int i = 0; i < 10; i++) { c[i] = '3'; }
}

Kladovshikov_child_child_child* Kladovshikov_child_child_child::Copy()
{
	return new Kladovshikov_child_child_child(*this);
}

Kladovshikov_child_child_child::Kladovshikov_child_child_child(const Kladovshikov_child_child_child& obj)
{
	char ch[10];
	for (int i = 0; i < 10; i++) {
		ch[i] = obj.c[i];
	}
}

Kladovshikov_child_child_child::~Kladovshikov_child_child_child()
{
}

DB::DB()
{
	for (int i = 0; i < 3; i++)
	{
		l.push_back(new Kladovshikov_child());
		l.push_back(new Kladovshikov_child_child());
		l.push_back(new Kladovshikov_child_child_child());
	}
}

DB* DB::Copy()
{
	return new DB(*this);
}

DB::DB(const DB& obj)
{
	for (Kladovshikov* n : obj.l)
	{
		l.push_back(n->Copy());
	}
}

DB::~DB()
{
	for (Kladovshikov* n : l) { delete n; }
}

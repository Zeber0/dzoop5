#pragma once
#include <iostream>
#include <list>
using namespace std;
class Kladovshikov
{
public:
	virtual Kladovshikov* Copy() = 0;
	virtual ~Kladovshikov();
};
class Kladovshikov_child :public Kladovshikov {
public:
	int* a = new int;
	Kladovshikov_child() ;
	virtual Kladovshikov_child* Copy();
	Kladovshikov_child(const Kladovshikov_child& obj);
	virtual ~Kladovshikov_child();
};
class Kladovshikov_child_child :public Kladovshikov_child
{
public:

	float b;
	Kladovshikov_child_child();
	virtual Kladovshikov_child_child* Copy();
	Kladovshikov_child_child(const Kladovshikov_child_child& obj);
	virtual ~Kladovshikov_child_child();
};
class Kladovshikov_child_child_child : public Kladovshikov_child_child
{
public:

	char c[10];
	Kladovshikov_child_child_child();
	Kladovshikov_child_child_child* Copy();
	Kladovshikov_child_child_child(const Kladovshikov_child_child_child& obj);
	~Kladovshikov_child_child_child();
};
class DB
{
private:
	list<Kladovshikov*> l;
public:
	DB();
	DB* Copy();
	DB(const DB& obj);
	~DB();
};
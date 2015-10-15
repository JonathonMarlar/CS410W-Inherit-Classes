#include <iostream>
using namespace std;

class Pair
{
	protected:
		int x;
		int y;
	
	public:
		Pair();
		Pair(int, int);
		bool SetX(int);
		bool SetY(int);
		bool Set(int, int);
		int GetX();
		int GetY();
		void Print();
};

Pair::Pair()
{
	x = 0;
	y = 0;
}

Pair::Pair(int m, int n)
{
	x = m;
	y = n;
}

bool Pair::SetX(int n)
{
	x = n;
	return true;
}

bool Pair::SetY(int n)
{
	y = n;
	return true;
}

bool Pair::Set(int m, int n)
{
	SetX(m);
	SetY(n);
}

int Pair::GetX()
{
	return x;
}

int Pair::GetY()
{
	return y;
}

void Pair::Print()
{
	cout << "X: " << x << endl;
	cout << "Y: " << y << endl;
}

class Triple : public Pair
{
	protected:
		int z;
	
	public:
		Triple();
		Triple(int, int, int);
		bool SetZ(int);
		int GetZ();
		bool Set(int, int, int);
		void Print();
};

Triple::Triple()
{
	Pair();
	z = 0;
}

Triple::Triple(int m, int n, int o)
{
	SetX(m);
	SetY(n);
	z = o;
}

bool Triple::SetZ(int n)
{
	z = n;
	return true;
}

int Triple::GetZ()
{
	return z;
}

bool Triple::Set(int m, int n, int o)
{
	SetX(m);
	SetY(n);
	z = 0;
	return true;
}

void Triple::Print()
{
	cout << "X: " << x << endl;
	cout << "Y: " << y << endl;
	cout << "Z: " << z << endl;
}

class Quad : public Triple
{
	protected:
		int w;
	
	public:
		Quad();
		Quad(int, int, int, int);
		bool SetW(int);
		int GetW();
		bool Set(int, int, int, int);
		void Print();
};

Quad::Quad()
{
	Triple();
	w = 0;
}

Quad::Quad(int m, int n, int o, int p)
{
	SetX(m);
	SetY(n);
	SetZ(o);
	w = p;
}

bool Quad::SetW(int n)
{
	w = n;
	return true;
}

int Quad::GetW()
{
	return w;
}

bool Quad::Set(int m, int n, int o, int p)
{
	SetX(m);
	SetY(n);
	SetZ(o);
	w = p;
	return true;
}

void Quad::Print()
{
	cout << "X: " << x << endl;
	cout << "Y: " << y << endl;
	cout << "Z: " << z << endl;
	cout << "W: " << w << endl;
}

int main()
{
	Pair* list[5];
	list[0] = new Pair(1, 2);
	list[1] = new Triple(3, 19, 5);
	list[2] = new Quad(1, 0, 1, 0);
	list[3] = new Pair(100, 1000);
	list[4] = new Quad();
	
	for (int i = 0; i < 5; i++)
	{
		cout << "Initial List [" << i << "]:" << endl;
		list[i]->Print();
		
		list[i]->SetX(9000);
		list[i]->SetY(10);
		
		int v = list[i]->GetX();
		int q = list[i]->GetY();
		
		cout << "Edited List [" << i << "]:" << endl;
		list[i]->Print();
	}
	
	/*
	cout << "Pairs:" << endl;
	
	for (int i = 0; i < 5; i++)
	{
		cout << "List " << i << ": " << endl;
		list[i]->Print();
		cout << endl;
		list[i]->Set(10, 10);
		list[i]->Print();
		cout << endl;
	}
	
	Triple* tList[5];
	tList[0] = new Triple(1, 2, 4);
	tList[1] = new Triple(23, 19, 2);
	tList[2] = new Triple(1, 0, 1);
	tList[3] = new Triple(10, 100, 1000);
	tList[4] = new Triple(80, 5, 90);
	
	cout << "Triples:" << endl;
	
	for (int i = 0; i < 5; i++)
	{
		cout << "List " << i << ": " << endl;
		tList[i]->Print();
		cout << endl;
		tList[i]->Set(10, 10, 10);
		tList[i]->Print();
		cout << endl;
	}
	
	Quad* qList[5];
	qList[0] = new Quad(1, 2, 4, 5);
	qList[1] = new Quad(1, 19, 2, 9);
	qList[2] = new Quad(1, 0, 1, 0);
	qList[3] = new Quad(10, 100, 1000, 10000);
	qList[4] = new Quad(10, 5, 1, 0);
	
	cout << "Quads:" << endl;
	
	for (int i = 0; i < 5; i++)
	{
		cout << "List " << i << ": " << endl;
		qList[i]->Print();
		cout << endl;
		qList[i]->Set(10, 10, 10, 10);
		qList[i]->Print();
		cout << endl;
	}
	*/
	
	return 0;
}
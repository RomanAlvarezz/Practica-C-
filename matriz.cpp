#include<iostream>
#include"matriz.h"

using namespace std;

template<class T>
matriz<T>::matriz(const matriz &mm) {
	xmax=mm.xmax; ymax=mm.ymax;
	m=new T*[mm.xmax];
	for(int i=0; i<mm.xmax; i++) {
		m[i]=new T[mm.ymax];
		for(int j=0; j<ymax; j++)
			m[i][j]=mm.m[i][j];
	}
}

template<class T>
matriz<T>::matriz(unsigned xmax, unsigned ymax): xmax(xmax), ymax(ymax) {
	m=new T*[xmax];
	for(int i=0; i<xmax; i++)
		m[i]=new T[ymax];
}

template<class T>
matriz<T>::~matriz() {
		for(int i=0; i<xmax; i++)
			delete[] m[i];
		delete[] m;
}

template<class U> ostream &operator<<(ostream &o, matriz<U> &m)
{
	o<<"[";
	for(int i=0; i<m.maxx(); i++) {
		o<<"[";
		for(int j=0; j<m.maxy(); j++)
			o<<m[i][j]<<' ';
		o<<"]\n";
	}
	o<<"]";
	return o;
}

void f(matriz<int> x)
{
	cout<<x<<'\n';
	x[5][5]=123;
	cout<<x<<'\n';
}

int main()
{
	matriz<int> a(10, 10);
	matriz<char> c(10, 10);
	int i, j;
	for(i=0; i<10; i++)
		for(j=0; j<10; j++) {
			a[i][j]=i+j;
			c[i][j]='A'+i+j;
		}
	f(a);
	cout<<a<<'\n';
	cout<<c<<'\n';
	return 0;
}

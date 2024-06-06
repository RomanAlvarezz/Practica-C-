#ifndef __MATRIZ_H
#define __MATRIZ_H

template<class T> 
class matriz {
	T **m;
	unsigned xmax, ymax;
public:
	matriz(const matriz &mm);
	matriz(unsigned xmax, unsigned ymax);
	~matriz();
	unsigned maxx() const { return xmax; }
	unsigned maxy() const { return ymax; }
	template<class U> friend ostream &operator<<(ostream &o, matriz<U> &m);
	T *operator[](unsigned y) const { return m[y]; }

}
;
#endif

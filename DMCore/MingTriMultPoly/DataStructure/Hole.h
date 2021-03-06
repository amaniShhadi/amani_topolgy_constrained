// 
// Hole class
// 
#ifndef _HOLE_H_
#define _HOLE_H_

#include <cmath>
#include <vector>
#include <string>
#include <sstream>
#include <time.h>
#include "SubKey.h"
#include "../Utility/Configure.h"

class Hole {
public:
	std::vector<int> curves;

	Hole(){
	}
	Hole(Hole const & other){
		curves = other.curves;
	}
	Hole(std::vector<int> v){
		curves = v;
	}
	~Hole(){}
	Hole & operator=(Hole & H);
	int size(){
		return (int)curves.size();
	}
	int find(int ci);
	std::vector<std::pair<Hole,Hole>> partition();

	int countBit(__int64_t bit, int n);
	void getSubKey(SubKey<MAXK> & sk);

    inline void append(int item){
		curves.push_back(item);
	}
    inline void erase(int hInd){
		if (hInd<0) return;
		curves.erase(curves.begin()+hInd);
	}
    inline bool isEmpty(){
		return curves.empty();
	}
};


#endif

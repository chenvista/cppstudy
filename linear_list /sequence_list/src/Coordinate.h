/*
 * Coordinate.h
 *
 *  Created on: Mar 4, 2017
 *      Author: ryan
 */

#ifndef COORDINATE_H_
#define COORDINATE_H_

#include <ostream>
using namespace std;

class Coordinate {

friend ostream &operator<<(ostream &out,Coordinate &coor);
public:
	Coordinate(int x=0,int y=0);
	void printCoordinate();
	bool operator==(Coordinate &coor);
private:
	int m_iX;
	int m_iY;
};

#endif /* COORDINATE_H_ */

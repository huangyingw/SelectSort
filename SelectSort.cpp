#include "stdafx.h"
#include<iostream>
using namespace std;
#include "SelectSort.h"


void main() 
{
	SelectSort<int>* selectSort=new SelectSort<int>(8);
	selectSort->data[0]=8;
	selectSort->data[1]=2;
	selectSort->data[2]=1;
	selectSort->data[3]=3;
	selectSort->data[4]=5;
	selectSort->data[5]=4;
	selectSort->data[6]=6;
	selectSort->data[7]=7;
	selectSort->Sort();
	selectSort->Print();
}

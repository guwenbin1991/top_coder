#include <string>
#include <iostream>
#include <vector>

using namespace std;
struct commody
{
	string name;
	int num;
	float price;
	bool is_discount;
};

struct commody_list
{
	string name;
	float price;
	int num;
	bool is_discount;
};

struct customer
{
	int discount_level;
	float payment;
};

float calculate(vector<struct commody>v,int level);
void push_commody_list();

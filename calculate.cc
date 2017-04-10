#include "calculate.h"

vector<struct commody_list> v_list;

float calculate(vector<struct commody>v,int level)
{
	cout<<"calculate"<<endl;
	vector<struct commody>::iterator aaa;
	float total = 0.0;
	float audit_is_discount = 0.0;
	float audit_no_discount = 0.0;
	for(aaa = v.begin(); aaa!=v.end(); aaa++)
	{
		//cout<<"order:"<<aaa<<endl;
		cout<<"name is: "<<aaa->name<<endl;
		cout<<"num is :"<<aaa->num<<endl;
		//cout<<"price is "<<aaa->price<<endl;
		//cout<<"is_discount "<<aaa->is_discount<<endl;
		if(aaa->is_discount)
		{
			switch(level)
			{
				case 1:
					audit_is_discount += aaa->price * aaa->num * 0.9;
					break;
				case 2:
					audit_is_discount += aaa->price * aaa->num * 0.95;
					break;
				default:
					break;
			}
		}
		else
		{
			audit_no_discount += aaa->price * aaa->num;
		}
		total +=  aaa->num * aaa->price;
	}
	return total;
}

void push_commody_list()
{
	int i = 0;
	struct commody_list a;

	a.name = "coffee";
	a.price = 48;
	a.num = 20;
	a.is_discount = true;
	v_list.push_back(a);
	a.name = "chocalate";
	a.price = 60;
	a.num = 20;
	a.is_discount = false;
	v_list.push_back(a);
	a.name = "coffee cup";
	a.price = 48.8;
	a.num = 20;
	a.is_discount = false;
	v_list.push_back(a);
	a.name = "tea";
	a.price = 118;
	a.num = 20;
	a.is_discount = false;
	v_list.push_back(a);
}
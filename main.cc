#include "calculate.h"


vector<struct customer> c_list;


int main()
{
	vector<struct commody>list;
	string order;
	vector<struct commody>::iterator aaa;
	//int order = 0;
	float price[4] = {48, 60, 48.8, 118};
	bool c_is_discount[4] = {true, false, false, false};

	push_commody_list();

	while(1)
	{
		cout<<"a:calculate q:quit "<<endl;
		cin>>order;
		if(order == "a")
		{
			cout<<"1:Gold 2:Silver 3:common"<<endl;
			struct customer temp_cus;
			int level;
			cin>>level;
			if(level<1 || level > 3)
			{
				cout<<"error level"<<endl;
				break;
			}
			temp_cus.discount_level = level;
			int name;
			int num;
			struct commody abc;
			while(1)
			{
				cout<<"please input the commidy"<<endl;
				cout<<"0:coffee 1:coffee cup 2:chocalate 3:tea 4:quit"<<endl;
				cin>>name;
				if(name < 0 || name > 3)
				{
					cout<<"error"<<endl;
					break;
				}
				if(name == 4)
				{
					cout<<"quit "<<endl;
					break;
				}
				abc.name = name;
				cout<<"please input number:"<<endl;
				cin>>num;
				abc.num = num;
				abc.price = price[name];
				abc.is_discount = c_is_discount[name];
				list.push_back(abc);		
			}
			float total = 0.0;
			total = calculate(list, level);
			temp_cus.payment = total;
			c_list.push_back(temp_cus);
			cout<<"total is: "<<total<<endl;

		}
		else if(order == "q")
		{
			cout<<"quit"<<endl;
			break;
		}

		//cin 
	}


	for(aaa = list.begin(); aaa!=list.end(); aaa++)
	{
		//cout<<"order:"<<aaa<<endl;
		cout<<"name is: "<<aaa->name<<endl;
		cout<<"num is: "<<aaa->num<<endl;
	}

    return 0;
}
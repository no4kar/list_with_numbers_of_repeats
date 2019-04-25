#include<iostream>
#include<list>
#include"list_with_numbers_of_repeats.h"

#define use_type int

int main() {

	std::list<use_type> with_lst{ 15,15,1,2,15,1,15,1,1 };
	//del<int> a;
	std::list<use_type> without_lst(delete_nth(with_lst, 2));

	print(without_lst);
	
	system("pause");
	return 0;
}
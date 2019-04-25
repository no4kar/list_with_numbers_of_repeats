#include<iostream>
#include<list>
#include"list_with_numbers_of_repeats.h"

int main() {

	std::list<int> with_lst{ 15,15,1,2,15,1,15,1,1 };
	std::list<int> without_lst(delete_nth(with_lst, 2));

	print(without_lst);
	
	system("pause");
	return 0;
}
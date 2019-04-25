#pragma once
#include<iostream>
#include<memory>
#include<list>

#ifndef A1
#define A1

template<typename T1>
std::list<T1> delete_nth(std::list<T1>& source_lst, const int& num_of_repeats) {
	//std::list<int> new_lst(1, *source_lst.begin());
	
	typedef typename std::list<T1>::iterator T1_list_iter;
	/*"typedef" do "typename std::list<T1>::iterator" equal "T1_list_iter"*/
	/*we need use keyword "typename" for this "std::list<T1>::iterator"*/

	std::list<T1> new_lst;
	T1_list_iter new_it = new_lst.begin();
	
	for (T1_list_iter source_it = source_lst.begin(); source_it != source_lst.end(); ++source_it) {
		int count = 0;
		for (auto source_it2 = source_it; ; --source_it2) {
			if (*source_it2 == *source_it) {
				count++;
			}
			if (count > num_of_repeats) {
				break;
			}
			if (source_it2 == source_lst.begin()) {
				new_lst.push_back(*source_it);
				break;
			}
		}
	}
	return new_lst;
}

template<typename T1>
void print(const std::list<T1>& lst) {
	for (auto it = lst.cbegin(); it != lst.cend(); ++it) {
		std::cout << *it << std::endl;
	}
}
#endif // !A1
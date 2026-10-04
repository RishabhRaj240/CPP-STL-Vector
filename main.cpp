#include <iostream>
#include <vector>
using namespace std;

void explainVector() {

	vector<int> values;

	values.push_back(1);
	values.emplace_back(2);
	values.emplace_back(3);

	vector<pair<int, int>> pairValues;

	pairValues.push_back({ 1, 2 });
	pairValues.emplace_back(1, 2);

	vector<int> filled(5, 100);

	vector<int> defaulted(5);

	vector<int> firstVector(5, 20);
	vector<int> secondVector(firstVector);

	vector<int>::iterator it = values.begin();

	it++;
	cout << *(it) << " " << endl;

	it = it + 2;
	cout << *(it) << " " << endl;

	vector<int>::iterator endIt = values.end();

	vector<int>::reverse_iterator reverseEnd = values.rend();

	vector<int>::reverse_iterator reverseBegin = values.rbegin();

	cout << values[0] << " " << values.at(0) << endl;

	cout << values.back() << " " << endl;

	for (vector<int>::iterator iter = values.begin(); iter != values.end(); iter++) {
		cout << *(iter) << " " << endl;
	}

	for (auto iter = values.begin(); iter != values.end(); iter++) {
		cout << *(iter) << " " << endl;
	}

	for (auto it : values) {
		cout << it << " " << endl;
	}

	// {10, 20, 12, 23}
	values.erase(values.begin() + 1);

	// {10, 20, 12, 23, 35}
	values.erase(values.begin() + 2, values.begin() + 4);

	// Insert Function
	
	vector<int> inserted(2, 100); // {100, 100}
	inserted.insert(inserted.begin(), 300); // {300, 100, 100}
	inserted.insert(inserted.begin() + 1, 2, 10); // {300, 10, 10, 100, 100}

	vector<int> copy(2, 50); // {50, 50}
	inserted.insert(inserted.begin(), copy.begin(), copy.end()); // {50, 50, 300, 10, 10, 100, 100}

	// {10, 20}
	cout << inserted.size() << endl;

	// {10, 20}
	inserted.pop_back(); // {10}

	// v1 -> {10, 20}
	// v2 -> {30, 40}
	firstVector.swap(secondVector);

	inserted.clear(); // erases the entire vector

	cout << inserted.empty() << endl;
}

int main() {
	explainVector();
	
	return 0;
}
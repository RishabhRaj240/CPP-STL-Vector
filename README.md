C++ Vector STL – Complete Basics

A beginner-friendly C++ program demonstrating the fundamental operations and commonly used features of the vector container from the C++ Standard Template Library (STL).

This program covers vector creation, insertion, deletion, iterators, traversal, copying, swapping, and other essential operations commonly used in Data Structures and Algorithms.

📌 Overview

A vector is a dynamic array provided by the C++ STL. Unlike a traditional array, its size can automatically grow or shrink during program execution.

This program demonstrates several important vector operations, including:

Creating vectors

Adding elements using push_back() and emplace_back()

Creating vectors with predefined values

Copying vectors

Using iterators

Accessing elements

Traversing vectors

Erasing elements

Inserting elements

Removing elements

Swapping vectors

Clearing vectors

Checking whether a vector is empty

✨ Features

Demonstrates dynamic arrays using vector.

Shows different ways to initialize vectors.

Demonstrates push_back() and emplace_back().

Uses forward and reverse iterators.

Demonstrates multiple methods of vector traversal.

Shows insertion and deletion operations.

Demonstrates swap(), clear(), size(), and empty().

Introduces vectors of pairs.

🛠️ Technologies Used

Technology

Purpose

C++

Programming language

STL

Standard Template Library

vector

Dynamic array

Iterators

Vector traversal

iostream

Console output

📚 Concepts Covered

1. Creating a Vector

An empty vector can be created using:

vector<int> values;

Elements can then be added dynamically.

2. push_back()

Adds an element to the end of the vector:

values.push_back(1);

3. emplace_back()

Constructs and adds an element directly at the end:

values.emplace_back(2);

4. Vector of Pairs

Vectors can also store pairs:

vector<pair<int, int>> pairValues;

pairValues.push_back({1, 2});
pairValues.emplace_back(1, 2);

5. Vector Initialization

A vector can be initialized with multiple identical values:

vector<int> filled(5, 100);

This creates:

{100, 100, 100, 100, 100}

A vector can also be created with a default value of 0:

vector<int> defaulted(5);

6. Copying a Vector

One vector can be initialized using another:

vector<int> firstVector(5, 20);
vector<int> secondVector(firstVector);

🔄 Iterators

Iterators are used to traverse STL containers.

vector<int>::iterator it = values.begin();

The iterator can be moved forward:

it++;
it = it + 2;

The value at the iterator's current position can be accessed using:

*(it)

Reverse Iterators

The program also demonstrates:

vector<int>::reverse_iterator reverseEnd = values.rend();
vector<int>::reverse_iterator reverseBegin = values.rbegin();

These allow traversal from the end of the vector toward the beginning.

🔍 Accessing Elements

Using []

values[0]

Using at()

values.at(0)

Accessing the Last Element

values.back()

The back() function returns the last element of the vector.

🔁 Traversing a Vector

Using Iterator

for (vector<int>::iterator iter = values.begin();
     iter != values.end();
     iter++) {

    cout << *(iter) << " ";
}

Using auto

for (auto iter = values.begin(); iter != values.end(); iter++) {
    cout << *(iter) << " ";
}

Range-Based For Loop

for (auto it : values) {
    cout << it << " ";
}

The range-based loop is one of the simplest ways to traverse a vector.

❌ Erasing Elements

A single element can be removed using:

values.erase(values.begin() + 1);

A range of elements can also be removed:

values.erase(values.begin() + 2, values.begin() + 4);

The second form removes elements from the first iterator up to, but not including, the second iterator.

➕ Inserting Elements

A vector can insert elements at different positions.

Insert One Element

inserted.insert(inserted.begin(), 300);

Insert Multiple Copies

inserted.insert(inserted.begin() + 1, 2, 10);

Insert Elements From Another Vector

inserted.insert(
    inserted.begin(),
    copy.begin(),
    copy.end()
);

📏 Vector Size

The size() function returns the number of elements:

cout << inserted.size() << endl;

🗑️ Removing the Last Element

The pop_back() function removes the last element:

inserted.pop_back();

🔄 Swapping Vectors

Two vectors can exchange their contents using swap():

firstVector.swap(secondVector);

After the operation, the contents of the two vectors are exchanged.

🧹 Clearing a Vector

The clear() function removes all elements:

inserted.clear();

After calling clear(), the vector becomes empty.

✅ Checking if a Vector is Empty

The empty() function checks whether the vector contains any elements:

cout << inserted.empty() << endl;

It returns:

1 → Vector is empty

0 → Vector is not empty

💻 Source Code

#include <iostream>
#include <vector>
using namespace std;

void explainVector() {

    vector<int> values;

    values.push_back(1);
    values.emplace_back(2);
    values.emplace_back(3);

    vector<pair<int, int>> pairValues;

    pairValues.push_back({1, 2});
    pairValues.emplace_back(1, 2);

    vector<int> filled(5, 100);

    vector<int> defaulted(5);

    vector<int> firstVector(5, 20);
    vector<int> secondVector(firstVector);

    vector<int>::iterator it = values.begin();

    it++;
    cout << *(it) << endl;

    it = it + 2;
    cout << *(it) << endl;

    vector<int>::iterator endIt = values.end();

    vector<int>::reverse_iterator reverseEnd = values.rend();
    vector<int>::reverse_iterator reverseBegin = values.rbegin();

    cout << values[0] << " "
         << values.at(0) << endl;

    cout << values.back() << endl;

    for (vector<int>::iterator iter = values.begin();
         iter != values.end();
         iter++) {

        cout << *(iter) << endl;
    }

    for (auto iter = values.begin();
         iter != values.end();
         iter++) {

        cout << *(iter) << endl;
    }

    for (auto it : values) {
        cout << it << endl;
    }

    // Erase elements
    values.erase(values.begin() + 1);

    values.erase(values.begin() + 2,
                 values.begin() + 4);

    // Insert elements
    vector<int> inserted(2, 100);

    inserted.insert(inserted.begin(), 300);

    inserted.insert(inserted.begin() + 1, 2, 10);

    vector<int> copy(2, 50);

    inserted.insert(
        inserted.begin(),
        copy.begin(),
        copy.end()
    );

    cout << inserted.size() << endl;

    inserted.pop_back();

    firstVector.swap(secondVector);

    inserted.clear();

    cout << inserted.empty() << endl;
}

int main() {
    explainVector();

    return 0;
}

▶️ How to Run

1. Compile the program

g++ main.cpp -o main

2. Run the executable

./main

Windows: Run main.exe instead.

📖 Learning Outcomes

This project helps build a strong foundation in the C++ STL and prepares you for more advanced Data Structures and Algorithms concepts.

You will learn:

Dynamic arrays

STL vectors

Iterators

Range-based loops

Element insertion

Element deletion

Vector copying

Vector swapping

Vector traversal

Container manipulation

⏱️ Complexity

Common vector operations demonstrated in this program have different complexities:

Operation

Typical Complexity

Access using []

O(1)

back()

O(1)

push_back()

O(1) amortized

emplace_back()

O(1) amortized

pop_back()

O(1)

insert()

O(n)

erase()

O(n)

clear()

O(n)

size()

O(1)

empty()

O(1)

📸 Screenshot

Add your program output screenshot to:

screenshots/output.png

Then include it in the README:

![Program Output](screenshots/output.png)

Recommended project structure:

CPP-Vector-STL/
│
├── main.cpp
├── README.md
└── screenshots/
    └── output.png

👤 Author

Rishab Raj Chourasia

C++ | Data Structures & Algorithms | Problem Solving

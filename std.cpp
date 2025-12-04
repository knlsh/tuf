#include <bits/stdc++.h>

using namespace std;

void explainList() {
    list<int> l1 = {1, 2, 3, 4};

    // gives the flexibility to push the elements in the front
    l1.push_front(0);

    for (auto x : l1) {
        cout << x << " ";
    }
    cout << endl;
}
void explainVector() {
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vector<int> vec2;
    vec2.push_back(8);

    // access value 
    for (int i=0; i<vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    // iterators
    // vec.begin -> first element of vector
    // vec.end -> element AFTER last element of vector
    // vector<int>::iterator can be simplified using `auto`
    for (auto itr = vec.begin(); itr < vec.end(); itr++) {
        // itr points to the memory address of the element
        cout << *itr << " ";
    }
    cout << endl;

    // vec.rbegin() -> last element
    // vec.rend() -> element BEFORE first element of vector
    for (auto itr = vec.rbegin(); itr < vec.rend(); itr++) {
        cout << *itr << " ";
    }
    cout << endl;

    // front
    vec.front();

    // back
    vec.back();

    // for each
    for (auto x : vec) {
        cout << x << " ";
    }
    cout << endl;

    // swap
    swap(vec, vec2);

    // clear
    vec.clear();

    // insert the element from a specific position
    vec.insert(vec.begin(), 4);
    vec.insert(vec.begin() + 2, 5);

} 
void explainPair() {
    pair<int, int> pr1 = make_pair(2, 9);
    cout << pr1.first << " " << pr1.second << endl; // 2 9

    pair<pair<int, int>, char> pr2 = {{2, 3}, 'a'};
    cout << pr2.first.second << endl; // 3

    pair<pair<pair<int, int>, int>, int> pr3 = {{{2, 3}, 4}, 5};
    cout << pr3.second << endl;

    pair<pair<pair<pair<int, char>, char>, bool>, char> pr4 = {{{{1, 'a'}, 'b'}, true}, 'c'};
    cout << pr4.second << endl;
}
void explainStack() {
    stack<int> s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);

    while(s1.empty() == false) {
        cout << s1.top() << " ";
        s1.pop();
    }

    cout << endl;
}
void explainQueue() {
    queue<int> q1;
    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);

    while(q1.empty() == false) {
        cout << q1.front() << " "; 
        q1.pop();
    }

}
void explainPQ() {
    // underlying it's a heap concept
    // max heap
     priority_queue<int> pq;
     pq.push(5);
     pq.push(6);
     pq.push(8);
     pq.push(9);

     while (pq.empty() == false) {
        cout << pq.top() << " ";
        pq.pop();
     }
     cout << endl;

     // min heap
     priority_queue<int, vector<int>, greater<int>> pqm;
     pqm.push(5);
     pqm.push(6);
     pqm.push(8);
     pqm.push(9);

     while(pqm.empty() == false) {
        cout << pqm.top() << " ";
        pqm.pop();
     }
     cout << endl;
}

int main() {
    explainPQ();
    return 0;
}
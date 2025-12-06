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
void explainSet() {
    // stores unique values -> non duplicated values
    // stores in ascending order -> ordered by default
    set<int> s;
    s.insert(11);
    s.insert(21);
    s.insert(12);
    s.insert(22);

    for (auto itr : s) {
        cout << itr << " ";
    }
    cout << endl;

    // lower_bound: returns an iterator that points to the element that is <= number given
    auto lb = s.lower_bound(10); 
    cout << *lb << endl;  

    // upper_bound: returns an iterator that points to the element that is > number given
    auto ub = s.upper_bound(20);
    cout << *ub << endl;

    // erase: remove elements from the range
    auto beginRange = s.begin();
    beginRange++;
    auto endRange = s.end();
    endRange--;
    s.erase(beginRange, endRange);

    for (auto itr : s) {
        cout << itr << " ";
    }
    cout << endl;

}
void explainMultiset() {
    // stores the values in ascending order by default but with duplicates.
    multiset<int> ml;
    ml.insert(6);
    ml.insert(2);
    ml.insert(3);
    ml.insert(4);
    ml.insert(5);
    ml.insert(5);

    for (auto itr : ml) {
        cout << itr << " ";
    }
    cout << endl;
    ml.erase(ml.find(2));

    // count the number of specific elements in multiset
    cout << ml.count(5) << endl;

    for (auto itr : ml) {
        cout << itr << " ";
    }
}
void explainUnorderedSet() {
    // cannot apply lower bound and upper bound because the elements are not sorted in set
    unordered_set<int> st;
    st.insert(1);
    st.insert(2);
    st.insert(3);
    st.insert(2);
    st.insert(3);
    st.insert(2);
    st.insert(3);
    st.insert(1);

    auto it = st.find(2); // in average case it gives better TC: 0(1)
    cout << *it;

}
void explainMap() {
    // stores the values in map in ascending order of the key
    // the value in map is always stored in pairs (key, value)
    map<int, string> mpp;
    mpp[1] = "abc";
    mpp[2] = "pqr";
    mpp[3] = "glksd";
    mpp.insert({4, "kunal"});

    for (auto itr: mpp) {
        cout << itr.first << "->" << itr.second << endl;
    }
}
void explainUnorderedMap() {
    // stores the key value pair without maintaining an order
    unordered_map<int, string> mpp;
    mpp[1] = "abc";
    mpp[2] = "pqr";
    mpp[3] = "glksd";
    mpp.insert({4, "kunal"});

    for (auto itr: mpp) {
        cout << itr.first << "->" << itr.second << endl;
    }
}
void explainMultiMap() {
    multimap<int, char> mm;
    mm.insert({10, 'a'});
    mm.insert({11, 'a'});
    mm.insert({10, 'a'});
    mm.insert({10, 'b'});
    mm.insert({11, 'b'});
    mm.insert({12, 'a'});

    for (auto itr : mm) {
        cout << itr.first << "->" << itr.second << endl;
    }
    
    // print the values with specific key
    auto it = mm.equal_range(10);
    for (auto itr = it.first; itr != it.second; itr++) {
        cout << (*itr).first << "->" << (*itr).second << endl;
    }
}
void explainSort() {
    int arr[5] = {4, 10, 43, 5, 1};
    sort (arr, arr+5); // (start ele, end ele)
    for (int x: arr) {
        cout << x << " ";
    }
}
void explainAccumulate() {
    int arr[5] = {1, 2, 3, 4, 5};
    cout << accumulate(arr, arr+5, 0); // (first ele, last ele, starting sum)
}
void explainCount() {
    int arr[5] = {1, 2, 3, 4, 3};
    int num = 3;
    cout << count(arr, arr+5, num); // (first ele, last ele, query)
}
void explainFind() {
    int arr[5] = {1, 2, 3, 4, 3};
    auto it = find(arr, arr+5, 6); // (first ele, last ele, query)
    if (it == arr+5) {
        cout << "not found";
    } else {
        cout << *it;
    }
}
void explainNextPermutation() {
    string str = "abc";
    do {
        cout << str << endl;
    } while (next_permutation(str.begin(), str.end())); // only returns the sorted permutations
}
void explainPrevPermutation() {
    string str = "abc";
    do {
        cout << str << endl;
    } while (prev_permutation(str.begin(), str.end())); // only returns the sorted permutations in descending order
}
void explainMaxElement() {
    int arr[5] = {1, 2, 3, 4, 3};
    auto it = max_element(arr, arr+5);
    cout << *it;
}
bool internalComparator(pair<int, int> p1, pair<int, int> p2) {
    if (p1.second > p2.second) return true;
    if (p1.second < p2.second) return false;
    if (p1.first < p2.first) return true;
    return false;
}
void explainComparator() {
    pair<int, int> arr[] = {{1, 6}, {1, 5}, {2, 6}, {2, 9}, {3, 9}};
    sort(arr, arr+5, internalComparator);
    for (int i=0; i<5; i++) {
        cout << arr[i].first << "->" << arr[i].second << endl;
    }
}

int main() {
    explainComparator();
    return 0;
}
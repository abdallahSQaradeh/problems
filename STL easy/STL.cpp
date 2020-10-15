#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <set>
#include <map>
using namespace std;
int main()
{
    int arr[10] = {1, 2, 3, 4, 5};
    int arr1[] = {40, 30, 20, 10}, arr2[] = {15, 20, 25, 30, 35};
    string arr3[] = {"Sat", "Sun", "Mon", "Tues", "Wed", "Thur", "Fri"};
    int arr4[] = {0, 1, 2, 3, 4, 5, 6};
    vector<int> v1(arr, arr + 5), v2;
    list<int> l1(arr1, arr1 + 4), l2(arr2, arr2 + 5);
    set<string> s1(arr3, arr3 + 7);
    set<string>::iterator it;
    map<string, int> mapDays;
    map<string, int>::iterator iter;
    string lower, upper;
    v1.push_back(10);
    v1.push_back(20);
    l1.push_back(20);
    l1.push_front(10);
    l1.reverse();
    l1.merge(l2);
    v1.insert(v1.begin() + 3, 99);
    v1.erase(v1.begin() + 4);
    cout << "Does friday inserted? " << endl;
    s1.insert("Fri");

    cout << v1.size() << endl;
    //v2.swap(v1);
    cout << v1.size() << endl;
    while (!v1.empty())
    {
        cout << v1.back() << " ";
        v1.pop_back();
    }
    cout << endl;
    it = s1.begin();
    while (!l1.empty())
    {
        cout << l1.front() << " ";
        l1.pop_front();
    }
    cout << endl;
    while (it != s1.end())
    {
        cout << *it++ << " ";
    }
    cin >> lower >> upper;
    it = s1.lower_bound(lower);
    while (it != s1.upper_bound(upper))
    {
        cout << *it++ << " ";
    }
    for (int i = 0; i < 7; i++)
    {
        mapDays[arr3[i]] = arr4[i];
    }
    iter = mapDays.begin();
    while (iter != mapDays.end())
    {
        cout << (*iter).first << " " << (*iter).second;
        iter++;
    }
    cout << endl
         << v2.size() << endl;
    system("pause");
    return 0;
}
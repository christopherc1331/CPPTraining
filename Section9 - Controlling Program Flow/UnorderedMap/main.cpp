#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<int, string> daysMap;

    daysMap.insert(make_pair(0, "Sunday"));
    daysMap.insert(make_pair(1, "Monday"));
    daysMap.insert(make_pair(2, "Tuesday"));
    daysMap.insert(make_pair(3, "Wednesday"));
    daysMap.insert(make_pair(4, "Thursday"));
    daysMap.insert(make_pair(5, "Friday"));
    daysMap.insert(make_pair(6, "Saturday"));

    const int day_code{4};

    cout << daysMap.at(day_code);

    return 0;
}
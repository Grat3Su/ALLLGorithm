#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class People {
public:
    bool operator>(const People& other) const {
        if (year != other.year) return year > other.year;
        if (month != other.month) return month > other.month;
        return day > other.day;
    }

    bool operator<(const People& other) const {
        if (year != other.year) return year < other.year;
        if (month != other.month) return month < other.month;
        return day < other.day;
    }
    string name;
    int year;
    int month;
    int day;

    People(string name, int year, int month, int day) {
        this->name = name;
        this->year = year;
        this->month = month;
        this->day = day;
    }

};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N; // 단어 개수
    cin >> N;

    vector<People> people;

    for (int i = 0; i < N; i++) {
        string name;
        int year;
        int month;
        int day;

        cin >> name >> day >> month >> year;
        people.push_back(People(name, year, month, day));

    }

    sort(people.begin(), people.end());

    cout << people[people.size() - 1].name << "\n" << people[0].name;

    return 0;
}

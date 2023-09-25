#include<iostream>
#include <chrono>
#include <iomanip>
using namespace std;

class TimeClass {
    private:
        chrono::system_clock::time_point time;

    public:
        TimeClass(const chrono::system_clock::time_point& defaultTime = chrono::system_clock::now()) : time(defaultTime) {}

        chrono::system_clock::time_point getTime() const {
            return time;
        }

        void setTime(int hours, int minutes, int seconds) {
            std::chrono::system_clock::time_point currentDatePart = std::chrono::system_clock::now();
            std::chrono::hours h(hours);
            std::chrono::minutes m(minutes);
            std::chrono::seconds s(seconds);
            time = currentDatePart + h + m + s;
        }

        friend ostream& operator<<(ostream& os, const TimeClass& tk) {
            time_t t = chrono::system_clock::to_time_t(tk.time);
            return os << put_time(localtime(&t), "%c");
        }

        friend istream& operator>>(istream& is, TimeClass& tk) {
            tm tm_time = {};
            is >> get_time(&tm_time, "%c");
            if (!is.fail()) {
                tk.time = chrono::system_clock::from_time_t(mktime(&tm_time));
            }
            return is;
        }
};


int main(){
    TimeClass myTimeObject;
    int hours,minutes,seconds;
    cout<<"Hours : ";
    cin>> hours;
    cout<<"Minutes : ";
    cin>> minutes;
    cout<<"Seconds : ";
    cin>> seconds;


    myTimeObject.setTime(hours, minutes, seconds);

    myTimeObject.setTime((hours + 5)%24, minutes, seconds);

    cout<<"Hours : "<<(hours + 5)%24<<endl;
    cout<<"Minutes : "<<minutes<<endl;
    cout<<"Seconds : "<<seconds<<endl;


    return 0;
}
/**
 * Test for static class member.
 *
 * Created by hengxin on 18-2-1.
 */

#include <iostream>
using namespace std;

class Date {
 private:
  int d, m, y;
  static Date default_date;
 public:
  explicit Date(int dd = {}, int mm = {}, int yy = {});
  static void set_default(int dd, int mm, int yy);

  friend ostream& operator<<(ostream& os, const Date& date);
};

ostream& operator<<(ostream& os, const Date& date) {
  return os << date.d << '/' << date.m << '/' << date.y;
}

Date::Date(int dd, int mm, int yy) : d{dd}, m{mm}, y{yy} {
  if (d == 0)
    d = Date::default_date.d;
  if (m == 0)
    m = Date::default_date.m;
  if (y == 0)
    y = Date::default_date.y;
}
void Date::set_default(int dd, int mm, int yy) {
  default_date = Date{dd, mm, yy};
}

int main() {
  Date date {};
  cout << date;
}


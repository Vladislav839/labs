#include "StudentAfterSecondSession.h"
#include <vector>

using namespace std;

vector<int> StudentAfterSecondSession::getMarks() { return _marks; }

void StudentAfterSecondSession::setMarks(int mark, int index_of_subject) {
  _marks[index_of_subject] = mark;
}

double StudentAfterSecondSession::CalculateAverage() { 
  int sum = 0;
  for (int i = 0; i < _marks.size(); i++){
    sum += _marks[i];
  }
  for (int j = 0; j < _marks2.size(); j++) {
    sum += _marks2[j];
  }
  return sum / (_marks.size() + _marks2.size());
}

std::ostream& operator<<(std::ostream& out, const StudentAfterSecondSession& stud) {
  out << "ID: " << stud._uniqe_code << endl;
  out << "name: " << stud._name << endl;
  out << "course: " << stud._course << endl;
  out << "group: " << stud._group << endl;
  out << "number of record: " << stud._number_of_record << endl;
  out << "marks after first session: ";
  for (auto k : stud._marks) {
    out << k << " ";
  }
  out << "\n";
  out << "marks after second session: ";
  for (auto k : stud._marks2) {
    out << k << " ";
  }
  out << "\n";
  return out;
}
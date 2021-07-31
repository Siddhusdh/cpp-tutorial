#include <iostream>
#include <vector>

using namespace std;

vector<double> cinDoubleVector()
{
  vector<double> vList; // 

  int len; // 
  cout << "please enter length of array:";
       << endl;
  cin >> len;
  cout << "The length of array you entered:"
       << len
       << endl;

 
  double number;
  for (int i = 0; i < len; i++)
  {
    cout << "Please enter array" << i + 1 << "Element value: " << endl;
    cin >> number;
    vList.push_back(number);
  }

  return vList;
}

int coutDoubleVector(vector<double> sortV)
{
  cout << "The sorted array is: "
       << endl;
  copy(sortV.begin(), sortV.end(), ostream_iterator<double>(cout, "\n")); 
  return 0;
}

#include <iostream>
using namespace std;

string reverseWord(string str){
  //Your code here
  int n = str.length();

  for (int i = 0; i < n/2; i++){
      char temp = str[n-i-1];
      str[n-i-1] = str[i];
      str[i] = temp; 
  }
  return str;
}

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;	
}

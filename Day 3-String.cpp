#include <iostream>
#include <string>
using namespace std;

int main() {
	string a,b;
    cin>>a>>b;
    int c = a.size();
    int d = b.size();
    string e = a+b;
    cout<<c<<" "<<d<<endl;
    cout<<e<<endl;
    char temp;
    temp = a[0];
    a[0]=b[0];
    b[0]=temp;
    cout<<a<<" "<<b<<endl;
    return 0;
}

//Aliter
//Author Abishek Sriram

#include <iostream>
#include <string>
using namespace std;

int main() {

  string a,b;
  cin>>a;
  cin>>b;
   cout<<a.size()<<" "<<b.size();   //output line 1
   cout<<endl<<a+b;                 //output line 2
    //string temp;  
    //    char tempa=a[0];
    //     char tempb=b[0];
    cout<<endl<<b[0];
        for(int i=1;i<a.size();i++)
            cout<<a[i];
    cout<<" "<<a[0];
         for(int i=1;i<b.size();i++)
            cout<<b[i];
    return 0;
}

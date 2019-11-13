

// Example program
#include <iostream>
#include <queue>

using namespace std;

struct s1{
    int a;
    string b;
};

class Foo{
    public:
    int a;
    string b;
};

int main()
{
  queue<Foo> q;
  Foo obj;
  obj.a=2;
  obj.b="Object";
  q.push(obj);
  Foo p=q.front();

  cout<<p.a<<endl;
  cout<<p.b<<endl;

  return 0;
}



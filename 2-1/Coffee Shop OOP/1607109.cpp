#include<bits/stdc++.h>
using namespace std;
class coffee
{
    public:
    string name;
    string type;
    float price;

    public:
        coffee(){}
        coffee(string n,string t,float p)
        {
            name = n;
            type = t;
            price = p;
        }
        ~coffee()
        {
           // cout << "Coffee has been destroyed" << endl;
        }

};
class customer
{
    public:
    string customer_name;
    string coffee_name;
    string coffee_type;

    public:
        void getcustomer_name(string s)
        {
            customer_name=s;

        }
        void getcoffee_name(string s)
        {
            coffee_name=s;
        }
        void getcoffee_type(string s)
        {
          coffee_type=s;
        }
        string setcustomer_name()
        {
            return customer_name;

        }
        string setcoffee_name()
        {
            return coffee_name;
        }
        string setcoffee_type()
        {
            return coffee_type;
        }
        friend ostream& operator <<(ostream& out,customer &c)
        {
            out<<c.customer_name<<" ";
            out<<c.coffee_name<<" ";
            out<<c.coffee_type<<endl;
            return out;
        }

};

void Show()
{
 //ofstream fout("anika");
 //fout.close();
  ifstream fin("aditi");
  coffee C;
  string line,s;
  float f;
  cout<<endl<<endl<<"\t"<<"WELCOME TO LEISURE CAFE"<<endl<<endl;
  cout<<"\t"<<"MENU"<<endl;
  cout<<"AVAILABLE COFFEE DETAILS"<<endl<<endl;
  cout<<"NAME            TYPE    PRICE"<<endl;
  vector<string>n,t;
  vector<float>p;
  while(getline(fin,line))
  {
     stringstream sin(line);

     sin>>s;
     n.push_back(s);
     sin>>s;
     t.push_back(s);
     sin>>f;
     p.push_back(f);
  }
  for(int i=0;i<n.size()-1;i++)
  {
      cout<<n[i]<<"\t"<<t[i]<<"\t"<<p[i]<<endl;
  }

}
void order()
{ string s;
customer a;
cout<<endl<<endl;
  cout<<"GIVE YOUR ORDER HERE"<<endl<<endl;
  cout<<"Customer Name: "<<endl;
  cin>>s;
  a.getcustomer_name(s);
  cout<<"Coffee Name: "<<endl;
  cin>>s;
  a.getcoffee_name(s);
  cout<<"Coffee type: "<<endl;
  cin>>s;
  a.getcoffee_type(s);
  ofstream fout("customer",fstream::app);
  operator<<(fout,a);
}
int main()
{
    Show();
    order();

}


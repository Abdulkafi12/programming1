//Exercises

//Question 1

#include<iostream>
using namespace std;

int main()
{
  int x,y,z,result;
cout<<" Enter the first  number: ";
cin>>x;
cout<<" Enter the second  number: ";
cin>>y;
cout<<" Enter the third  number: ";
cin>>z;
result=x*y*z;
cout<<" The product is "<<result;

    return 0;
}

//Question 2

#include<iostream>
using namespace std;

int main()
{
    int num1,num2,sum,difference,product;
    double division;
    cout<<" Enter the first  number: ";
    cin>>num1;
    cout<<" Enter the second  number: ";
    cin>>num2;
    sum=num1+num2;
    difference=num1-num2;
    product=num1*num2;
    division=num1/num2;

    cout<<" The sum is "<<sum<<endl;

    cout<<" The difference is "<<difference<<endl;

    cout<<" The product is "<<product<<endl;

    cout<<" The quotient is "<<division<<endl;

    if(num1>num2)
    {
        cout<<num1<<" is the greater"<<endl;
        cout<<num2<<" is the smaller"<<endl;
    }
    else if(num1==num2)
        cout<<num1<<" They are equal"<<endl;
    else
    {
        cout<<num2<<" is the greater"<<endl;
        cout<<num1<<" is the smaller"<<endl;
    }

    return 0;
}

//Question 3

include <iostream>

int main()
{
    const double pi = 3.14159;
    double radius;

    std::cout << "Please enter the radius of the circle: ";
    std::cin >> radius;

    double circumference = 2 * pi * radius;
    std::cout << "The circumference of the circle is: " << circumference << std::endl;

    return 0;
}

//Question 4

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a,b,c,n,m,d,z,k,q,f,root1,root2;
    cout<<"Use quadratic equation (ax^2+bx+c=0) format!\n";
    cout<<"============================================\n";
    cout << "Enter the value of a: ";
    cin>> a;
    cout<< "Enter the value of b: ";
    cin>> b;
    cout<<"Enter the value of c: ";
    cin>> c;
    n=b*b;
    m=4*a*c;
    k=(-1)*b;
    q=n-m;
    d=k+q;
    f=k-q;
    z=2*a;
    root1=d/z;
    root2=f/z;
    cout<<"x1= "<<root1<<" and x2= "<<root2;
    return 0;
}
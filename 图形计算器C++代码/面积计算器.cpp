#include<iostream>
#include<iomanip>
using namespace std;

class Shape
{  public:
   virtual void type() const=0;
   virtual void length() const=0;
   virtual double area() const=0;
};

class Square: public Shape
{  double sideLength;
   public:
   void setup(double sl) {sideLength=sl;}
   virtual void type() const
   { cout<<"图形类型：正方形"<<endl;}
   virtual void length() const
   { cout<<"边长："<<setiosflags(ios::fixed)<<setprecision(3)<<sideLength<<"cm"<<endl;}
   virtual double area() const
   { return sideLength*sideLength;}
};

class Rectangle:public Shape
{  double Length,Width;
   public:
   void setup(double l,double w) {Length=l;Width=w;}
   virtual void type() const
   { cout<<"图形类型: 长方形"<<endl;}
   virtual void length() const
   { cout<<"长为："<<setiosflags(ios::fixed)<<setprecision(3)<<Length<<"cm"<<"宽为："<<Width<<"cm"<<endl;}
   virtual double area() const
   { return Length*Width;}
   
};


class Triangle: public Shape
{  double bottom;
   double height;
   public:
   void setup(double bt,double ht) {bottom=bt;height=ht;}
   virtual void type() const
   { cout<<"图形类型: 三角形"<<endl;}
   virtual void length() const
   { cout<<"底为："<<setiosflags(ios::fixed)<<setprecision(3)<<bottom<<"cm"<<","<<"高为："<<height<<"cm"<<endl;}
   virtual double area() const
   { return 0.5*bottom*height;}
};

class Round: public Shape
{  double Radius;
   public:
   void setup(double r)  {Radius=r;}
   virtual void type() const
   { cout<<"图形类型: 圆形"<<endl;}
   virtual void length() const
   {cout<<"半径为："<<setiosflags(ios::fixed)<<setprecision(3)<<Radius<<"cm"<<endl;}
   virtual double area() const
   { return 3.14*Radius*Radius;}   
};


void showType(Shape &s)
{ s.type();}

void showLength(Shape &s)
{ s.length();}

void showArea(Shape &s)
{ cout<<"图形面积为："<<setiosflags(ios::fixed)<<setprecision(3)<<s.area()<<"（平方厘米）"<<endl;}

int main()
{ int n;
  cout<<"请选择图形图形类型："<<endl;
  cout<<"1 正方形；2 长方形；3 三角形；4 圆形；"<<endl;
  cin>>n;
  switch(n)
  { 
    case 1:
		{double slength;
		 int dw;
		 Square zfx;
		 cout<<"请输入正方形边长：";
		 cin>>slength;
		 cout<<"请选择单位："<<endl;
		 cout<<"1 厘米；2 英寸；"<<endl;
		 cin>>dw;
		 if(dw==1){slength=slength;}
		 else {slength=2.54*slength;}
         zfx.setup(slength);
		 showType(zfx);
		 showLength(zfx);
		 showArea(zfx);
		 break;}
    case 2:
		{double l,w;
	     Rectangle cfx;
	     int dw;
      	 cout<<"请输入长方形的长和宽：";
	     cin>>l>>w;
	     cout<<"请选择单位:"<<endl;
	     cout<<"1 厘米；2 英寸；"<<endl;
	     cin>>dw;
	     if(dw==1) {l=l;w=w;}
		 else {l=2.54*l;w=2.54*w;}
	     cfx.setup(l,w);
	     showType(cfx);
	     showLength(cfx);
	     showArea(cfx);
		 break;}
	case 3:
		{double b;
		 double h;
		 int dw;
		 Triangle sjx;
		 cout<<"请输入三角形的底和高：";
		 cin>>b>>h;
		 cout<<"请选择单位："<<endl;
		 cout<<"1 厘米；2 英寸；"<<endl;
		 cin>>dw;
		 if(dw==1){b=b;h=h;}
		 else {b=2.54*b;h=2.54*h;}
         sjx.setup(b,h);
		 showType(sjx);
		 showLength(sjx);
		 showArea(sjx);
		 break;}
	case 4:
		{double r;
	     Round yx;
	     int dw;
	     cout<<"请输入圆形的半径：";
	     cin>>r;
     	 cout<<"请选择单位:"<<endl;
	     cout<<"1 厘米；2 英寸；"<<endl;
	     cin>>dw;
	     if(dw==1) {r=r;}
		 else {r=2.54*r;}
	     yx.setup(r);
	     showType(yx);
	     showLength(yx);
	     showArea(yx);
		 break;}
	default:
		cout<<"Input error!\n";}
    return 0;
  }

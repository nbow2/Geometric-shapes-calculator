#include <iostream>

using namespace std ;

class Circle
{
private:

    double pi = 3.14 ;
    double Radius ;

public:

    Circle() : Radius(0)
    {}

    Circle( double Radius)
    {
        this->Radius = Radius ;

    }

    double setRadius(double Radius)
    {
        this->Radius = Radius ;

        return Radius ;
    }

    double getRadius()
    {
            return Radius ;
    }

    double Area()
    {
        return pi * Radius * Radius ;
    }
    double Perimeter()
    {
        return  2 * pi * Radius ;
    }

    Circle operator+(Circle x) const
    {
        Circle y ;
        y.Radius = this->Radius + x.Radius ;
        return y;
    }

    Circle operator-(Circle x) const
    {
        Circle y ;
        y.Radius = this->Radius - x.Radius ;
        return y;

    }

    void Print()
    {
        cout << "Radius is :" << Radius ;
    }

};

class Square
{

private:

    double Side ;

public:

    Square() : Side(0)
    {}

    Square(double Side)
    {
        this->Side = Side ;

    }

    double setSide(double Side)
    {
        this->Side = Side ;

        return Side ;
    }

    double getSide()
    {
            return Side ;
    }

    double Area()
    {
        return Side * Side ;
    }
    double Perimeter()
    {
        return 4 * Side ;
    }

    Square operator+(Square x) const
    {
        Square y ;
        y.Side = this->Side + x.Side ;
        return y ;
    }

    Square operator-(Square x) const
    {
        Square y ;
        y.Side = this->Side - x.Side ;
        return y ;
    }

    void Print()
    {
        cout << "Side is :" << Side <<"\n";
    }

};

class Rectangle
{

private:

    double Length ;
    double Width ;

public:

    Rectangle() : Length(0) , Width(0)
    {

    }

    Rectangle(double Length ,double Width) : Length(Length) ,Width(Width)
    {}

    double setLength(double Length)
    {
        this->Length = Length ;

        return Length ;
    }

    double getLength()
    {
        if (Length > 0 )
            return Length ;
        else
            return false ;
    }

    double setWidth(double Width)
    {
        this->Width = Width ;

        return Width ;
    }

    double getWidth()
    {
        if( Width > 0 )
            return Width ;
        else
            return false ;
    }

    double  area()
    {
        return Length * Width ;
    }
    double  phramter()
    {
        return 2 * ( Length + Width ) ;
    }

    Rectangle operator+( Rectangle x) const
    {
        Rectangle y;
        y.Length = this->Length + x.Length ;
        y.Width = this->Width + x.Width ;
        return y ;
    }

    Rectangle operator-(Rectangle x) const
    {
        Rectangle y ;
        y.Length = this->Length - x.Length ;
        y.Width = this->Width - x.Width ;

        return y ;

    }

    void print()
    {
        cout << "Length is :" << Length <<"\n";
        cout << "Width is :" << Width <<"\n";

    }


};

class Triangle
{
private:

    double Base ;
    double Side1 ;
    double Side2 ;
    double Heigth ;

public:

    Triangle() :Base(0) , Side1(0) , Side2(0) , Heigth(0)
    {}

    Triangle(double Base , double Side1 ,double Side2) : Base(Base) ,Side2(Side2) ,Side1(Side1)
    {}

    Triangle(double Base ,double Heigth) :Heigth(Heigth) ,Base(Base)
    {}

    double setSides(double Side1 ,double Side2)
    {
        this->Side1 = Side1 ;
        this->Side2 = Side2 ;

        return Side1 && Side2 ;

    }

    double getSides()
    {
            return Side1 ;
            return Side2 ;
    }

    double setHeigth(double Heigth)
    {
        this->Heigth =Heigth ;

        return Heigth ;
    }

    double getHeigth()
    {
        if(Heigth > 0 )
            return Heigth ;
        else
            return -1 ;
    }

    double setBase(double Base)
    {
        this->Base = Base ;

        return Base ;
    }

    double getBase()
    {
        if(Base > 0 )
            return Base ;
        else
            return -1 ;
    }

    double Area()
    {
        return (Base * Heigth) / 2;
    }

    double perimeter()
    {
        return Side2 + Side1 + Base ;
    }

    Triangle operator+(Triangle x) const
    {
        Triangle y ;
        y.Base = this->Base + x.Base ;
        y.Side1 = this->Side1 + x.Side1 ;
        y.Side2 = this->Side2 + x.Side2 ;
        y.Heigth = this->Heigth +x.Heigth ;
        return y ;
    }

    Triangle operator-(Triangle x) const
    {
        Triangle y ;
        y.Base = this->Base - x.Base ;
        y.Side1 = this->Side1 - x.Side1 ;
        y.Side2 = this->Side2 - x.Side2 ;
        y.Heigth = this->Heigth - x.Heigth ;
        return y ;
    }

    void print()
    {
        cout << "Base is :" << Base <<"\n";
        cout << "First Side is :" << Side1 <<"\n";
        cout << "Secnd Side is :" << Side2 <<"\n";
        cout << "Higth is :" << Heigth <<"\n";
    }

};



int main() {

    cout << "\nHello to calu\n";
    cout << "1- Circle \n";
    cout << "2- Square\n";
    cout << "3- Rectangle\n";
    cout << "4- Triangle\n";
    cout << "5- Exit \n";
    int x;
    cin >> x ;




    switch (x) {

        case 1: {



            double Radius;
            cout << "pls Enter Radius Circle \n";
            cin >> Radius;
            Circle Circl;
            Circl.setRadius(Radius);

            cout << "1- Area \n";
            cout << "2- perimeter \n";
            cout << "3- Add \n";
            cout << "4- subtract \n";
            cout << "5- print\n";
            cout << "6- Back to Main\n";

            int choise;
            cin >> choise;

            while (true) {



                if (choise == 1) {

                    cout <<"this is Area ->"<< Circl.Area();
                    main();
                }
                if (choise == 2) {

                    cout << "this is Perimeter ->"<< Circl.Perimeter();
                    main();
                }
                if (choise == 3) {
                    Circle equal , num;
                    double rad ;
                    cout << "pls enter num to add -> " ;cin >>rad ;
                    num.setRadius(rad) ;

                    equal = Circl + num ;
                    equal.Print() ;
                    main();
                }
                if (choise == 4) {
                    Circle equal0 , num0;
                    double r ;
                    cout << "pls enter num to subtract -> " ;cin >>r ;
                    num0.setRadius(r);

                    equal0 = Circl - num0 ;
                    equal0.Print();
                    main();
                }
                if (choise == 5)
                {
                    Circl.Print();
                }
                if (choise == 6) {
                    main();
                }
            }

        }
            break;

        case 2: {

            Square Squar;
            double Side;
            cout << "pls Enter Side Square ";
            cin >> Side;
            Squar.setSide(Side);


            cout << "1- Area \n";
            cout << "2- perimeter \n";
            cout << "3- Add \n";
            cout << "4- subtract \n";
            cout << "5- Print\n";
            cout << "6- Back to Main\n";
            int choise1;
            cin >> choise1;

            while (true)
            {
                if(choise1 == 1)
                {
                    cout <<"this is Area ->"<< Squar.Area();
                    main();
                }
                if(choise1 == 2)
                {
                    cout <<"this is Perimeter ->"<< Squar.Perimeter();
                    main();
                }
                if(choise1 == 3)
                {
                    Square equal , num;
                    double Sid ;
                    cout << "pls enter num to add -> " ;cin >>Sid ;
                    num.setSide(Sid) ;

                    equal = Squar + num ;
                    equal.Print() ;
                    main();
                }
                if(choise1 == 4)
                {
                    Square equal , num;
                    double Sid ;
                    cout << "pls enter num to subtract -> " ;cin >>Sid ;
                    num.setSide(Sid) ;

                    equal = Squar - num ;
                    equal.Print() ;
                    main();

                }
                if(choise1 == 5)
                {
                    Squar.Print();
                }
                if(choise1 == 6)
                {
                    main();
                }
            }


        } break;

        case 3:
        {
            double Length , Width;
            cout << "pls Enter Length  Rectangle \n";
            cin >> Length;
            cout << "pls Enter Width  Rectangle \n";
            cin >> Width;
            Rectangle Rectangl;
            Rectangl.setLength(Length);
            Rectangl.setWidth(Width);

            cout << "1- Area \n";
            cout << "2- perimeter \n";
            cout << "3- Add \n";
            cout << "4- subtract \n";
            cout << "5- print\n";
            cout << "6- Back to Main\n";

            int choise1;
            cin >> choise1;

            while (true)
            {
                if(choise1 == 1)
                {
                    cout <<"this is Area ->"<<Rectangl.area();
                    main();
                }
                if(choise1 == 2)
                {
                    cout <<"this is Area ->"<<Rectangl.phramter();
                    main();
                }
                if(choise1 == 3)
                {
                    cout << "\n1- add in Width \n2- add in Length \n"; int c ; cin >> c;
                    Rectangle equall , equalw  , num;
                    if(c == 2)
                    {
                        cout << "\nEnter Length add"; double l ; cin >> l ;
                        num.setLength(l);
                        equall = Rectangl + num ;
                        cout << "\nnew Length is ->" << equall.getLength();
                        main();
                    }
                    if(c == 1)
                    {
                        cout << "\nEnter Width add" ;double w ; cin >> w ;
                        num.setWidth(w);
                        equalw = Rectangl + num ;
                        cout << "\nnew Width is ->" << equalw.getWidth();
                        main();

                    }

                }
                if(choise1 == 4)
                {
                    cout << "\n1- subtract in Width \n2- subtract in Length \n"; int c ; cin >> c;
                    Rectangle equall , equalw  , num;
                    if(c == 1)
                    {
                        cout << "\nEnter Length subtract"; double l ; cin >> l ;
                        num.setLength(l);
                        equall = Rectangl - num ;
                        cout << "\nnew Length is ->" << equall.getLength();
                        main();
                    }
                    if(c == 2)
                    {
                        cout << "\nEnter Width subtract" ;double w ; cin >> w ;
                        num.setWidth(w);
                        equalw = Rectangl - num ;
                        cout << "\nnew Width is ->" << equalw.getWidth();
                        main();

                    }
                }
                if(choise1 == 5)
                {
                    Rectangl.print();
                }
                if(choise1 == 6)
                {
                    main();
                }

            }

        } break;
        case 4:
        {
            double Base , Side1 , Side2 , Heigth;
            cout << "pls Enter Base Triangle \n";
            cin >> Base;
            cout <<"pls Enter First Side Triangle \n";
            cin >>Side1;
            cout <<"pls Enter Secend Side Triangle \n";
            cin >> Side2 ;
            cout << "pls Enter Higth for Triangle\n";
            cin >> Heigth ;
            Triangle Triangl;
            Triangl.setBase(Base);
            Triangl.setSides(Side1 ,Side2) ;
            Triangl.setHeigth(Heigth);

            cout << "1- Area \n";
            cout << "2- perimeter \n";
            cout << "3- Add \n";
            cout << "4- subtract \n";
            cout << "5- print\n";
            cout << "6- Back to Main\n";

            int choise;
            cin >> choise;

            while (true)
            {
                if(choise == 1)
                {
                    cout <<"this is Area ->"<<Triangl.Area();
                    main();

                }
                if(choise == 2)
                {
                    cout <<"this is perimeter ->"<<Triangl.perimeter();
                    main();
                }
                if(choise == 3)
                {
                    cout << "\n1- add in Base \n2- add in Sides \n3- add in Heigth \n"; int c ; cin >> c;
                    Triangle equalb , equals ,equalh , num;
                    if(c == 1)
                    {
                        cout << "\nEnter Base add"; double b ; cin >> b ;
                        num.setBase(b);
                        equalb = Triangl + num ;
                        cout << "\nnew Base is ->" << equalb.getBase();
                        main();
                    }
                    if(c == 2)
                    {
                        cout << "\nEnter First Sides add" ;double s ,s0 ; cin >> s ;
                        cout << "Enter secend Side add"; cin >> s0 ;
                        num.setSides(s ,s0 );
                        equals = Triangl + num ;
                        cout << "\nnew Width is ->" << equals.getSides();
                        main();
                    }
                    if (c == 3)
                    {
                        cout << "\nEnter Heigth add"; double h ; cin >> h ;
                        num.setHeigth(h);
                        equalh = Triangl + num ;
                        cout << "\nnew Heigth is ->" << equalh.getBase();
                        main();
                    }

                }
                if(choise == 4)
                {
                    cout << "\n1- subtract in Base \n2- subtract in Sides \n3- subtract in Heigth \n"; int c ; cin >> c;
                    Triangle equalb , equals ,equalh , num;
                    if(c == 1)
                    {
                        cout << "\nEnter Base subtract"; double b ; cin >> b ;
                        num.setBase(b);
                        equalb = Triangl - num ;
                        cout << "\nnew Base is ->" << equalb.getBase();
                        main();
                    }
                    if(c == 2)
                    {
                        cout << "\nEnter First Sides subtract" ;double s ,s0 ; cin >> s ;
                        cout << "Enter secend Side subtract"; cin >> s0 ;
                        num.setSides(s ,s0 );
                        equals = Triangl - num ;
                        cout << "\nnew Width is ->" << equals.getSides();
                        main();
                    }
                    if (c == 3)
                    {
                        cout << "\nEnter Heigth subtract"; double h ; cin >> h ;
                        num.setHeigth(h);
                        equalh = Triangl - num ;
                        cout << "\nnew Heigth is ->" << equalh.getBase();
                        main();
                    }
                }
                if(choise == 5)
                {
                    Triangl.print();
                }
                if(choise == 6)
                {
                    main();
                }
            }

        }
            break;
    }
}

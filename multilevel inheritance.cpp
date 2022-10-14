#include<iostream>
using namespace std;
class Circle
{
        protected:
                float radius ;          
        public:
                void Enter_r(void)
                {
                        cout << "\n\t Enter the radius: ";  cin >> radius ;
                }
                void Display_ca(void)
                {
                        cout << "\t The area = " << (22/7 * radius*radius) ;
                }
};
class Rectangle
{
                protected:
                        float length, breadth ;
                public:
                        void Enter_lb(void)
                        {
                                cout << "\t Enter the length : "; cin >> length ;
                                cout << "\t Enter the breadth :";
								 cin >> breadth ;
                        }
                        void Display_ar(void)
                        {
                                cout << "\t The area = " << (length * breadth);
                        }
};
class Cylinder : public Circle, public Rectangle
{
                public:
                        void volume_cy(void)
                        {
                                cout << "\t The volume of the cylinder is: "
                                        << (22/7* radius*radius*length) ;
                        }
};
int main()
{
                Circle c ;
                cout << "\n Getting the radius of the circle\n" ;
                c.Enter_r( );
                c.Display_ca( );
                Rectangle r ;
                cout << "\n\n Getting the length and breadth of the rectangle\n\n";
                r.Enter_lb( );
                r.Display_ar( );
                Cylinder cy ; 
                cout << "\n\n Getting the height and radius of the cylinder\n";
                cy.Enter_r( );
                cy.Enter_lb( );
                cy.volume_cy( );
return 0;
}

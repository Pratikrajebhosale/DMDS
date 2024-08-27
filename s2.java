//s14q2
import java.util.*;
interface operation
{
abstract void area();
abstract void volume();
final double pi=3.142;
}

class cylinder implements operation
{
double r,h;
cylinder(double radius,double height)
{
r=radius;
h=height;
}
public void area()
{
double a=2*pi*r*h+2*pi*r*r;
System.out.println("Area of cylinder"+a);
}
public void volume()
{
double b=pi*r*r*h;
System.out.println("Volume of cylinder"+b);
}

public static void main(String args[])
{
cylinder c=new cylinder(5.5,6.5);
c.area();
c.volume();
}
}










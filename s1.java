//s12q2
import java.util.*;
abstract class shape
{
abstract public void area();
abstract public void volume();
}

class cylinder extends shape
{
double r,h;
cylinder(double radius,double height)
{
r=radius;
h=height;
}
public void area()
{
double a=2*3.14*r*h+2*3.14*r*r;
System.out.println("Area of cylinder"+a);
}

public void volume()
{
double b=3.14*r*r*h;
System.out.println("volume of cylinder"+b);
}
}
public class s1
{
public static void main(String args[])
{
cylinder c1=new cylinder(5.5,6.5);
c1.area();
c1.volume();
}
}










//s17q2
import java.util.*;

class student
{
int rno;
String name;
static int cnt=0;
student()
{
rno=6352;
name="pratik";
cnt++;
}
student(int r,String s)
{
rno=r;
name=s;
cnt++;
}

void display()
{
System.out.println("Name of student"+name);
System.out.println("Roll no of student"+rno);
}


void count()
{
System.out.println("Object created"+cnt);
}
}
class s3
{
public static void main(String args[])
{
student s=new student(6371,"krushna");
s.count();
s.display();
student s1=new student();
s1.count();
s1.display();
}
}







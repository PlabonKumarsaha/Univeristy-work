
package mobileclass;


public class MobileClass {

    public static void main(String[] args) {
        Mobile ob1 =new Mobile("PKS" ,"0168", 23.3f,"Android", false);
       
       ob1.showInfo();
       ob1.recharge(10);
        ob1.callSomeone(5);
         System.out.println("New class");
        Mobile ob2 =new Mobile("PKL" ,"0168", 23.3f,"Android", true);
       
       ob1.showInfo();
       ob1.recharge(10);
        ob1.callSomeone(5);
        
       
       
    }
    
}

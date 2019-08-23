
package mobileclass;
public class Mobile {
    
    private String mobileOwnerName = "\0";
    private String mobileNumber = "0";
    private float mobileBalance = 0;
    private String mobileOSName = "0";
    private boolean lock = true;
    
    public Mobile()
    {
        //
    }
    public Mobile(String Name , String num, float bal,String os, boolean loc  )
    {
        this.mobileOwnerName = Name;
         
        this.mobileNumber = num;
        this.mobileBalance =bal;
        
        this.mobileOSName =os;
        this.lock = loc;
        
        System.out.println("Mobile number info created");
      
    }
    
    public void showInfo()
    {
         if(this.lock == false )
         {
        
        System.out.println("Mobile phone owner name :" + this.mobileOwnerName);
        System.out.println("Mobile phone number :" + this.mobileNumber );
        System.out.println("Mobile phone balence  :" + this.mobileBalance );
        System.out.println("Mobile phone OS :" + this.mobileOSName );
        System.out.println("Mobile Lock condition :" + this.lock );
         }
         else
         {
             System.out.println("error!"); 
         }
     
    }
    
    public void recharge(int amount)
    {
        if(this.lock == false ){
            this.mobileBalance+=amount;
        }
        
        else
        {
                System.out.println("error!"); 
                }
        
    }
    public void callSomeone(int timeDuration)
    {
      
      if(this.lock == false )
      {
          if(this.mobileBalance> timeDuration){
          System.out.println("Cost for "+timeDuration + " is "+(1*timeDuration) );
           System.out.println("New Balence is : " + ( this.mobileBalance - (1*timeDuration) ));
          }
          else
          {
              System.out.println("Not enough balence"); 
          }
          
      }
      else
      {
         System.out.println("Your phone is not locked" );  
      }
      
    }
     
    
}

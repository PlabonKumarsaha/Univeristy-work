
package account;


public class OverdraftAccount extends Account {
    
    protected int overdraftLimit = 500;
    
    OverdraftAccount()
    {
        //default
    }
    
    OverdraftAccount(String name,String id,double bal)
    {
        super(name,id,bal);
        //this.overdraftLimit =40000;
        
    }
    
    public void withdraw(int amount)
    {
       //this.balance= this.balance -amount;
      // Transaction t = new Transaction (this,this, amount,"Withdraw");
        //addTransaction(t);
       if( (this.overdraftLimit+super.balance)<amount )
       {
           
           this.balance= this.balance -amount;
           System.out.println("false");
           
       }
       else if( (this.overdraftLimit+super.balance)>amount)
       {
          
           this.balance= this.balance -amount;
             System.out.println("true");
       }
    }
    
}

package account;

public class Transaction {
  protected Account sender;
   protected Account receiver;
   protected double amount =0 ;
   protected String additionalInfo = "a" ;
    
    Transaction()
    {
        //default const
    }
    Transaction(Account sendera,Account receievea, double am ,String info)
    {   
        this.sender = sendera;
        this.receiver = receievea;
        this.amount = am;
        this.additionalInfo =info;   
    }
    public void ShowInfo() {
         System.out.println("Amount Sender: "+this.sender.getAcid());
          System.out.println("Ammount receiever: "+this.receiver.getAcid());
         System.out.println("Account amount: "+this.amount);
        System.out.println("A/C Name: "+this.additionalInfo);
       
    }
  
}

package account;

public class Account {
    private String accName="";
    private String acid="";
    private double balance;
    private Transaction  listOfTransaction[] = new Transaction[10];
    private  int totalNumberOfTransaction = 0;
   
    //construcor
    public Account(){}//empty
    
    //parameterized
    public Account(String name,String id,double bal){
    this.accName=name;
    this.acid=id;
    this.balance=bal;
    //this.totalNumberOfTransaction =trans;
    listOfTransaction = new Transaction[10] ;
    System.out.println("Account created");
    }
    public void deposit(double amount){
        this.balance+= amount;
        Transaction t = new Transaction(this,this, amount,"deposit");
        addTransaction(t);
    }
    public void withdraw(double amount){
        this.balance-= amount;
        Transaction t = new Transaction (this,this, amount,"Withdraw");
        addTransaction(t);
    }
   // public void transfer(int amount,Account receiver,Account )
    
    public void transfer(int amount, Account rec)
    {
      
       System.out.println("transfers");
       rec.balance =rec.balance +amount;
       this.balance =this.balance -amount;
       System.out.println("Trans to -"+rec.accName);
       System.out.println("amount to -"+amount);
       
      Transaction t = new Transaction (this,rec,500,"transfer");
      
        addTransaction(t);
       
       
       
       
    }
    public void addTransaction(Transaction t)
    {
         // for(int i=0;i<=list)
        //listOfTransaction
         listOfTransaction[ totalNumberOfTransaction] = t;
          totalNumberOfTransaction++;
    }
    
    public void showAllTranscation()
    { //shows all the transaction
     for(int i=0;i<totalNumberOfTransaction;i++)
       {
           System.out.println(i+" No of transactions" );
           {
               listOfTransaction[i].ShowInfo();
               
           }
           
       }
    }
    public String getAcid()
    {
        return this.acid;
    }
    public void showInfo(){
        System.out.println("Account Details: ");
        System.out.println("A/C Name: "+this.accName);
        System.out.println("A/C ID: "+this.acid);
        System.out.println("A/C Balance: "+this.balance);
        System.out.println("A/C Total transaction : "+this.totalNumberOfTransaction);
      
    }
}

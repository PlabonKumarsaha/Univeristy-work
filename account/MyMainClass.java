package account;


public class MyMainClass {
      public static void main(String[] args) {
        //old ones
        //  Account acc1 = new Account("Iftekhar","17-35687-3",50000);
       // acc1.showInfo();
      // Account acc2 = new Account("Iftekhar","17-35687-1",20000);
      // acc2.showInfo();
        //new
        //acc1.deposit(500);
      //  acc1.showInfo();
        
       // acc2.transfer(200, acc1);
       // acc2.showAllTranscation();
        
        
        OverdraftAccount ob1 =new OverdraftAccount("Pk","10000",1000);
        
        ob1.withdraw(60000);
       
        
        
        
        
    }
    
    
}
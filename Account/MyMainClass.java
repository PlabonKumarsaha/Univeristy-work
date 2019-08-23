
package account;


public class MyMainClass {
      public static void main(String[] args) {
        //old ones
          Account acc1 = new Account("Iftekhar","17-35687-3",50000);
        acc1.showInfo();
       Account acc2 = new Account("Iftekhar","17-35687-1",20000);
       acc2.showInfo();
        //new
        acc1.deposit(500);
        acc1.showInfo();
        
        acc2.transfer(200, acc1);
        acc2.showAllTranscation();
        
        //
        
        // Transaction ob1 = new  Transaction(acc1, acc2, 500,"Deposit");
         //ob1.ShowInfo();
         
       //Transaction ob2 = new  Transaction(acc2, acc1, 5000,"Deposit");
       //  ob1.ShowInfo(); 
       //  acc1.Ttransfer(500, acc2);
        // acc1.deposit(500);
     //    acc2.Ttransfer(250, acc1);
      //   acc1.showAllTranscation();
   //      acc2.showAllTranscation();
        
        
        
        
    }
    
    
}

package calculator;

public class Calculator {

    


    public static void main(String[] args) {
        
       
         BasicCalcInterface c = new Calculation() ;
        //BasicCalcInterface
        
          System.out.println("add  = "+ c.add(2, 3));
          System.out.println("sub = "+ c.sub(2, 3));
        
       System.out.println("div = "+ c.div(2, 3));
          System.out.println("mul = "+ c.mul(2, 3));
         
                            
                            
             ScientificcalculatorInterface s1 = new ScientificCalculator();
             
             System.out.println("x to y = "+ s1.XtoY(2, 3) );
             System.out.println("fact = "+ s1.factorial(5) );
             System.out.println("sqrt = = "+ s1.sqrt(9));
             
             
             
                            
 
           
                           
                           
                           
                           
                   
                   
                   
                   
                   
                           
                           
                   
          
        
   
    
    
   
    
    
    
       
       
        
        
        
        
        
    }

    private static void ScientificCalculator() {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }

}

package calculator;


public class Calculation implements BasicCalcInterface {
    
    public Calculation()
    {
        //default
    }
    
    //methods
    
    public float add(float x, float y) {
        
        return x+y;
    }

    public float sub(float x, float y) {

        return x-y;
    }

    public float mul(float x, float y) {

        return x*y;
    }

    public float div(float x, float y) {
        if (y != 0.0f) {
            return x / y;
        } 
        else {
            System.out.println("can not be divided by ");
            return 0.0f;
        }

    }
    
    
    
}

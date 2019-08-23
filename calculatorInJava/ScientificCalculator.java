
package calculator;

/**
 *
 * @author student
 */
public class ScientificCalculator implements ScientificcalculatorInterface {
    
public ScientificCalculator()
{
    
}

public float XtoY(float x,float y)
{
    return (float) Math.pow(x,y);
    

}
public float sqrt(float x)
{
    
    return(float) Math.sqrt(x);
    
}
public int factorial(int n)
{
    if(n<=1) return 1;
    
    else return n*factorial(n-1);
    
    
}


}

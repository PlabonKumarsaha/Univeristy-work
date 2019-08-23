/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package databaseconnection;
import java.sql.*;
import java.util.ArrayList;
import javax.swing.JOptionPane;

/**
 *
 * @author student
 */
public class DBConnect {
    
    
    private Connection con;
    private Statement st;
    private ResultSet rs;
    
    public DBConnect()
    {
        try{
          Class.forName("com.mysql.jdbc.Driver");
          
          //step 1: get connection to database
          
          con = DriverManager.getConnection("jdbc:mysql://localhost:3306/studentdatabase2","root","");
          
          //step2 ; craete a statement
          
          st = con.createStatement(); 
        }
        
        catch(Exception e)
        {
            System.out.println("Error : "+e);
            e.printStackTrace();
        }
    }
    
    public void insertintoDatabase(ArrayList row)
    {
        try{
        String query = "insert into student(id,name,cgpa,major)Values ('"+row.get(0)+"','"+row.get(1)+"',"+row.get(2)
                +",'"+row.get(3)+"'"+  ");";
        System.out.println(query);
        //step 3 ;esecute sql query
        st.executeUpdate(query);
        
        JOptionPane.showMessageDialog(null,"Stuent info added sucessfully");
    }
    catch(SQLException e)
    {
        JOptionPane.showMessageDialog(null,"Insert into database" +e);
        
         System.out.println("Error : "+e);
         e.printStackTrace();
    }
    }  
        
   public void qurey(ArrayList row)
        {
            try{
                
            String query ="select * from student";
             System.out.println(query);
              st.executeUpdate(query);
              JOptionPane.showMessageDialog(null,"Here is your all messages");
             
            }
            catch(SQLException e)
            {
                 System.out.println("Error : "+e);
                 e.printStackTrace();
            }
        }
   
   public void DeeleteRow(ArrayList row)
   {
       try{
          String query ="Delete from student where ID = '"+row.get(0)+"';";
           System.out.println(query);
           st.executeUpdate(query);
           JOptionPane.showMessageDialog(null,"Row sucessfully deleted");
           
       }
       catch(SQLException e)
       {
             System.out.println("Error : "+e);
                     e.printStackTrace();
       }     
   }
    
   public ResultSet getResult()
   {
       //shows result from the datbase to the textfield
       
       try{
           String qurey = "select id,name,cgpa,major from student";
           //execute sql query
           rs = st.executeQuery(qurey);
           
       }
       catch(Exception e)  {
                  System.out.println("Error: "+e);
                  e.printStackTrace();
           
               }
       return rs;
   }
   
       public ResultSet Search(String id)
       {
          try
          {
              String query = "SELECT ID,Name, CGPA, major FROM student WHERE ID="+id +";";
              rs = st.executeQuery(query);
               System.out.println(query);
              
          }
          catch(Exception e)
          {
              System.out.println("Error :"+e);
              e.printStackTrace();
          }
         return rs;  
       }
       
       
       public void update(ArrayList row)
       {
          try
          { 
              String query = "update student set  name = ',"+row.get(1)+"',cgpa = '"
                      +row.get(2)+"', major = '"+row.get(3)+"' where id = '"+row.get(0)+"';";
                      
              st.executeUpdate(query);
          }
          catch(Exception e)
          {
              System.out.println("Error :"+e);
              e.printStackTrace();
          }
          
        //  return rs;
          
       }
       
     

   //end pera    
}
         
    
    


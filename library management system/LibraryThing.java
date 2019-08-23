package library;


public class LibraryThing {
    //the member functions 
    private String libName = "a";
    private String libAddress = "a";
    private  Book listOfBook [] =new Book[100];
 
    public int totalBook = 0;
    
    LibraryThing()
    {
        //default const
    }
      
    LibraryThing(String name,String Add,int total)
    {
      this.libName = name ;
      this.libAddress= Add; 
      this.totalBook =total;
     listOfBook = new Book[1000];
      
      System.out.println("Book info created "); 
    }
    public void showInfo()
    {
        System.out.println("Library name:" + this.libName);
        System.out.println("The address of Library :" + this.libAddress );
        System.out.println("Total no of books :" + this.totalBook );
        for(int i=0;i<totalBook;i++)
        {
            System.out.println(i+" ");
            listOfBook[i].showInfo();
        }
       
        
    }
    public void addNewBook(Book book)
    {
        listOfBook[totalBook] =book;
        totalBook++;
    }
    public void deleteBook(Book book)
    {
        
      for(int i=0;i<totalBook;i++)
      {
          if(listOfBook[i]==book)
       listOfBook[i] =null;  
      }
      for(int i=0;i<totalBook;i++)
      {
          if(listOfBook[i]== null)
          {
              listOfBook[i]= listOfBook[i+1];
              
          }
        totalBook--;
      }
     
     
       
    }
    public void addNewBookCopy(Book book, int copy) 
    {
        
        
        this.totalBook+=copy;
        
        
    }

    
    
}

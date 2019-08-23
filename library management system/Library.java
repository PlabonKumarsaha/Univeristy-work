
package library;



public class Library {

    public static void main(String[] args) {
Book b1 =new Book("ksksj","jkdk","23","jjd",4);
Book b2 =new Book("Hm","hii","23","kk",4);
        LibraryThing lib =new  LibraryThing("Aiub library","Dhaka",3);
        
        lib.addNewBook((b1));
        lib.addNewBook((b2));
        
        lib.showInfo();
        lib.deleteBook(b1);
         lib.showInfo();
        

    }
    
}

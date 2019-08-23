
package library;

public class Book {
    private String bookName="";
    private String bookAuthor="";
    private String bookId="";
    private String bookType;
    private int bookCopy;

    public Book(){}
    
    public Book(String name,String author,String id,String type,int copy){
        this.bookName=name;
        this.bookAuthor=author;
        this.bookId=id;
        this.bookType=type;
        this.bookCopy=copy;
        System.out.println("Book Stored");
    }
    public void showInfo(){
        System.out.println("Book Details\n");
        System.out.println("Title: "+bookName);
        System.out.println("Author: "+bookAuthor);
        System.out.println("Id: "+bookId);
        System.out.println("Type: "+bookType);
        System.out.println("Copies: "+bookCopy+"\n");
    }
    public void addBookCopy(int n){
        this.bookCopy+=n;
        System.out.println("Added " +n +" copies to " +bookName+"\n");
    }
}
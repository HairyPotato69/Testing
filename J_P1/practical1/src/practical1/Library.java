package practical1;

public class Library {
	private Book[] m_books = new Book[100];
	private Member[] m_members = new Member[100];
	private int count = 0;
	
	public void addBook(Book new_book) {
		m_books[count] = new_book;
		count++;
	}
	public void removeBook(String book_title) {
//		for(int index = 0; index < count; index++) {
//			if(m_books[index].getM_title() == book_title)
//		}
		System.out.println("Continue later");
	}
}

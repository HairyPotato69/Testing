package practical1;

public class Book {
	private String m_title;
	private String m_author;
	private boolean m_available;
	
	public Book(String title, String author, boolean available) {
		m_title = title;
		m_author = author;
		m_available = available;
	}
	public Book(String title, String author) {
		m_title = title;
		m_author = author;
		m_available = true;
	}
	
	public boolean chechkAvailability() {
		return (m_available == true) ? true : false;
	}
	public boolean borrowBook() {
		if (m_available == true) {
			m_available = false;
			return true;
		}
		else
			return false;
	}
	public void returnBook() {
		m_available = true;
	}
	public String getM_title() {
		return m_title;
	}
	public void setM_title(String m_title) {
		this.m_title = m_title;
	}
	public String getM_author() {
		return m_author;
	}
	public void setM_author(String m_author) {
		this.m_author = m_author;
	}
	public boolean isM_available() {
		return m_available;
	}
	public void setM_available(boolean m_available) {
		this.m_available = m_available;
	}
	
}

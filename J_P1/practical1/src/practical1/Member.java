package practical1;

public class Member {
	private String m_name;
	private int m_member_id;
	public Member(String name, int id) {
		m_name = name;
		m_member_id = id;
	}
	public String getName() {
		return m_name;
	}
	public int getID() {
		return m_member_id;
	}
}

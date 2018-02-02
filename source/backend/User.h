#ifndef USER_H
#define USER_H

#include <string>

class User{
	public:
		User();
		User(std::string uid, std::string pnm);
		std::string get_user_name();
		std::string get_real_name();
		//void change_user_name(); //Optional Feature
	private:
		std::string user_name;
		std::string real_name;
};

#endif
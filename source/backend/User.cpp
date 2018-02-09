#include "User.h"
/*
 * TO BE IMPLEMENTED BY: DOUG
 */

/**
 * The default constructor. Initializes user_name and real_name to the empty string ("");
 * attending_events points to a list containing -1
 * @pre none
 * @post user_name == ""
 * @post user_name == ""
 * @post attending_events == new std::list<int> {-1}
 */
User::User() : user_name(""), real_name(""), attending_events(new std::list<int>()) {}

/**
 * Non-empty constructor. Initializes user_name and real_name to nonempty strings.
 * attending_events points to a list containing -1
 * @param std::string uid -- String that user_name gets initialized to
 * @param std::string pnm -- String that real_name gets initialized to
 * @pre: uid and pnm are valid strings
 * @post: user_name == uid
 * @post: real_name == pnm
 * @post: attending_events == new std::list<int>()
 */
User::User(std::string uid, std::string pnm) : user_name(uid), real_name(pnm), attending_events(new std::list<int>()) {}

/**
 * Non-empty contructor. Initializes user_name, real_name, and attending_events
 * @param std::string uid -- String that user_name gets initialized to
 * @param std::string pnm -- String that real_name gets initialized to
 * @param std::list<int> atev -- Integer list that attending_events gets initialized to
 * @pre uid and pnm are valid strings
 * @pre atev is a valid integer list container
 * @post: user_name == uid
 * @post: real_name == pnm
 * @post: attending_events has all elemets from atev
 */
User::User(std::string uid, std::string pnm, std::list<int> atev) : user_name(uid), real_name(pnm), attending_events(new std::list<int>(atev)) {}

/**
 * User destructor; deallocates the data pointed to by std::list<int> attending_events
 * @pre none
 * @post data pointed to by attending_events is deleted
 */
User::~User() {
    if (attending_events != nullptr) {
	delete attending_events;
	attending_events = nullptr;
    }
}

/**
 * Retriever method for user_name member.
 * @pre: none
 * @post: none
 * @return: std::string -- user_name
 */
std::string User::getUserName() const {
	return (user_name);
}

/**
 * Retriever method for real_name member.
 * @pre: none
 * @post: none
 * @return: std::string -- real_name
 */
std::string User::getRealName() const {
	return (real_name);
}

/**
 * Overloaded == operator for User objects; compares user_name members.
 * @param User rhs -- Some User object
 * @pre: rhs is a valid user object
 * @post: none
 * @return: (user_name == rhs.user_name)
 */
bool User::operator==(User rhs) const {
	return (rhs.user_name == user_name);
}

/**
 * Retriever method for attending_events member
 * @pre: none
 * @post: none
 * @return: std::list<int>* -- attending_events
 */
std::list<int>* User::getAttendingEvents() {
	return (attending_events);
}

/**
 * Method for adding an event to attending_events
 * @param int event_id -- event_id to add to attending_events
 * @pre event_id is valid; that is, it references an actual event
 * @post event_id is added to attending_events
 */
void User::addEvent(int event_id) {
    attending_events -> push_back(event_id);
}


/**
 * Method for removing an event from attending_events
 * @param int event_id -- event_id to remove from attending events
 * @pre event_id exists within attending_events
 * @post event_id is removed from attending_events
 */
void User::removeEvent(int event_id) {
    attending_events -> remove(event_id);
}



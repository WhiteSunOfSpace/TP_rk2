#include <gtest/gtest.h>
#include "ChatRoom.cpp"

TEST(ChatRoom, test1){
	using namespace ChatRoomMediatorPattern;
	Person a("Nikita");
	
	EXPECT_EQ(a.getName(), "Nikita");
}

TEST(ChatRoom, test2){
	using namespace ChatRoomMediatorPattern;
	Person a("Nikita");
	Person b("Max");
	
	std::string f = Nikita->say("Hi");
	std::string s = Max->say("Hi");

	EXPECT_EQ(f, s);
}


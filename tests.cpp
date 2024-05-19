#include <gtest/gtest.h>
#include "ChatRoom.cpp"

TEST(ChatRoom, test1){
	using namespace ChatRoomMediatorPattern;
	Person a("Nikita");
	
	EXPECT_EQ(a.getName(), "Nikita");
}

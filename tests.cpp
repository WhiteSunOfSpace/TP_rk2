#include <gtest/gtest.h>
#include "ChatRoom.cpp"

TEST(ChatRoom, test1){
	using namespace ChatRoomMediatorPattern;
	Person a("Nikita"), b("MSI");
	
	EXPECT_FALSE(a==b);
}

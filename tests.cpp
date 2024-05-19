#include <gtest/gtest.h>
#include "ChatRoom.cpp"

TEST(ChatRoom, test1){
	using namespace ChatRoomMediatorPattern;
	Person a("Nikita");
	
	EXPECT_EQ(a.getName(), "Nikita");
}

TEST(ChatRoom, test2){
	using namespace ChatRoomMediatorPattern;
		
	std::shared_ptr<Person> Nikita{ std::make_shared<Person>("Nikita") };
	std::shared_ptr<Person> Max{ std::make_shared<Person>("Nikita") };
		
		
	EXPECT_NE(Max, Nikita);
}

TEST(ChatRoom, test3){
	using namespace ChatRoomMediatorPattern;
		
	std::shared_ptr<Person> Nikita{ std::make_shared<Person>("Nikita") };
	Person a("NIkita");
		
		
	EXPECT_EQ(a.getName(), (&Nikita)->getName());
}


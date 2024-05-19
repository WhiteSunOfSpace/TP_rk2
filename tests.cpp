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
    std::shared_ptr<Person> Max{ std::make_shared<Person>("Max") };

    std::shared_ptr<GoogleChat> room{ std::make_shared<GoogleChat>() };

    room->join(Nikita);
    room->join(Max);
	
    std::string f = Nikita->say("Hi");
    std::string s = Max->say("Hi");

    EXPECT_EQ(f, s);
}


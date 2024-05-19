#include <gtest/gtest.h>
#include "ConceptualExample01.cpp"

TEST(Concept01, test1){
	using namespace ConceptualExample01;
	MediatorBase* m;
	ColleagueBase* a(m), b(m);
	EXPECT_EQ(a, b);
}

#include <gtest/gtest.h>
#include "ConceptualExample01.cpp"

TEST(Concept01, test1){
	using namespace ConceptualExample01;
	ColleagueBase* a, b;
	MediatorBase* m;
	EXPECT_EQ(a(m), b(m));
}

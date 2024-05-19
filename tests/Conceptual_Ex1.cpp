#include <ConceptualExample01.cpp>
#include <gtest/gtest.h>

TEST(conceptual_Ex1, TEST){

  using namespace ConceptualExample01;
  ColleagueBase* sender, getter;
  MediatorBase* m;
  
  EXPECT_EQ(sender.set(m), getter.set(m));
}

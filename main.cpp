#include <gtest/gtest.h>

#include "candle.h"

  

// Test fixture for Candle tests

class CandleTest : public ::testing::Test {

protected:

Candle greenCandle{10.0, 15.0, 8.0, 14.0}; // close > open

Candle redCandle{14.0, 15.0, 8.0, 10.0}; // close < open

Candle dojCandle{10.0, 10.0, 10.0, 10.0}; // doji (open == close)

};

  

// Test body_contains()

TEST_F(CandleTest, BodyContains_GreenCandle) {



EXPECT_TRUE(greenCandle.body_contains(10.0));

EXPECT_TRUE(greenCandle.body_contains(12.0));

EXPECT_TRUE(greenCandle.body_contains(14.0));

EXPECT_FALSE(greenCandle.body_contains(9.0));

EXPECT_FALSE(greenCandle.body_contains(15.0));

}

  

TEST_F(CandleTest, BodyContains_RedCandle) {



EXPECT_TRUE(redCandle.body_contains(10.0));

EXPECT_TRUE(redCandle.body_contains(12.0));

EXPECT_TRUE(redCandle.body_contains(14.0));

EXPECT_FALSE(redCandle.body_contains(9.0));

EXPECT_FALSE(redCandle.body_contains(15.0));

}

  

TEST_F(CandleTest, BodyContains_DojiCandle) {


EXPECT_TRUE(dojCandle.body_contains(10.0));

EXPECT_FALSE(dojCandle.body_contains(9.9));

EXPECT_FALSE(dojCandle.body_contains(10.1));

}

  

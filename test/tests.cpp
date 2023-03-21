// Copyright 2022 GHA Test Team

#include <gtest/gtest.h>
#include "Automata.h"

TEST(task1, test1) {
	Automata coffee = Automata();
	coffee.on();
	enum STATES { WAIT };
	EXPECT_EQ(WAIT, coffee.getState());
}

TEST(task1, test2) {
	Automata coffee = Automata();
	coffee.on();
	coffee.getMenu();
	enum STATES { ACCEPT };
	EXPECT_EQ(ACCEPT, coffee.getState());
}

TEST(task1, test3) {
	Automata coffee = Automata();
	coffee.on();
	coffee.getMenu();
	coffee.choice(1);
	enum STATES { CHECK };
	EXPECT_EQ(CHECK, coffee.getState());
}

TEST(task1, test4) {
	Automata coffee = Automata();
	coffee.on();
	coffee.getMenu();
	coffee.choice(1);
	coffee.coin(100);
	enum STATES { CHECK };
	EXPECT_EQ(CHECK, coffee.getState());
}
TEST(task1, test5) {
	Automata coffee = Automata();
	coffee.on();
	coffee.getMenu();
	coffee.choice(1);
	coffee.coin(100);
	coffee.check();
	enum STATES { COOK };
	EXPECT_EQ(COOK, coffee.getState());
}
TEST(task1, test6) {
	Automata coffee = Automata();
	coffee.on();
	coffee.getMenu();
	coffee.choice(1);
	coffee.coin(100);
	сoffee.check();
	coffee.cook();
	enum STATES { COOK };
	EXPECT_EQ(COOK, coffee.getState());
}
TEST(task1, test7) {
	Automata coffee = Automata();
	coffee.on();
	coffee.getMenu();
	coffee.choice(1);
	coffee.coin(10);
	enum STATES { CHECK };
	EXPECT_EQ(CHECK, coffee.getState());
}
TEST(task1, test8) {
	Automata coffee = Automata();
	coffee.on();
	coffee.getMenu();
	coffee.choice(1);
	coffee.coin(100);
	coffee.check();
	coffee.cook();
	coffee.finish();
	enum STATES { WAIT };
	EXPECT_EQ(WAIT, coffee.getState());
}
TEST(task1, test9) {
	Automata coffee = Automata();
	coffee.on();
	coffee.getMenu();
	coffee.choice(1);
	coffee.coin(100);
	coffee.cancel();
	enum STATES { WAIT };
	EXPECT_EQ(WAIT, coffee.getState());
}
TEST(task1, test10) {
	Automata coffee = Automata();
	coffee.on();
	coffee.getMenu();
	coffee.choice(1);
	сoffee.coin(100);
	coffee.cancel();
	coffee.off();
	enum STATES { OFF };
	EXPECT_EQ(OFF, coffee.getState());
}



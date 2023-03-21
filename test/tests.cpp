// Copyright 2022 GHA Test Team

#include <gtest/gtest.h>
#include "Automata.h"

TEST(task1, test1) {
Automata coffee = Automata();
coffee.on();
EXPECT_EQ(Automata::WAIT, coffee.getState());
}

TEST(task1, test2) {
Automata coffee = Automata();
coffee.on();
coffee.getMenu();
EXPECT_EQ(Automata::ACCEPT, coffee.getState());
}

TEST(task1, test3) {
Automata coffee = Automata();
coffee.on();
coffee.getMenu();
coffee.choice(1);
EXPECT_EQ(Automata::ACCEPT, coffee.getState());
}

TEST(task1, test4) {
Automata coffee = Automata();
coffee.on();
coffee.getMenu();
coffee.choice(1);
coffee.coin(100);
EXPECT_EQ(Automata::CHECK, coffee.getState());
}
TEST(task1, test5) {
Automata coffee = Automata();
coffee.on();
coffee.getMenu();
coffee.choice(1);
coffee.coin(100);
coffee.check();
EXPECT_EQ(Automata::COOK, coffee.getState());
}
TEST(task1, test6) {
Automata coffee = Automata();
coffee.on();
coffee.getMenu();
coffee.choice(1);
coffee.coin(100);
coffee.check();
coffee.cook();
EXPECT_EQ(Automata::COOK, coffee.getState());
}
TEST(task1, test7) {
Automata coffee = Automata();
coffee.on();
coffee.getMenu();
coffee.choice(1);
coffee.coin(10);
EXPECT_EQ(Automata::CHECK, coffee.getState());
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
EXPECT_EQ(Automata::WAIT, coffee.getState());
}
TEST(task1, test9) {
Automata coffee = Automata();
coffee.on();
coffee.getMenu();
coffee.choice(1);
coffee.coin(100);
coffee.cancel();
EXPECT_EQ(Automata::WAIT, coffee.getState());
}
TEST(task1, test10) {
Automata coffee = Automata();
coffee.on();
coffee.getMenu();
coffee.choice(1);
coffee.coin(100);
coffee.cancel();
coffee.off();
EXPECT_EQ(Automata::OFF, coffee.getState());
}



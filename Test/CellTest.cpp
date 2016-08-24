//
// Created by Luca on 24/08/2016.
//

#include <gtest/gtest.h>
#include "../Cell.h"

TEST(cellTest, cellValueTest){
    Cell c;
    c.setValue(1);
    ASSERT_EQ(1,c.getValue());
}

//
// Created by Luca on 24/08/2016.
//

#include "lib/googletest/include/gtest/gtest.h"
#include "../Cell.h"
#include "../MaxFormula.h"
#include "../SumFormula.h"
#include "../MinFormula.h"
#include "../MeanFormula.h"

class FormulaSuit : public ::testing::Test {
protected:
    virtual void SetUp() {
        cella1.setValue(0);
        cella2.setValue(5);
        cella3.setValue(10);
        cella4.setValue(5);
    }

    Cell cella1;
    Cell cella2;
    Cell cella3;
    Cell cella4;
};

TEST_F(FormulaSuit,sum){
    SumFormula f;
    f.addCell(&cella1);
    f.addCell(&cella2);
    f.addCell(&cella3);
    f.addCell(&cella4);
    ASSERT_EQ(20,f.getSum());
}
TEST_F(FormulaSuit,max){
    MaxFormula f;
    f.addCell(&cella1);
    f.addCell(&cella2);
    f.addCell(&cella3);
    f.addCell(&cella4);
    ASSERT_EQ(10,f.getMax());
}
TEST_F(FormulaSuit,min){
    MinFormula f;
    f.addCell(&cella1);
    f.addCell(&cella2);
    f.addCell(&cella3);
    f.addCell(&cella4);
    ASSERT_EQ(10,f.getMin());
}
TEST_F(FormulaSuit,mean){
    MeanFormula f;
    f.addCell(&cella1);
    f.addCell(&cella2);
    f.addCell(&cella3);
    f.addCell(&cella4);
    ASSERT_EQ(5,f.getMean());
}

//
// Created by Luca on 24/08/2016.
//

#include <gtest/gtest.h>
#include "../MaxFormula.h"

TEST(FormulaSuit, max) {
    MaxFormula f;
    f.addCell(&cella1);
    f.addCell(&cella2);
    f.addCell(&cella3);
    f.addCell(&cella4);
}
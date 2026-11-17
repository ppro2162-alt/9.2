#include "pch.h"                          // має бути першим рядком (виправляє помилку C1010)
#include "CppUnitTest.h"
#include "C:\Users\USSER\Desktop\лаби\ап 9.2\ап 9.2\ап 9.2.cpp"            // макроси з основного проєкту

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest91
{
    TEST_CLASS(MacroTests)
    {
    public:
        TEST_METHOD(Sqr_Positive) { Assert::AreEqual(9.0, (double)SQR(3), 1e-9); }
        TEST_METHOD(Sqr_Negative) { Assert::AreEqual(16.0, (double)SQR(-4), 1e-9); }
        TEST_METHOD(Sqr_Expression) { Assert::AreEqual(9.0, (double)SQR(1 + 2), 1e-9); }
        TEST_METHOD(Sqr_Double) { Assert::AreEqual(6.25, (double)SQR(2.5), 1e-9); }

        TEST_METHOD(Max_First) { Assert::AreEqual(2.0, (double)MAX(2, 1), 1e-9); }
        TEST_METHOD(Max_Second) { Assert::AreEqual(2.0, (double)MAX(1, 2), 1e-9); }
        TEST_METHOD(Max_Negative) { Assert::AreEqual(-3.0, (double)MAX(-5, -3), 1e-9); }
        TEST_METHOD(Max_Expression) { Assert::AreEqual(2.0, (double)MAX(1 + 1, 3 - 2), 1e-9); }

        TEST_METHOD(W_ZGreater3_A) { Assert::AreEqual(9.0, (double)W(1, 2, 4), 1e-9); }
        TEST_METHOD(W_ZGreater3_B) { Assert::AreEqual(25.0, (double)W(10, 0, 5), 1e-9); }
        TEST_METHOD(W_ZGreater3_C) { Assert::AreEqual(10.0, (double)W(5, -5, 3.5), 1e-9); }

        TEST_METHOD(W_ZLe3_A) { Assert::AreEqual(8.0, (double)W(1, 2, 2), 1e-9); }
        TEST_METHOD(W_Boundary_Z3) { Assert::AreEqual(12.0, (double)W(1, 2, 3), 1e-9); }
        TEST_METHOD(W_Negative) { Assert::AreEqual(12.0, (double)W(-1, -2, -3), 1e-9); }
        TEST_METHOD(W_Zero) { Assert::AreEqual(0.0, (double)W(0, 0, 0), 1e-9); }
    };
}
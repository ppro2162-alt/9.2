#pragma once
#ifndef LAB_9_2_H
#define LAB_9_2_H

#define Z_LIMIT 3                              // межа для умови z > 3

#define SQR(a) ((a)*(a))                       // макрос: квадрат числа
#define MAX(a,b) (((a)>(b))?(a):(b))           // макрос: максимум із двох чисел

// гілка 1: max((x-z)^2, x-y)
#define W1(x,y,z) MAX(SQR((x)-(z)), (x)-(y))

// гілка 2: max(x*y, y*z) + max(z*x, y*z)
#define W2(x,y,z) (MAX((x)*(y),(y)*(z)) + MAX((z)*(x),(y)*(z)))

// вибір гілки за умовою z > Z_LIMIT
#define W(x,y,z) (((z)>Z_LIMIT) ? W1(x,y,z) : W2(x,y,z))

#endif
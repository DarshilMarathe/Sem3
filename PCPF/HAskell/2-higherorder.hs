--Higher Order 
highorder :: (a->a)->a->a
highorder f x = f(f x)

double x = x*2
square x= x*x

main = do
    print (highorder double 2)
    print(highorder square 10)
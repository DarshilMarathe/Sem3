summ :: Int ->Int
summ n | n==1 =1
    |otherwise = n+summ (n-1)

main = do 
    print (summ 5)
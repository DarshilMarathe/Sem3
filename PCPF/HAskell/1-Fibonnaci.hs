
fib :: Int -> Int
fib x | x==0=0
      | x==1=1
      |otherwise = fib(x-1) + fib (x-2)

main = print (fib 10)


-------------------


fib 0 = 0
fib 1 =1
fib n = fib (n-1) + fib (n-2)


fibList n = map fib[0..n] -- use full to print the whole series - - - - - - - - - - - - - - -  - - 


main = print ( fibList 4)
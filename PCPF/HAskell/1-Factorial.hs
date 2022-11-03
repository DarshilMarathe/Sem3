fact:: Int ->Int
fact x |x<=0 = 1
       |otherwise = x*fact (x-1)

main = print(fact 5)


---------------------------


fact x = do 
    if x<=0
    then 1
    else x*fact(x-1)

main = print (fact 5)


---------------------------
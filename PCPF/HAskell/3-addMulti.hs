addlist [] = 0
addlist (x:xs) = x + addlist xs 

multilist [] =1
multilist (x:xs) = x *multilist xs

main = do
    print (addlist [3,4,2,2,5,2])
    print (multilist [3,4,2,2,5,2])
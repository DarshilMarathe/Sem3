-- squareing the elements in list

square [] = []
square (x:xs) = x*x : square xs
--or
--square (x:xs) = [x*x] ++ square xs
main = do 
    print (square[2,5,11,3])
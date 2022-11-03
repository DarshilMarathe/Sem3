--product of elements of lists:
--Cartesian Product:
-- prslst (x) (y) = [a*b | a<-x , b<-y]

-- main = print( prslst [1,2,3] [9,8,7]) 


-- ordpr :: [a] -> [b] -> [(a,b)]
-- ordpr xs ys = do 
--         x <- xs
--         y <- ys
--         return (x,y)
-- main = print(ordpr [1,2,3] [4,5])





--If desired answer is : [1*9,2*8,3*7]

desi [] [] z = reverse z
desi (x:xs) (y:ys) z = desi xs ys ((x*y):z)

main = print (desi [1,2,3] [9,8,7] []) 




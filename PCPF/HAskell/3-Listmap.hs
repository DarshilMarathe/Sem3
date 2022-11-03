-- higher order functions
-- here - wont work

-- main = do
--       print(map (*3)[1,4,6])
--       print(map (+2)[1,4,6])

--Above,map is a inbuilt function for direct calculation

--User defined
maf ::  (a->a) ->[a] ->[a]
maf f x = [f a | a<-x]

main = do 
    print (maf(*3)[3,5,2])


--OR

mapf :: (a->b) -> [a] -> [b]

mapf f [] = []
mapf f (x:xs) = f x : mapf f xs 
main = do
print( mapf (+1) [1,3,5,7] )
print( mapf (*3) [1,3,5,7] )
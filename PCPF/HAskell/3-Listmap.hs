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
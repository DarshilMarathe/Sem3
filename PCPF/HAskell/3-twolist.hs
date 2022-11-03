
addlist [] [] = []
addlist (m:ms)(n:ns) = (m+n) : addlist ms ns 

main = do
    let lista = [2,4,2,21]
    let listb = [4,3,2,1]
    print (addlist lista listb)
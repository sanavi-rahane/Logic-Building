function CountDigit(no)
{
    let iCount = 0;
    let iDigit = 0
    while(no!=0)
    {
        iDigit = no % 10;
        iCount++;
        no = no / 10;  //issue
    }
    return iCount;
}
function main()
{
   let iVlaue = 721;
   let iRet = 0;
   iRet = CountDigit(iVlaue);
   console.log(`${iVlaue} contains ${iRet} Digits`);
}
    

main();


//721 contains 327 Digits
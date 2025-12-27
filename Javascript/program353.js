function SumDigit(no)
{
    let iSum = 0;
    let iDigit = 0
    while(no != 0)
    {
        iDigit = no % 10;
        iSum = iSum + iDigit;
        no =Math.floor(no /10);  
    }
    return iSum;
}
function main()
{
   let iVlaue = 721965;
   let iRet = 0;
   iRet = SumDigit(iVlaue);
   console.log(`Summation of digits : ${iRet}`);
}
    

main();



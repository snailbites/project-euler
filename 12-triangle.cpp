using namespace std;
//
//long computeTriangle(long num){
//    long sum = 0;
//    for(long i=0; i<=num/2; i++){
//        sum += i;
//    }
//    return sum;
//}
//long findDivisors(long num){
//    long numDivs = 0;
//    for(long i=1; i <= sqrt(num); i++){
//        if(num % i == 0){
//            numDivs++;
//        }
//    }
//    long ret = numDivs * 2;
//    return  fmod(num,numDivs) == 0 ? ret - 1 : ret;
//}
////4: 1 2 4
////6: 1 2 3 6
////9: 1 3 9
////16: 1 2 4 8 16      3 + 2
////21: 1 3 7 21    2 + 2
////25: 1 5 25     2 + 1
////28: 1,2,4,7,14,28  3 + 3
////36: 1 2 3 4 6 9 12 18 36        5 + 4
////49: 1 7 49
////64: 1 2 4 8 16 32 64     4 + 3
//
//// ct + ct-1
//
//
//
//
//
//
//long computeDivisors(long limit){
//    long tri = 0;
//    long result = 0;
//    long j = 1;
//    while(j <= limit){
//        tri += j;
//        result = findDivisors(tri);
//        if(result >= 500) {
//            cout << "ANSWER!: " << tri << "\n";
//            break;
//        }
//        j++;
//    }
//    cout << "divs: " << result << "\n";
//    return tri;
//}


// 123751
// 193459
// 317210

// 12
// 19
//   37
//   34
//     51
//     59
// 31 + 71 + 110

//while ! EOF
// split into 5 strings
    // if total.length > string.length
        // add first extra to next string


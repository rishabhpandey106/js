/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    const ans = [];
    arr.forEach((element , index) => {
        ans[index] = fn(element , index);
    })     
    return ans;
};
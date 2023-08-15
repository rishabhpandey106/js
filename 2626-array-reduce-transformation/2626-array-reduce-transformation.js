/**
 * @param {number[]} nums
 * @param {Function} fn
 * @param {number} init
 * @return {number}
 */
var reduce = function(nums, fn, init) {
    sum = 0;
    if(nums.length === 0) return init;
    if(nums.length === 1) return fn(init , nums[0]);
    nums.forEach((element , index)=>{        
        sum = fn(init , element);
        init = sum;
    });
    return sum;
};
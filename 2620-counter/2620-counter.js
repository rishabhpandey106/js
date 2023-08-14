/**
 * @param {number} n
 * @return {Function} counter
 */
var createCounter = function(n) {
    var i = 0;
    return function() {        
        const ans = n+i;
        i = i + 1;
        return (ans);
    };
};

/** 
 * const counter = createCounter(10)
 * counter() // 10
 * counter() // 11
 * counter() // 12
 */
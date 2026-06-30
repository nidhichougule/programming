console.log("butter")

const accountId = 123456
let accountEmail = "abc@abc.com"
var accountPassword = "12345"
accountCity = "New York"
let accountState;

accountEmail = "cde@cde.com"
accountPassword = "67890"
accountCity = "Los Angeles"

 console.log(accountId)

 /*
 Prefer not use var
 because of issue in block scope and function scope
 */

 console.table([accountId, accountEmail, accountPassword, accountCity, accountState])
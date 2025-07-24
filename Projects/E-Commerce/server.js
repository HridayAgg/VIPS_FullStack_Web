const app =require("./src/app")
const connect = require("./src/db/db")
let PORT = 3000
app.listen(PORT,()=>{
    console.log("Server running.....");
    connect()
})
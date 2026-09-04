let body = document.body;
let div=document.createElement("div")

div.style.height="400px"
div.style.width="400px"
div.style.backgroundColor="orange"
div.innerHTML +=`<table border="1px" cellpadding="10px">
        <tr>
            <th>ID</th>
            <th>Name</th>
            <th>Salary</th>
            <th rowspan="6"><br></th>
            <th>Company</th>
        </tr>
        <tr><td>01</td>
            <td>ABC</td>
            <td>30K</td>
            <td><a href="https://www.tcs.com/" target="_blank">
                <img src="https://static.vecteezy.com/system/resources/previews/075/561/488/non_2x/tcs-square-rounded-logo-transparent-background-free-png.png" alt="" height="50" width="50">
            </a></td>
        </tr>
        <tr><td>02</td>
            <td>XYZ</td>
            <td>40K</td>
            <a href="https://www.tcs.com/" target="_blank">
            <td><img src="https://www.bing.com/th/id/OIP.spuznzL_RRuzu3rUV_gbwgHaHa?w=193&h=193&c=8&rs=1&qlt=90&o=6&dpr=1.3&pid=ImgAns&rm=2" alt="" height="40" width="40"></td>
        </tr>
        <tr><td>03</td>
            <td>PQR</td>
            <td>50K</td>
            <td>
                <a href="https://www.tcs.com/" target="_blank">
                <img src="https://www.bing.com/th/id/OIP.-WbEq8HRFFN_CYNCLSD97QHaEK?w=193&h=135&c=8&rs=1&qlt=90&o=6&dpr=1.3&pid=ImgAns&rm=2" alt="" height="40" width="40"></td>
        </a>
                </tr>
        <tr><td>04</td>
            <td>MNO</td>
            <td>50K</td>
            <a href="https://www.tcs.com/" target="_blank"></a>
            <td><img src="data:image/webp;base64,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" alt="" height="40" width="40"></td>
        </tr>
        <tr><td>05</td>
            <td>EFG</td>
            <td>60K</td>
            <a href="https://www.tcs.com/" target="_blank"></a>
            <td><img src="https://www.bing.com/th/id/OIP.3cr7rbDyrIIS3JKFnD095AHaHa?w=193&h=193&c=8&rs=1&qlt=90&o=6&dpr=1.3&pid=ImgAns&rm=2" alt="" height="40" width="40"></td>
        </a>
        </tr>
    </table>`

body.appendChild(div)

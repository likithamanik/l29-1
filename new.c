<!DOCTYPE html>
<html>
<head>
    <title>Multiply Two Numbers</title>
    <script>
        function multiplyNumbers() {
            var num1 = document.getElementById("num1").value;
            var num2 = document.getElementById("num2").value;
            var result = Number(num1) * Number(num2);
            document.getElementById("mul_result").innerText = "Result: " + result;
        }
 </script>
</head>
<body>
    <h1> Simple calculator </h1>
    <h2>Multiply</h2>
    <input type="number" id="num1" placeholder="Enter first number">
    <input type="number" id="num2" placeholder="Enter second number">
    <button onclick="multiplyNumbers()">Submit</button>
    <p id="mul_result">Result: </p>
    
</body>
</html>

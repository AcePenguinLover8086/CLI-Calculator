package main

import (
	"fmt"
	"math"
)

func main() {
	var NumberA float64
	var NumberB float64
	var NumberC float64
	var Operator string
	Repeat := "Yes"

Here:

	fmt.Println("This Is A Calculator. You Enter a valid Operator & Two Numbers. This program will give you the results of those two numbers")
	fmt.Println("Add '+' , Subtract '-' , Multiply '*' , Divide '/' , Power '^' , sin() 'sin' , cos() 'cos' , tan() 'tan' , sinh() 'sinh' , cosh() 'cosh' , tanh() 'tanh' are valid Operators")

	for Repeat == "Yes" || Repeat == "yes" || Repeat == "Y" || Repeat == "y" || Repeat == "YES" || Repeat == "yEs" || Repeat == "yES" || Repeat == "yeS" || Repeat == "YeS" || Operator == "YEs" {

		fmt.Print("Enter A Valid Operator ")
		fmt.Scan(&Operator)

		if Operator == "sin" || Operator == "cos" || Operator == "tan" || Operator == "Sin" || Operator == "SIN" || Operator == "Cos" || Operator == "COS" || Operator == "Tan" || Operator == "TAN" || Operator == "SINH" || Operator == "COSH" || Operator == "TANH" || Operator == "sinh" || Operator == "cosh" || Operator == "tanh" {
			fmt.Print("Enter A Number ")
			fmt.Scan(&NumberC)
			switch Operator {
			case "Sin":
				Operator = "sin"
				break
			case "SIN":
				Operator = "sin"
				break
			case "Cos":
				Operator = "cos"
				break
			case "COS":
				Operator = "cos"
				break
			case "Tan":
				Operator = "tan"
				break
			case "TAN":
				Operator = "tan"
				break
			case "SINH":
				Operator = "sinh"
				break
			case "COSH":
				Operator = "cosh"
				break
			case "TANH":
				Operator = "tanh"
				break
			}
		} else if Operator == "+" || Operator == "-" || Operator == "*" || Operator == "/" || Operator == "^" {
			fmt.Print("Enter The First Number ")
			fmt.Scan(&NumberA)
			fmt.Print("Enter The Second Number ")
			fmt.Scan(&NumberB)
		} else {
			fmt.Println("Invalid Syntax")
			goto Here
		}
		switch Operator {
		case "+":
			fmt.Println(NumberA, "+", NumberB, "=", NumberA+NumberB)
			break
		case "-":
			fmt.Println(NumberA, "-", NumberB, "=", NumberA-NumberB)
			break
		case "*":
			fmt.Println(NumberA, "*", NumberB, "=", NumberA*NumberB)
			break
		case "/":
			fmt.Println(NumberA, "/", NumberB, "=", NumberA/NumberB)
			break
		case "^":
			fmt.Println(NumberA, "^", NumberB, "=", math.Pow(NumberA, NumberB))
			break
		case "sin":
			fmt.Println("sin(", NumberC, ") =", math.Sin(NumberC))
			break
		case "cos":
			fmt.Println("cos(", NumberC, ") =", math.Cos(NumberC))
			break
		case "tan":
			fmt.Println("tan(", NumberC, ") =", math.Tan(NumberC))
			break
		case "sinh":
			fmt.Println("sinh(", NumberC, ") = ", math.Sinh(NumberC))
			break
		case "cosh":
			fmt.Println("cosh(", NumberC, ") =", math.Cosh(NumberC))
			break
		case "tanh":
			fmt.Println("tanh(", NumberC, ") =", math.Tanh(NumberC))
			break
		}

		fmt.Print("Do You Want To Perform Another Calculation? Yes or No ")
		fmt.Scan(&Repeat)
	}
}

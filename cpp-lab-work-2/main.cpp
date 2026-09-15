#include <iostream>
#include <cmath>


void task1() {
	int a;
	std::cout << "A = ";
	std::cin >> a;

	if (a % 2 != 0) {
		std::cout << "True";
	}
	else {
		std::cout << "False";
	}
}


void task2() {
	int A;
	std::cout << "A = ";
	std::cin >> A;
	int B;
	std::cout << "B = ";
	std::cin >> B;

	if (A % 2 == B % 2) {
		std::cout << "True";
	}
	else {
		std::cout << "False";
	}
}


void task3() {
	int A;
	std::cin >> A;

	if (A > 99 && A % 2 != 0 && A < 1000) {
		std::cout << "True";
	}
	else {
		std::cout << "False";
	}
}


void task4() {
	int A, B, C;
	std::cout << "Enter A, B, C: ";
	std::cin >> A >> B >> C;

	if (A == B || B == C || C == A) {
		std::cout << "True";
	}
	else {
		std::cout << "False";
	}
}


void task5() {
	int A, first_dig, second_dig, third_dig;
	std::cin >> A;
	first_dig = A / 100; second_dig = A / 10 % 10; third_dig = A % 10;

	if (first_dig != second_dig && first_dig != third_dig && second_dig != third_dig) {
		std::cout << "True";
	}
	else {
		std::cout << "False";
	}
}


void task6() {
	int x, y;
	std::cout << "Enter x, y: ";
	std::cin >> x >> y;

	if ((x < 0 && y > 0) || (x < 0 && y < 0)) {
		std::cout << "True";
	}
	else {
		std::cout << "False";
	}
}


void task7() {
	int a, b, c;
	std::cout << "Enter a, b, c: ";
	std::cin >> a >> b >> c;

	if ((a + b) > c && (a + c) > b && (b + c) > a) {
		std::cout << "True";
	}
	else {
		std::cout << "False";
	}
}


void task8() {
	double a, b, c;
	std::cout << "Enter a, b, c: ";
	std::cin >> a >> b >> c;
	double min_num = a;

	if (b < min_num) {
		min_num = b;
	}
	if (c < min_num) {
		min_num = c;
	}

	std::cout << (a + b + c) - min_num;
}


void task9() {
	double A, B, C, closest_num;
	std::cout << "Enter A, B, C: ";
	std::cin >> A >> B >> C;

	if (std::abs(A - B) < std::abs(A - C)) {
		closest_num = B;
	}
	else {
		closest_num = C;
	}

	std::cout << "Closer point: " << closest_num << '\n' << "Distance: " << std::abs(closest_num - A);
}


/*
void task10_FirstVer() {
	int A;
	std::cin >> A;

	if (A % 2 == 0 && A != 0) {
		if (A > 0) { std::cout << "Positive even number"; }
		else if (A < 0) { std::cout << "Negative even number"; }
	}
	else if (A % 2 != 0 && A != 0) {
		if (A > 0) { std::cout << "Positive odd number"; }
		else if (A < 0) { std::cout << "Negative odd number"; }
	}
	else {
		std::cout << "Zero";
	}
}
*/


void task10() {
	int A;
	std::cin >> A;

	if (A == 0) {
		std::cout << "Zero";
		return;
	}
	if (A > 0) { std::cout << "Positive "; }
	else { std::cout << "Negative "; }
	if (A % 2 == 0) { std::cout << "even number"; }
	else { std::cout << "odd number"; }
}


void task11() {
	int K;
	std::cout << "K = ";
	std::cin >> K;

	if (K > 5 || K < 1) { std::cout << "error"; }
	else if (K == 1) { std::cout << "poor"; }
	else if (K == 2) { std::cout << "unsatisfactory"; }
	else if (K == 3) { std::cout << "satisfactory"; }
	else if (K == 4) { std::cout << "good"; }
	else { std::cout << "excellent"; }
}


void task12() {
	int N;
	std::cout << "N = ";
	std::cin >> N;
	std::cout << "Enter A and B:\n";
	double A, B;
	std::cin >> A >> B;

	if ((N > 4 || N < 1) || B == 0) { std::cout << "error"; return; }
	else if (N == 1) { std::cout << A + B; }
	else if (N == 2) { std::cout << A - B; }
	else if (N == 3) { std::cout << A * B; }
	else { std::cout << A / B; }
}


/*void task13() {
	int A, s, b;
	std::cout << "A = ";
	std::cin >> A;
	s = A;
	b = A;

	if (A < 100 || A > 999) { std::cout << "error"; return; }
	if (A = A / 100) {
		if (A == 1) { std::cout << "one hundred "; }
		else if (A == 2) { std::cout << "two hundred "; }
		else if (A == 3) { std::cout << "three hundred "; }
		else if (A == 4) { std::cout << "four hundred "; }
		else if (A == 5) { std::cout << "five hundred "; }
		else if (A == 6) { std::cout << "six hundred "; }
		else if (A == 7) { std::cout << "seven hundred "; }
		else if (A == 8) { std::cout << "eight hundred "; }
		else { std::cout << "nine hundred "; }
	}
	A = s;
	if ((A = A / 10 % 10) == 1) {
		if (b == 0) { std::cout << "ten"; }
		else if (A == 1) { std::cout << "eleven"; }
		else if (A == 2) { std::cout << "twelve"; }
		else if (A == 3) { std::cout << "thirteen"; }
		else if (A == 4) { std::cout << "fourteen"; }
		else if (A == 5) { std::cout << "fifteen"; }
		else if (A == 6) { std::cout << "sixteen"; }
		else if (A == 7) { std::cout << "seventeen"; }
		else if (A == 8) { std::cout << "eighteen"; }
		else { std::cout << "nineteen "; }
	}
} */


void task13() {
	int A;
	std::cout << "A = ";
	std::cin >> A;
	int hundreds = A / 100, tens = (A / 10) % 10, ones = A % 10;

	if (A < 100 || A > 999) { std::cout << "error"; return; }
	if (hundreds == 1) std::cout << "one hundred ";
	else if (hundreds == 2) std::cout << "two hundred ";
	else if (hundreds == 3) std::cout << "three hundred ";
	else if (hundreds == 4) std::cout << "four hundred ";
	else if (hundreds == 5) std::cout << "five hundred ";
	else if (hundreds == 6) std::cout << "six hundred ";
	else if (hundreds == 7) std::cout << "seven hundred ";
	else if (hundreds == 8) std::cout << "eight hundred ";
	else if (hundreds == 9) std::cout << "nine hundred ";
	if (tens == 1) {
		if (ones == 0) std::cout << "ten";
		else if (ones == 1) std::cout << "eleven";
		else if (ones == 2) std::cout << "twelve";
		else if (ones == 3) std::cout << "thirteen";
		else if (ones == 4) std::cout << "fourteen";
		else if (ones == 5) std::cout << "fifteen";
		else if (ones == 6) std::cout << "sixteen";
		else if (ones == 7) std::cout << "seventeen";
		else if (ones == 8) std::cout << "eighteen";
		else if (ones == 9) std::cout << "nineteen";
	}
	else {
		if (tens == 2) std::cout << "twenty";
		else if (tens == 3) std::cout << "thirty";
		else if (tens == 4) std::cout << "forty";
		else if (tens == 5) std::cout << "fifty";
		else if (tens == 6) std::cout << "sixty";
		else if (tens == 7) std::cout << "seventy";
		else if (tens == 8) std::cout << "eighty";
		else if (tens == 9) std::cout << "ninety";
	}
	if (tens > 1 && ones > 0) {
		std::cout << "-";
	}
	if (ones == 1) std::cout << "one";
	else if (ones == 2) std::cout << "two";
	else if (ones == 3) std::cout << "three";
	else if (ones == 4) std::cout << "four";
	else if (ones == 5) std::cout << "five";
	else if (ones == 6) std::cout << "six";
	else if (ones == 7) std::cout << "seven";
	else if (ones == 8) std::cout << "eight";
	else if (ones == 9) std::cout << "nine";
}








int main() {
	task13();
	return 0;
}
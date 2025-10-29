func smallestNumber(n int) int {
    for n & (n + 1) != 0 {
		n |= n + 1
	}
	return n
}
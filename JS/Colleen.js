const fn = () => {}
// com 1
(function main() {
	fn()
	// com 2
	console.log("const fn = () => {}\n// com 1\n(" + main.toString() + ")()")
})()

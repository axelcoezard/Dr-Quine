(function main() {
	const fs = require("fs")
	const process = require("child_process")
	let N = 5
	if (N <= 0) return;
	if (fs.existsSync(`Sully_${N}.js`)) N--;
	fs.appendFileSync(`Sully_${N}.js`, `(${main.toString().replace(/\d+/, N)})()\n`)
	if (N > 0) process.execFile("node", [`Sully_${N}.js`])
})()

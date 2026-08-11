<h2><a href="https://codeforces.com/contest/1457/problem/A" target="_blank" rel="noopener noreferrer">1457A — Prison Break</a></h2>

| | |
|---|---|
| **Difficulty** | Unrated |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1457A](https://codeforces.com/contest/1457/problem/A) |

## Topics
_No tags available_

---

## Problem Statement

<div class="header"><div class="title">A. Prison Break</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>There is a prison that can be represented as a rectangular matrix with $$$n$$$ rows and $$$m$$$ columns. Therefore, there are $$$n \cdot m$$$ prison cells. There are also $$$n \cdot m$$$ prisoners, one in each prison cell. Let's denote the cell in the $$$i$$$-th row and the $$$j$$$-th column as $$$(i, j)$$$.</p><p>There's a secret tunnel in the cell $$$(r, c)$$$, that the prisoners will use to escape! However, to avoid the risk of getting caught, they will escape at night.</p><p>Before the night, every prisoner is in his own cell. When night comes, they can start moving to adjacent cells. Formally, in one second, a prisoner located in cell $$$(i, j)$$$ can move to cells $$$( i - 1 , j )$$$ , $$$( i + 1 , j )$$$ , $$$( i , j - 1 )$$$ , or $$$( i , j + 1 )$$$, as long as the target cell is inside the prison. They can also choose to stay in cell $$$(i, j)$$$.</p><p>The prisoners want to know the minimum number of seconds needed so that every prisoner can arrive to cell $$$( r , c )$$$ if they move optimally. Note that there can be any number of prisoners in the same cell at the same time. </p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains an integer $$$t$$$ $$$(1 \le t \le 10^4)$$$, the number of test cases.</p><p>Each of the next $$$t$$$ lines contains four space-separated integers $$$n$$$, $$$m$$$, $$$r$$$, $$$c$$$ ($$$1 \le r \le n \le 10^9$$$, $$$1 \le c \le m \le 10^9$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print $$$t$$$ lines, the answers for each test case.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id00728167039084871" id="id002548050878610816" class="input-output-copier">Copy</div></div><pre id="id00728167039084871">3
10 10 1 1
3 5 2 4
10 2 5 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006924974283960832" id="id004392142808100713" class="input-output-copier">Copy</div></div><pre id="id006924974283960832">18
4
6
</pre></div></div></div>
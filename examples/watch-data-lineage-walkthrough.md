# Watch Data Lineage Pipe Walkthrough

This walk-through keeps the domain vocabulary close to the data instead of burying it in prose.

| Case | Focus | Score | Lane |
| --- | --- | ---: | --- |
| baseline | schema drift | 174 | ship |
| stress | lineage depth | 204 | ship |
| edge | partition skew | 137 | watch |
| recovery | quality gap | 182 | ship |
| stale | schema drift | 269 | ship |

Start with `stale` and `edge`. They create the widest contrast in this repository's fixture set, which makes them better review anchors than the middle cases.

If `edge` becomes less cautious without a clear reason, I would inspect the drag input first.

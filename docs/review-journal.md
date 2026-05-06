# Review Journal

The cases below are the review handles I would use before changing the implementation.

The local checks classify each case as `ship`, `watch`, or `hold`. That gives the project a small review vocabulary that matches its data engineering focus without claiming live deployment or external usage.

## Cases

- `baseline`: `schema drift`, score 174, lane `ship`
- `stress`: `lineage depth`, score 204, lane `ship`
- `edge`: `partition skew`, score 137, lane `watch`
- `recovery`: `quality gap`, score 182, lane `ship`
- `stale`: `schema drift`, score 269, lane `ship`

## Note

The repository should be understandable without pretending it is larger than it is.

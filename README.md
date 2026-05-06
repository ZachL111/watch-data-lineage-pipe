# watch-data-lineage-pipe

`watch-data-lineage-pipe` is a C++ project in data engineering. Its focus is to build a C++ toolkit that studies lineage behavior through node-edge fixtures, with cycle and reachability reports and local-only command execution.

## Use Case

This is intentionally local and self-contained so it can be inspected without credentials, services, or seeded history.

## Watch Data Lineage Pipe Review Notes

Start with `schema drift` and `partition skew`. Those cases create the widest score spread in this repo, so they are the best quick check when the model changes.

## Highlights

- `fixtures/domain_review.csv` adds cases for schema drift and lineage depth.
- `metadata/domain-review.json` records the same cases in structured form.
- `config/review-profile.json` captures the read order and the two review questions.
- `examples/watch-data-lineage-walkthrough.md` walks through the case spread.
- The C++ code includes a review path for `schema drift` and `partition skew`.
- `docs/field-notes.md` explains the strongest and weakest cases.

## Code Layout

The implementation keeps the scoring rule plain: reward signal and confidence, preserve slack, penalize drag, then classify the result into a review lane.

The C++ implementation avoids hidden state so fixture changes are easy to reason about.

## Run The Check

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts/verify.ps1
```

## Regression Path

That command is also the regression path. It verifies the domain cases and catches mismatches between the CSV, metadata, and code.

## Future Work

This remains a local project with deterministic fixtures. It does not depend on credentials, hosted services, or live data. Future work should add richer malformed inputs before widening the public API.

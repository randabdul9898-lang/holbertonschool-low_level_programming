# Algorithmic Efficiency Comparison

Three consecutive runs on the same sandbox using the required GCC flags.

## Run 1

```text
Naive algorithm result: 625025000
Naive algorithm time: 2.029111 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000116 seconds
```

## Run 2

```text
Naive algorithm result: 625025000
Naive algorithm time: 2.235603 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000107 seconds
```

## Run 3

```text
Naive algorithm result: 625025000
Naive algorithm time: 2.116510 seconds
Single-pass algorithm result: 25000
Single-pass algorithm time: 0.000116 seconds
```

## Average Execution Times

- Naive algorithm average: 2.127075 seconds
- Single-pass algorithm average: 0.000113 seconds

## Relative Difference

Naive algorithm is approximately 18823.67 times slower than single-pass.

## Conclusion

The naive algorithm uses nested loops, while the single-pass algorithm scans the data once. The measurements illustrate the impact of algorithmic complexity on execution time. Runtime is not a direct measurement of energy consumption.

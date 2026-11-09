# Green Efficiency Analysis

## Measurement Methodology

This experiment investigated the execution time of C programs using measurements recorded during the benchmarking exercises. The programs were compiled using GCC with the required flags: -Wall, -Werror, -Wextra, -pedantic, -std=gnu89, and -Wno-long-long.

The baseline program performed 100,000,000 iterations and measured CPU time using clock() and CLOCKS_PER_SEC. It was executed three consecutive times in the same sandbox environment. The comparison program was also executed three times, measuring a naive algorithm and a single-pass algorithm.

The original algorithms and input data were preserved during these measurements. Recording multiple executions helped identify variation rather than relying on a single observation.

The instrumentation exercise additionally separates execution into data-building, processing, and checksum-reduction phases. These boundaries allow individual operations to be examined separately from total runtime.

## Observed Performance Differences

The baseline program recorded execution times of 0.138329, 0.131551, and 0.142552 seconds. The average was approximately 0.137477 seconds. The fastest execution was 0.131551 seconds, while the slowest was 0.142552 seconds.

This variation demonstrates that repeated executions of the same deterministic calculation do not necessarily take identical amounts of CPU time.

The naive algorithm recorded 2.029111, 2.235603, and 2.116510 seconds across its three executions. Its reported average was 2.127075 seconds.

The single-pass algorithm recorded 0.000116, 0.000107, and 0.000116 seconds, with a reported average of approximately 0.000113 seconds.

Using the recorded averages, the naive implementation took approximately 18,824 times as long as the single-pass implementation.

However, the algorithms produced different numerical results. The naive algorithm returned 625025000, whereas the single-pass algorithm returned 25000. Therefore, these measurements demonstrate a substantial difference in runtime, but they do not establish that both implementations compute equivalent outputs.

The naive algorithm uses nested loops and repeatedly examines earlier elements. The single-pass implementation traverses the dataset once. This explains why their computational workloads differ significantly.

## Relation Between Runtime and Energy Consumption

Execution time is relevant to software sustainability because CPU activity requires electrical energy. Reducing unnecessary computation can reduce processor work and potentially lower energy consumption.

The comparison measurements show a substantial reduction in CPU execution time for the single-pass implementation. This supports the engineering principle that avoiding repeated work can improve computational efficiency.

However, the experiment did not measure electrical power in watts or total energy in joules. Consequently, the recorded runtime difference cannot be converted directly into a measured energy saving.

## Limitations of the Experiment

Several limitations affect the interpretation of these results.

First, each benchmark was executed only three times. A larger sample would provide a stronger estimate of typical execution time.

Second, background activity and system scheduling may introduce timing variation, even when the program and input remain unchanged.

Third, clock() measures processor time rather than direct electrical energy consumption.

Fourth, the two comparison algorithms return different results. Their execution times should therefore not be interpreted as the speedup of a functionally identical replacement.

Finally, the phase instrumentation demonstrates a measurement method, but the comparison averages alone do not identify the slowest instrumentation phase without its separately recorded output.

## Practical Engineering Takeaway

The experiments demonstrate why performance conclusions should begin with actual measurements instead of assumptions.

The baseline results establish that execution times vary across repeated runs. The algorithm comparison demonstrates how repeated processing can produce significantly greater execution time than a single traversal.

For practical engineering, developers should use reproducible inputs, consistent compilation settings, multiple runs, and clear measurement boundaries.

Before selecting a faster implementation, they must also verify that it produces the required results.

Efficient software development combines correctness, measurement discipline, and awareness of resource consumption. Runtime is useful evidence, but reliable sustainability conclusions require additional energy measurements.

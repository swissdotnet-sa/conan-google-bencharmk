#include "benchmark/benchmark.h"
#include <iostream>

void BM_StringCreation(benchmark::State& state) {
    std::cout << "Test package BM_StringCreation " << std::endl
    while (state.KeepRunning())
        std::string empty_string;
}

BENCHMARK(BM_StringCreation);

void BM_StringCopy(benchmark::State& state) {
    std::string x = "hello";
    std::cout << "Test package BM_StringCopy " << std::endl;
    while (state.KeepRunning())
        std::string copy(x);
}

BENCHMARK(BM_StringCopy);

BENCHMARK_MAIN();

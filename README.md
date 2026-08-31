# C → C++ → CUDA Mastery

Learning path from zero C/C++ knowledge to writing and optimizing CUDA kernels,
with CFD/HPC relevance in mind (finite-difference / stencil kernels as the
eventual capstone).

## How this repo works

- One folder per phase/week — code exercises live there as you go.
- `PROGRESS.md` is updated at the end of every study session (even a short one).
- Commit at the end of each day: `git add . && git commit -m "Week X Day Y: <topic>"`
- No pressure to be perfect — the log matters more than polish.

## Syllabus

### Phase 1 — C fundamentals (Weeks 1–3) — procedural only, no OOP (C has none)

**Week 1 — Basics**
1. Compilation model: source → object → binary; `gcc` setup
2. Variables, data types, `printf`/`scanf`
3. Operators, conditionals (`if/else`, `switch`)
4. Loops (`for`, `while`, `do-while`)
5. Functions: declaration, definition, call, return values
6. Small exercises after every topic

**Week 2 — Memory (the hard part)**
1. Pointers: address vs value
2. Pointer arithmetic
3. Arrays and how they relate to pointers
4. Strings in C (char arrays — no built-in string type)
5. Dynamic memory: `malloc`, `calloc`, `free`, and what leaks look like
6. Multi-dimensional arrays

**Week 3 — Structuring code**
1. Structs (grouping data — closest thing to an "object" in C)
2. Function pointers (how C fakes behavior-as-data)
3. Header/source separation (`.h` / `.c`)
4. Makefiles
5. Capstone: struct + dynamic-memory project (e.g. simple linear system
   solver or dynamic array-based vector library) — sets up OOP intuition

### Phase 2 — C++ and real OOP (Weeks 4–6)

**Week 4 — Classes**
1. Classes & objects, constructors/destructors
2. Encapsulation, access specifiers (`public`/`private`)

**Week 5 — Inheritance, polymorphism, templates**
1. Inheritance and polymorphism
2. Operator overloading
3. Templates (intro level)

**Week 6 — Capstone**
1. RAII, `new`/`delete` vs `malloc`/`free`
2. Rebuild the Week 3 C project as a proper C++ class hierarchy

### Phase 3 — CUDA foundations (Weeks 7–9)
1. GPU architecture basics: threads, blocks, grids, warps, SMs
2. Memory model: global, shared, constant, registers
3. Writing/launching first kernels
4. Host-device memory transfer, error checking
5. Rewrite the Phase-1 matrix multiply as a CUDA kernel
6. Profiling with `nsys`/`nvprof`

### Phase 4 — CUDA optimization (Weeks 10–13)
1. Memory coalescing, shared memory tiling
2. Occupancy, thread divergence
3. Streams and async execution
4. cuBLAS/Thrust for comparison against hand-written kernels
5. Capstone: port a small CFD-relevant stencil/finite-difference kernel to
   CUDA and benchmark against CPU

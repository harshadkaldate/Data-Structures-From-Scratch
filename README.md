# Data-Structures-From-Scratch
A clean, high-performance library of fundamental Data Structures and Algorithms built completely from scratch. No shortcuts, no built-in libraries—just pure pointer manipulation, manual memory management, and optimized logic to understand how code runs under the hood.

# Data Structures From Scratch 🚀

Welcome to my core DSA repository! This is a collection of fundamental data structures and algorithmic patterns built entirely from scratch. 

Modern high-level languages hide a lot of what happens behind the scenes. I built this library to strip away those abstractions and master low-level memory layouts, explicit pointer mechanics, and dynamic heap management without relying on built-in wrappers or standard libraries.

## 🔥 Why This Matters

* **Under the Hood Learning:** Every structure is built from the ground up using raw C/C++ so I can understand exactly how memory behaves.
* **Manual Memory Tracking:** I handle allocation (`malloc`/`calloc`) and deallocation (`free`) manually to ensure zero memory leaks and peak efficiency.
* **Performance Focused:** Every single script and function is analyzed and written to hit the absolute best theoretical time and space complexities.
* **Clean & Modular:** Written with clean code principles, clear documentation, and edge-case handling so it's actually readable and reusable.

## 🛠️ Tech Stack & Tools

* **Languages:** C / C++ (Chosen for direct hardware control and predictable performance)
* **Compiler:** GCC / Clang
* **Debugging & Profiling:** GDB for debugging, Valgrind for memory leak detection

## 📂 Repository Structure

```text
├── 01_Arrays_&_Strings/
│   ├── dynamic_array.c        # Custom vector implementation with geometric resizing
│   └── sliding_window.cpp     # Optimized logic for sequence and array tracking
├── 02_Linked_Lists/
│   ├── singly_linked_list.c   # Linear node mapping and pointer updates
│   └── doubly_linked_list.c   # Two-way traversal with optimized node allocation
├── 03_Stacks_&_Queues/
│   ├── stack_ll.c             # Stack implemented via dynamic linked list
│   └── circular_queue.c       # Fixed ring-buffer queue to prevent memory wastage
└── README.md                  # Project documentation

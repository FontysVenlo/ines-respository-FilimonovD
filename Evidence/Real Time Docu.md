## Real‑Time Programming Overview

**1. What is Real‑Time?**
Real-time systems must respond within predefined time bounds—often critical in embedded applications like motor control or sensor processing. Tasks are classified as:

* **Hard real-time**: missing a deadline is a failure
* **Soft real-time**: occasional delays are tolerated ([geeksforgeeks.org][1])

**2. Predictable Timing**

* Use **minimal interrupt and task-switch latency**
* Avoid **unbounded delays or blocking calls**
* Employ deterministic scheduling like fixed-priority or rate-monotonic scheduling ([en.wikipedia.org][2])

**3. Common Infrastructures**

* Bare‑metal loops with timing interrupts
* **RTOS (e.g., FreeRTOS, ThreadX)** for deterministic task scheduling ([freertos.org][3], [en.wikipedia.org][4])
* RTOS features include priority-based preemptive scheduling, semaphores, mutexes, and timers

---

##  Real‑Time in C++

| Feature                       | Description                                                                                                          |
| ----------------------------- | -------------------------------------------------------------------------------------------------------------------- |
| **No dynamic memory**         | Avoid `new`, `malloc`, `vector`, `string` in time-critical sections to prevent fragmentation ([en.wikipedia.org][4]) |
| **Use `constexpr`/static**    | Allocate at compile-time when possible                                                                               |
| **Priority-based scheduling** | Use RTOS to prioritize critical tasks                                                                                |
| **Minimize ISR work**         | ISRs should only signal tasks via semaphores or flags                                                                |
| **Avoid blocking in ISRs**    | Prevent priority inversions with proper locking and priority inheritance                                             |
| **Determine jitter bounds**   | Estimate worst-case task execution and scheduling delays                                                             |

---

## Resources

* **FreeRTOS Fundamentals** — good introduction to RTOS task models and timing ([freertos.org][3])
* **Eclipse ThreadX / Azure RTOS** — industry-grade RTOS with low latency and strong real-time guarantees ([en.wikipedia.org][4])
* **Embedded Real-Time Systems – GeeksforGeeks** — explains hard vs soft real-time and key RTOS concepts ([geeksforgeeks.org][1])

---


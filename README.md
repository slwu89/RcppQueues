# RcppQueues

## Fast Event Queues and Lookup for Discrete Event Simulation

* This package is designed to test and prototype fast event queues as part of the MASH (Modular Analysis & Simulation for Human Health) project, found here: http://smitdave.github.io/MASH-Development/index.html
* Source code will be in C++ taking advantage of STL data structures, and will use `RcppR6` (https://github.com/richfitz/RcppR6) to expose C++ classes as R6 objects in R.
* Documentation may be found at: https://slwu89.github.io/RcppQueues/
* Developer's Work Queue:
    * Human Event Queue
    * Human Event History
    * ImagoQ/EggQ
    * MBITES Mosquito History

## Rationale for RcppQueues

As the MASH project expands in scope, both in terms of numbers of users, all of whom may eventually wish to become developers, writing their own **MODULE**, and in terms of simulation size (from village to country to continent scale), the team faces the problem of juggling modularity and ease of extension with the need for performant code.

To this end, I decided to begin to write `RcppQueues`, a package that will slowly target the most computationally heavy parts of MASH and rewrite them in `C++`, using `RcppR6` to export `C++` source code to `R6` classes in `R`. By using `R6` OOP style framework, MASH is able to seamlessly integrate specific optimizations of its codebase. I chose the name `RcppQueues` because the obvious low hanging fruit was the design of the Human Event Queue, a key component across both MICRO and MACRO. The Event Queue, a critical component of MASH, is a dynamic list, a type of object `R` is not well suited to handling efficiently but which the `std::vector` object in `C++` handles with ease.

As the MASH project progresses, more high priority bits of the codebase will be identified for targeted code optimization. In this manner the dev team can work on optimizing the parts of MASH that need it the most, while still keeping the overall framework in `R6`, allowing new developers to code in a familiar language without the burden of needing to be able to program in `C++`. 

/*
=====================================================================================
Name:2.c
Author:Jils Patel
Description:Write a simple program to execute in an infinite loop at the background. 
            Go to /proc directory and identify all the process related information 
            in the corresponding proc directory.
Date: 07 September 2025   
=====================================================================================
*/

#include <stdio.h>   
#include <unistd.h>  
int main() {
    pid_t pid = getpid();
    printf("Process started. PID: %d\n", pid);
    while (1) {
        printf("Process %d is running\n", pid);
        sleep(2);
    }
    return 0;
}

/*
========================================================================
Output:jils@Inspiron-3593:/mnt/e/ss/hands-on-list-1$ gcc 2.c && ./a.out
       Process started. PID: 422
       Process 422 is running
       Process 422 is running
       Process 422 is running
       Process 422 is running

Output: jils@Inspiron-3593:/mnt/e/SS/hands-on-list-1$ cat /proc/422/status
        Name:   a.out
        Umask:  0022
        State:  S (sleeping)
        Tgid:   422
        Ngid:   0
        Pid:    422
        PPid:   314
        TracerPid:      0
        Uid:    1000    1000    1000    1000
        Gid:    1000    1000    1000    1000
        FDSize: 256
        Groups: 4 24 27 30 46 100 1000
        NStgid: 422
        NSpid:  422
        NSpgid: 422
        NSsid:  314
        Kthread:        0
        VmPeak:     2680 kB
        VmSize:     2680 kB
        VmLck:         0 kB
        VmPin:         0 kB
        VmHWM:      1536 kB
        VmRSS:      1536 kB
        RssAnon:               0 kB
        RssFile:            1536 kB
        RssShmem:              0 kB
        VmData:      224 kB
        VmStk:       132 kB
        VmExe:         4 kB
        VmLib:      1748 kB
        VmPTE:        44 kB
        VmSwap:        0 kB
        HugetlbPages:          0 kB
        CoreDumping:    0
        THP_enabled:    1
        untag_mask:     0xffffffffffffffff
        Threads:        1
        SigQ:   1/15153
        SigPnd: 0000000000000000
        ShdPnd: 0000000000000000
        SigBlk: 0000000000000000
        SigIgn: 0000000000000000
        SigCgt: 0000000000000000
        CapInh: 0000000000000000
        CapPrm: 0000000000000000
        CapEff: 0000000000000000
        CapBnd: 000001ffffffffff
        CapAmb: 0000000000000000
        NoNewPrivs:     0
        Seccomp:        0
        Seccomp_filters:        0
        Speculation_Store_Bypass:       thread vulnerable
        SpeculationIndirectBranch:      conditional enabled
        Cpus_allowed:   ff
        Cpus_allowed_list:      0-7
        Mems_allowed:   00000000,00000000,00000000,00000000,00000000,00000000,
        00000000,00000000,00000000,00000000,00000000,00000000,00000000,00000000,
        00000000,00000000,00000000,00000000,00000000,00000000,00000000,00000000,
        00000000,00000000,00000000,00000000,00000000,00000000,00000000,00000000,
        00000000,00000001
        Mems_allowed_list:      0
        voluntary_ctxt_switches:        36
        nonvoluntary_ctxt_switches:     0
========================================================================
*/


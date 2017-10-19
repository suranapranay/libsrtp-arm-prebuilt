/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _XT_BPF_H
#define _XT_BPF_H
#include <linux/filter.h>
#include <linux/limits.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <linux/types.h>
#define XT_BPF_MAX_NUM_INSTR 64
#define XT_BPF_PATH_MAX (XT_BPF_MAX_NUM_INSTR * sizeof(struct sock_filter))
struct bpf_prog;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct xt_bpf_info {
  __u16 bpf_program_num_elem;
  struct sock_filter bpf_program[XT_BPF_MAX_NUM_INSTR];
  struct bpf_prog * filter __attribute__((aligned(8)));
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum xt_bpf_modes {
  XT_BPF_MODE_BYTECODE,
  XT_BPF_MODE_FD_PINNED,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  XT_BPF_MODE_FD_ELF,
};
struct xt_bpf_info_v1 {
  __u16 mode;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u16 bpf_program_num_elem;
  __s32 fd;
  union {
    struct sock_filter bpf_program[XT_BPF_MAX_NUM_INSTR];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
    char path[XT_BPF_PATH_MAX];
  };
  struct bpf_prog * filter __attribute__((aligned(8)));
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif

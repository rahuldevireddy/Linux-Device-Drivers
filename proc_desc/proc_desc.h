
#ifndef _PROC_DESC_H_
#define _PROC_DESC_H_

#ifndef PD_MAJOR
#define PD_MAJOR 0		/* dynamic major number */
#endif

#ifndef PD_NR
#define PD_NR 1
#endif

/* Storage of a PID and its 'task_struct' */
struct pd_data {
  pid_t pid;			/* pid corresponding to below task_struct */
  struct task_struct *pd_ts;	/* pointer to task_struct */
};

struct pd_dev {
  struct pd_data *pd;
  struct semaphore sem;     /* mutual exclusion semaphore  */
  struct cdev cdev;	    /* Char device structure       */
};


#endif	/* _PROC_DESC_H_ */

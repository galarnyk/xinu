/* clock.h */

/* Intel 8254-2 clock chip constants */

#define	CLOCKBASE	0x40		/* I/O base port of clock chip	*/
#define	CLOCK0		CLOCKBASE
#define	CLKCNTL		(CLOCKBASE+3)	/* chip CSW I/O port		*/


#define CLKTICKS_PER_SEC  1000	/* clock timer resolution		*/

extern	uint32	clktime;	/* current time in secs since boot	*/
extern 	uint32 	clktimeaccu; 	/* Keeps track of total time elapsed in granularity of 1 msec */

extern	qid16	sleepq;		/* queue for sleeping processes		*/
extern	int32	slnonempty;	/* nonzero if sleepq is nonempty	*/
extern	int32	*sltop;		/* ptr to key in first item on sleepq	*/
extern	uint32	preempt;	/* preemption counter			*/

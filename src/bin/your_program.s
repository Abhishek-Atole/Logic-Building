	.file	"your_program.c"
	.text
	.globl	_Toggle
	.def	_Toggle;	.scl	2;	.type	32;	.endef
_Toggle:
LFB10:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	jmp	L2
L5:
	movl	8(%ebp), %eax
	movzbl	(%eax), %eax
	cmpb	$96, %al
	jle	L3
	movl	8(%ebp), %eax
	movzbl	(%eax), %eax
	cmpb	$122, %al
	jg	L3
	movl	8(%ebp), %eax
	movzbl	(%eax), %eax
	subl	$32, %eax
	movl	%eax, %edx
	movl	8(%ebp), %eax
	movb	%dl, (%eax)
	jmp	L4
L3:
	movl	8(%ebp), %eax
	movzbl	(%eax), %eax
	cmpb	$64, %al
	jle	L4
	movl	8(%ebp), %eax
	movzbl	(%eax), %eax
	cmpb	$90, %al
	jg	L4
	movl	8(%ebp), %eax
	movzbl	(%eax), %eax
	addl	$32, %eax
	movl	%eax, %edx
	movl	8(%ebp), %eax
	movb	%dl, (%eax)
L4:
	addl	$1, 8(%ebp)
L2:
	movl	8(%ebp), %eax
	movzbl	(%eax), %eax
	testb	%al, %al
	jne	L5
	nop
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE10:
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "Enter the String : \0"
LC1:
	.ascii "%[^'\12']s\0"
LC2:
	.ascii "Updated String is :  %s\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB11:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$48, %esp
	call	___main
	movl	$LC0, (%esp)
	call	_puts
	leal	28(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_scanf
	leal	28(%esp), %eax
	movl	%eax, (%esp)
	call	_Toggle
	leal	28(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC2, (%esp)
	call	_printf
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE11:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	_puts;	.scl	2;	.type	32;	.endef
	.def	_scanf;	.scl	2;	.type	32;	.endef
	.def	_printf;	.scl	2;	.type	32;	.endef

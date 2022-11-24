	.file	"main.c"
	.text
	.section	.rodata
.LC0:
	.string	"Anne"
.LC1:
	.string	"Colton"
.LC2:
	.string	"Corbin"
.LC3:
	.string	"Daniel"
.LC4:
	.string	"Danton"
.LC5:
	.string	"David"
.LC6:
	.string	"Gary"
.LC7:
	.string	"Holden"
.LC8:
	.string	"Ian"
.LC9:
	.string	"Jay"
.LC10:
	.string	"Jennie"
.LC11:
	.string	"Jimmy"
.LC12:
	.string	"Justin"
.LC13:
	.string	"Kalson"
.LC14:
	.string	"Kina"
.LC15:
	.string	"Matthew"
.LC16:
	.string	"Max"
.LC17:
	.string	"Michael"
.LC18:
	.string	"Ntuj"
.LC19:
	.string	"Philip"
.LC20:
	.string	"Richard"
.LC21:
	.string	"Samantha"
.LC22:
	.string	"Stuart"
.LC23:
	.string	"Swati"
.LC24:
	.string	"Timothy"
.LC25:
	.string	"Victor"
.LC26:
	.string	"Walton"
	.text
	.globl	main
	.type	main, @function
main:
.LFB6:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movq	$0, -16(%rbp)
	leaq	-16(%rbp), %rax
	leaq	.LC0(%rip), %rsi
	movq	%rax, %rdi
	call	add_node_end@PLT
	leaq	-16(%rbp), %rax
	leaq	.LC1(%rip), %rsi
	movq	%rax, %rdi
	call	add_node_end@PLT
	leaq	-16(%rbp), %rax
	leaq	.LC2(%rip), %rsi
	movq	%rax, %rdi
	call	add_node_end@PLT
	leaq	-16(%rbp), %rax
	leaq	.LC3(%rip), %rsi
	movq	%rax, %rdi
	call	add_node_end@PLT
	leaq	-16(%rbp), %rax
	leaq	.LC4(%rip), %rsi
	movq	%rax, %rdi
	call	add_node_end@PLT
	leaq	-16(%rbp), %rax
	leaq	.LC5(%rip), %rsi
	movq	%rax, %rdi
	call	add_node_end@PLT
	leaq	-16(%rbp), %rax
	leaq	.LC6(%rip), %rsi
	movq	%rax, %rdi
	call	add_node_end@PLT
	leaq	-16(%rbp), %rax
	leaq	.LC7(%rip), %rsi
	movq	%rax, %rdi
	call	add_node_end@PLT
	leaq	-16(%rbp), %rax
	leaq	.LC8(%rip), %rsi
	movq	%rax, %rdi
	call	add_node_end@PLT
	leaq	-16(%rbp), %rax
	leaq	.LC8(%rip), %rsi
	movq	%rax, %rdi
	call	add_node_end@PLT
	leaq	-16(%rbp), %rax
	leaq	.LC9(%rip), %rsi
	movq	%rax, %rdi
	call	add_node_end@PLT
	leaq	-16(%rbp), %rax
	leaq	.LC10(%rip), %rsi
	movq	%rax, %rdi
	call	add_node_end@PLT
	leaq	-16(%rbp), %rax
	leaq	.LC11(%rip), %rsi
	movq	%rax, %rdi
	call	add_node_end@PLT
	leaq	-16(%rbp), %rax
	leaq	.LC12(%rip), %rsi
	movq	%rax, %rdi
	call	add_node_end@PLT
	leaq	-16(%rbp), %rax
	leaq	.LC13(%rip), %rsi
	movq	%rax, %rdi
	call	add_node_end@PLT
	leaq	-16(%rbp), %rax
	leaq	.LC14(%rip), %rsi
	movq	%rax, %rdi
	call	add_node_end@PLT
	leaq	-16(%rbp), %rax
	leaq	.LC15(%rip), %rsi
	movq	%rax, %rdi
	call	add_node_end@PLT
	leaq	-16(%rbp), %rax
	leaq	.LC16(%rip), %rsi
	movq	%rax, %rdi
	call	add_node_end@PLT
	leaq	-16(%rbp), %rax
	leaq	.LC17(%rip), %rsi
	movq	%rax, %rdi
	call	add_node_end@PLT
	leaq	-16(%rbp), %rax
	leaq	.LC18(%rip), %rsi
	movq	%rax, %rdi
	call	add_node_end@PLT
	leaq	-16(%rbp), %rax
	leaq	.LC19(%rip), %rsi
	movq	%rax, %rdi
	call	add_node_end@PLT
	leaq	-16(%rbp), %rax
	leaq	.LC20(%rip), %rsi
	movq	%rax, %rdi
	call	add_node_end@PLT
	leaq	-16(%rbp), %rax
	leaq	.LC21(%rip), %rsi
	movq	%rax, %rdi
	call	add_node_end@PLT
	leaq	-16(%rbp), %rax
	leaq	.LC22(%rip), %rsi
	movq	%rax, %rdi
	call	add_node_end@PLT
	leaq	-16(%rbp), %rax
	leaq	.LC23(%rip), %rsi
	movq	%rax, %rdi
	call	add_node_end@PLT
	leaq	-16(%rbp), %rax
	leaq	.LC24(%rip), %rsi
	movq	%rax, %rdi
	call	add_node_end@PLT
	leaq	-16(%rbp), %rax
	leaq	.LC25(%rip), %rsi
	movq	%rax, %rdi
	call	add_node_end@PLT
	leaq	-16(%rbp), %rax
	leaq	.LC26(%rip), %rsi
	movq	%rax, %rdi
	call	add_node_end@PLT
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	print_list@PLT
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	xorq	%fs:40, %rdx
	je	.L3
	call	__stack_chk_fail@PLT
.L3:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:

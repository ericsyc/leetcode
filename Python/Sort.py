#!/usr/bin/env python
# -*- coding: utf-8 -*-
# @Date    : 2018-11-06 19:02:37
# @Author  : EricYichen (ericyichen@outlook.com)
# @Link    : ${link}
# @Version : $Id$

def BubbleSort(nums):
	l = len(nums)
	for i in range(1, l):
		for j in range(l-i):
			if nums[j] > nums[j+1]:
				nums[j], nums[j+1] = nums[j+1], nums[j]

def InsertSort(nums):
	l = len(nums)
	for i in range(1, l):
		temp = nums[i]
		j = i-1
		while j >= 0 and nums[j] >= temp:
			nums[j+1] = nums[j]
			j -= 1
		nums[j] = temp

def QuickSort(nums):
	def partition(nums, l, r):
		p = nums[l]
		i = l
		for j in range(l+1, r+1):
			if nums[j] < p:
				i += 1
				nums[j], nums[i] = nums[i], nums[j]
		nums[i], nums[l] = nums[l], nums[i]
		return i
	if nums:
		d = partition(nums, 0, len(num) - 1)
		QuickSort(nums[:d])
		QuickSort(nums[d+1:])

def QuickSelect(nums, k):
	# kth smallest
	def partition(nums, l, r):
		p = nums[l]
		i = l
		for j in range(l+1, r+1):
			if nums[j] < p:
				i += 1
				nums[j], nums[i] = nums[i], nums[j]
		nums[i], nums[l] = nums[l], nums[i]
		return i
	if nums:
		d = partition(nums, 0, len(nums) - 1)
		if d+1 == k:
			return nums[d]
		if d+1 < k:
			return QuickSelect(nums[d+1:], k-d-1)
		else:
			return QuickSelect(nums[:d], k)

def SelectSort(nums):
	l = len(nums)
	for i in range(l-1):
		small = i
		for j in range(i+1, l):
			if nums[j] < nums[small]:
				small = j
		if small != i:
			temp = nums[small]
			for j in range(small, i, -1):
				nums[j] = nums[j-1]
			nums[j] = temp

// LLVMBuilder.h
// Created by Rob Rix on 2009-12-29
// Copyright 2009 Monochrome Industries

#import <Foundation/Foundation.h>

@class LLVMContext, LLVMFunction, LLVMValue;

@interface LLVMBuilder : NSObject

+(LLVMBuilder *)builderWithContext:(LLVMContext *)context;

-(LLVMValue *)buildReturn:(LLVMValue *)value;
-(LLVMValue *)buildFunctionCall:(LLVMFunction *)function arguments:(NSArray *)arguments;
-(LLVMValue *)buildSelect:(LLVMValue *)condition then:(LLVMValue *)thenValue else:(LLVMValue *)elseValue;

@end
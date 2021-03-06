////////////////////////////////////////////////////////////////////////////////
//
//  TYPHOON FRAMEWORK
//  Copyright 2013, Jasper Blues & Contributors
//  All Rights Reserved.
//
//  NOTICE: The authors permit you to use, modify, and distribute this file
//  in accordance with the terms of the license agreement accompanying it.
//
////////////////////////////////////////////////////////////////////////////////

#import <Foundation/Foundation.h>

@class TyphoonStackElement;

@interface TyphoonCallStack : NSObject

+ (instancetype)stack;

- (void)push:(TyphoonStackElement*)stackItem;

- (TyphoonStackElement*)pop;

/**
* Peeks for the given key. If the key represents an instance undergoing initializer injection, raises a circular init exception.
*/
- (TyphoonStackElement*)peekForKey:(NSString*)key;

- (BOOL)isResolvingKey:(NSString*)key;

- (BOOL)isEmpty;


@end

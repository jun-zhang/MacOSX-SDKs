/*
    NSMagnificationGestureRecognizer.h
    Application Kit
    Copyright (c) 2013-2015, Apple Inc.
    All rights reserved.
*/

#import <Foundation/Foundation.h>
#import <AppKit/NSGestureRecognizer.h>

NS_ASSUME_NONNULL_BEGIN

NS_CLASS_AVAILABLE(10_10, NA)
@interface NSMagnificationGestureRecognizer : NSGestureRecognizer {
@private
    NSPoint _location;
    NSPoint _reserved1;
    NSInteger _mflags;
    CGFloat _magnification;
#ifndef __OBJC2__
    NSInteger _reserved2;
    NSInteger _reserved3;
#endif
}

@property CGFloat magnification;

@end

NS_ASSUME_NONNULL_END

/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface ObjectWrapper : NSObject
{
    id _obj;
    NSString *_name;
}

- (id)_initAndWrap:(id)fp8;	// IMP=0x302948b0
- (id)_name;	// IMP=0x30294af8
- (void)_notificationForwarder:(id)fp8;	// IMP=0x30294b08
- (id)_obj;	// IMP=0x30294b00
- (void)dealloc;	// IMP=0x30294a84

@end


/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <UIKit/UIScroller.h>

@interface UIScroller (Static)
- (void)_adjustEndOffset;	// IMP=0x323d01d0
- (void)_adjustScrollerIndicators:(BOOL)fp8 alwaysShowingThem:(BOOL)fp12;	// IMP=0x323cc7a8
- (BOOL)_continueScrollingAtOffset:(struct CGPoint)fp8;	// IMP=0x323cbbb4
- (void)_controlMouseDown:(struct __GSEvent *)fp8;	// IMP=0x323cbae8
- (void)_controlMouseDragged:(struct __GSEvent *)fp8;	// IMP=0x323cbb70
- (void)_controlMouseUp:(struct __GSEvent *)fp8;	// IMP=0x323cbb2c
- (void)_doContentHighlight;	// IMP=0x323cbc74
- (BOOL)_dragging;	// IMP=0x323cbc68
- (void)_notifyDidScroll;	// IMP=0x323cba54
- (BOOL)_passControlEvents;	// IMP=0x323cbae0
- (void)_runLoopModePopped:(id)fp8;	// IMP=0x323cbbbc
- (void)_smoothScroll:(double)fp8;	// IMP=0x323d0708
- (void)_startTimer:(BOOL)fp8;	// IMP=0x323ce310
@end


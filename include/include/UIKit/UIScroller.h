/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class UIScrollerIndicator;

@interface UIScroller : UIView
{
    struct CGSize _contentSize;
    id _delegate;
    UIScrollerIndicator *_verticalScrollerIndicator;
    UIScrollerIndicator *_horizontalScrollerIndicator;
    struct {
        unsigned int bounceEnabled:1;
        unsigned int rubberBanding:1;
        unsigned int scrollingDisabled:1;
        unsigned int scrollingDisabledOnMouseDown:1;
        unsigned int directionalLockEnabled:1;
        unsigned int eventMode:3;
        unsigned int dragging:1;
        unsigned int mouseDragged:1;
        unsigned int scrollTriggered:1;
        unsigned int dontSelect:1;
        unsigned int contentHighlighted:1;
        unsigned int lockVertical:1;
        unsigned int lockHorizontal:1;
        unsigned int keepLocked:1;
        unsigned int bouncedVertical:1;
        unsigned int bouncedHorizontal:1;
        unsigned int mouseUpGuard:1;
        unsigned int pushedTrackingMode:1;
        unsigned int delegateScrollerDidScroll:1;
        unsigned int delegateScrollerAdjustSmoothScrollEndVelocity:1;
        unsigned int delegateScrollerShouldAdjustSmoothScrollEndForVelocity:1;
        unsigned int offsetIgnoresContentSize:1;
        unsigned int usingThumb:1;
        unsigned int thumbDetectionEnabled:1;
        unsigned int showScrollerIndicators:1;
        unsigned int indicatorSubrect:1;
        unsigned int indicatorHideInGesture:1;
        unsigned int pinIndicatorToContent:1;
        unsigned int indicatorStyle:2;
        unsigned int multipleDrag:1;
        unsigned int showBackgroundShadow:1;
        unsigned int cancelNextContentMouseUp:1;
        unsigned int displayingScrollIndicators:1;
        unsigned int dontResetStartTouchPosition:1;
        unsigned int verticalIndicatorShrunk:1;
        unsigned int horizontalIndicatorShrunk:1;
        unsigned int highlightContentImmediately:1;
        unsigned int adjustedEndOffset:1;
        unsigned int ignoreNextMouseDrag:1;
        unsigned int reserved:22;
    } _scrollerFlags;
    float _scrollHysteresis;
    float _scrollDecelerationFactor;
    double _scrollToPointAnimationDuration;
    float _directionalScrollingAngle;
    float _farthestDistance;
    float _leftRubberBandWidth;
    float _rightRubberBandWidth;
    float _topRubberBandHeight;
    float _bottomRubberBandHeight;
    float _bottomBufferHeight;
    struct CGPoint _initialTouchPosition;
    struct CGPoint _startTouchPosition;
    double _startTouchTime;
    struct CGPoint _startOffset;
    struct CGPoint _lastTouchPosition;
    double _lastTouchTime;
    double _lastUpdateTime;
    struct CGPoint _lastUpdateOffset;
    UIView *_lastHighlightedView;
    CDAnonymousStruct6 _velocity;
    CDAnonymousStruct6 _previousVelocity;
    CDAnonymousStruct6 _decelerationFactor;
    CDAnonymousStruct6 _decelerationLnFactor;
    struct CGPoint _stopOffset;
    struct __GSHeartbeat *_scrollHeartbeat;
    struct CGRect _indicatorSubrect;
    UIView *_scrollerShadows[2];
    UIView *_contentShadows[8];
    id _scrollNotificationViews;
    struct CGSize _gridSize;
    CDAnonymousStruct6 _gridBounceLnFactor;
}

- (void)_didMoveFromWindow:(id)fp8 toWindow:(id)fp12;	// IMP=0x323c9d88
- (void)_hideScrollIndicators;	// IMP=0x323ca450
- (struct CGPoint)_pinnedScrollPointForPoint:(struct CGPoint)fp8;	// IMP=0x323cd5dc
- (void)_popTrackingRunLoopMode;	// IMP=0x323cb16c
- (void)_scrollAnimationEnded;	// IMP=0x323c9e18
- (BOOL)adjustSmoothScrollEnd:(CDAnonymousStruct6)fp8;	// IMP=0x323cb370
- (float)bottomBufferHeight;	// IMP=0x323c9cfc
- (BOOL)canHandleSwipes;	// IMP=0x323cb1d4
- (BOOL)cancelMouseTracking;	// IMP=0x323ce088
- (void)cancelNextContentMouseUp;	// IMP=0x323cb290
- (void)contentMouseUpInView:(id)fp8 withEvent:(struct __GSEvent *)fp12;	// IMP=0x323cb2a0
- (struct CGSize)contentSize;	// IMP=0x323c9be4
- (void)dealloc;	// IMP=0x323c9884
- (id)delegate;	// IMP=0x323ca9e0
- (void)displayScrollerIndicators;	// IMP=0x323ca4f0
- (struct CGPoint)dragStartOffset;	// IMP=0x323caf3c
- (void)gestureChanged:(struct __GSEvent *)fp8;	// IMP=0x323caff4
- (void)gestureEnded:(struct __GSEvent *)fp8;	// IMP=0x323cb0cc
- (void)gestureStarted:(struct __GSEvent *)fp8;	// IMP=0x323caf74
- (void)highlightView:(id)fp8 state:(BOOL)fp12;	// IMP=0x323cb2d0
- (id)hitTest:(struct CGPoint)fp8 forEvent:(struct __GSEvent *)fp16;	// IMP=0x323cadc0
- (id)initWithFrame:(struct CGRect)fp8;	// IMP=0x323c96d0
- (BOOL)isDecelerating;	// IMP=0x323cb360
- (BOOL)isScrolling;	// IMP=0x323cb350
- (void)mouseDown:(struct __GSEvent *)fp8;	// IMP=0x323cbcc8
- (void)mouseDragged:(struct __GSEvent *)fp8;	// IMP=0x323cf264
- (void)mouseUp:(struct __GSEvent *)fp8;	// IMP=0x323cea48
- (struct CGPoint)offset;	// IMP=0x323c9c14
- (BOOL)releaseRubberBandIfNecessary;	// IMP=0x323ca6ec
- (void)removeFromSuperview;	// IMP=0x323c9d30
- (void)scrollByDelta:(struct CGSize)fp8;	// IMP=0x323c9d04
- (void)scrollByDelta:(struct CGSize)fp8 animated:(BOOL)fp16;	// IMP=0x323cc4c0
- (void)scrollPointVisibleAtTopLeft:(struct CGPoint)fp8;	// IMP=0x323c9dec
- (void)scrollPointVisibleAtTopLeft:(struct CGPoint)fp8 animated:(BOOL)fp16;	// IMP=0x323c9e6c
- (void)scrollRectToVisible:(struct CGRect)fp8;	// IMP=0x323ca04c
- (void)scrollRectToVisible:(struct CGRect)fp8 animated:(BOOL)fp24;	// IMP=0x323cc2fc
- (double)scrollToPointAnimationDuration;	// IMP=0x323ca0b4
- (void)setAdjustForContentSizeChange:(BOOL)fp8;	// IMP=0x323c9bf4
- (void)setAllowsFourWayRubberBanding:(BOOL)fp8;	// IMP=0x323ca11c
- (void)setAllowsRubberBanding:(BOOL)fp8;	// IMP=0x323ca0e0
- (void)setBottomBufferHeight:(float)fp8;	// IMP=0x323c9c60
- (void)setBounces:(BOOL)fp8;	// IMP=0x323ca1b4
- (void)setContentSize:(struct CGSize)fp8;	// IMP=0x323cc584
- (void)setDelegate:(id)fp8;	// IMP=0x323ca93c
- (void)setDirectionalScrolling:(BOOL)fp8;	// IMP=0x323ca158
- (void)setDirectionalScrollingAngle:(float)fp8;	// IMP=0x323ca170
- (void)setEventMode:(int)fp8;	// IMP=0x323ca0c8
- (void)setFrame:(struct CGRect)fp8;	// IMP=0x323c998c
- (void)setGridSize:(struct CGSize)fp8;	// IMP=0x323ca1cc
- (void)setHighlightContentImmediately:(BOOL)fp8;	// IMP=0x323cb320
- (void)setOffset:(struct CGPoint)fp8;	// IMP=0x323cd71c
- (void)setOffsetForDragOffset:(struct CGPoint)fp8 withEvent:(struct __GSEvent *)fp16 duration:(float)fp20;	// IMP=0x323caf20
- (void)setRubberBand:(float)fp8 forEdges:(int)fp12;	// IMP=0x323ca670
- (void)setScrollDecelerationFactor:(float)fp8;	// IMP=0x323ca1ac
- (void)setScrollHysteresis:(float)fp8;	// IMP=0x323ca0c0
- (void)setScrollToPointAnimationDuration:(double)fp8;	// IMP=0x323ca0a8
- (void)setScrollerIndicatorStyle:(int)fp8;	// IMP=0x323ca3a4
- (void)setScrollerIndicatorSubrect:(struct CGRect)fp8;	// IMP=0x323ca2b0
- (void)setScrollerIndicatorsPinToContent:(BOOL)fp8;	// IMP=0x323ca34c
- (void)setScrollingEnabled:(BOOL)fp8;	// IMP=0x323ca18c
- (void)setShowBackgroundShadow:(BOOL)fp8;	// IMP=0x323ca9e8
- (void)setShowScrollerIndicators:(BOOL)fp8;	// IMP=0x323ca1f0
- (void)setThumbDetectionEnabled:(BOOL)fp8;	// IMP=0x323ca1d8
- (int)swipe:(int)fp8 withEvent:(struct __GSEvent *)fp12;	// IMP=0x323cb254
- (CDAnonymousStruct6)velocity;	// IMP=0x323cb338

@end


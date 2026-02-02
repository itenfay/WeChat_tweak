//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIControl.h>

@class NSMutableArray, NSString, UISwipeGestureRecognizer, WCFinderPageControlStyleConfig;

@interface WCFinderPageControl : UIControl
{
    _Bool _isMoving;
    _Bool _disableChangeEvent;
    long long _numberOfPages;
    unsigned long long _currentPage;
    WCFinderPageControlStyleConfig *_config;
    NSMutableArray *_dotsView;
    UISwipeGestureRecognizer *_swipeLeft;
    UISwipeGestureRecognizer *_swipeRight;
    struct UIEdgeInsets _touchInsets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UISwipeGestureRecognizer *swipeRight; // @synthesize swipeRight=_swipeRight;
@property(retain, nonatomic) UISwipeGestureRecognizer *swipeLeft; // @synthesize swipeLeft=_swipeLeft;
@property(retain, nonatomic) NSMutableArray *dotsView; // @synthesize dotsView=_dotsView;
@property(retain, nonatomic) WCFinderPageControlStyleConfig *config; // @synthesize config=_config;
@property(nonatomic) _Bool disableChangeEvent; // @synthesize disableChangeEvent=_disableChangeEvent;
@property(nonatomic) _Bool isMoving; // @synthesize isMoving=_isMoving;
@property(nonatomic) struct UIEdgeInsets touchInsets; // @synthesize touchInsets=_touchInsets;
@property(nonatomic) unsigned long long currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) long long numberOfPages; // @synthesize numberOfPages=_numberOfPages;
- (void)onTap:(id)arg1;
- (void)onSwipeRight;
- (void)onSwipeLeft;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateCurrentPageDisplay;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)setupGestures;
- (void)setupValues;
- (id)initWithFrame:(struct CGRect)arg1 config:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


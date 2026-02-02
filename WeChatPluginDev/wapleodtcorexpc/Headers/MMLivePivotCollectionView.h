//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionView.h>

@class CADisplayLink, MMLivePivotViewController, UIPanGestureRecognizer;
@protocol MMLivePivotCollectionViewScrollDelegate;

@interface MMLivePivotCollectionView : UICollectionView
{
    _Bool _forbidChangeContentOffset;
    _Bool _forbidScroll;
    _Bool _forbidScrollToOtherLiveRoom;
    _Bool _forbidChangeScrollState;
    _Bool _isScrollDown;
    id <MMLivePivotCollectionViewScrollDelegate> _scrollByDisplayLinkDelegate;
    MMLivePivotViewController *_controller;
    CADisplayLink *_scrollAnimationLink;
    UIPanGestureRecognizer *_forbidScrollPanGesture;
    unsigned long long _forbidScrollReasons;
    struct CGPoint _targetContentOffset;
}

+ (_Bool)isPivotEnableToScroll;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long forbidScrollReasons; // @synthesize forbidScrollReasons=_forbidScrollReasons;
@property(nonatomic) struct CGPoint targetContentOffset; // @synthesize targetContentOffset=_targetContentOffset;
@property(nonatomic) _Bool isScrollDown; // @synthesize isScrollDown=_isScrollDown;
@property(retain, nonatomic) UIPanGestureRecognizer *forbidScrollPanGesture; // @synthesize forbidScrollPanGesture=_forbidScrollPanGesture;
@property(retain, nonatomic) CADisplayLink *scrollAnimationLink; // @synthesize scrollAnimationLink=_scrollAnimationLink;
@property(nonatomic) __weak MMLivePivotViewController *controller; // @synthesize controller=_controller;
@property(nonatomic) _Bool forbidChangeScrollState; // @synthesize forbidChangeScrollState=_forbidChangeScrollState;
@property(nonatomic) _Bool forbidScrollToOtherLiveRoom; // @synthesize forbidScrollToOtherLiveRoom=_forbidScrollToOtherLiveRoom;
@property(nonatomic) _Bool forbidScroll; // @synthesize forbidScroll=_forbidScroll;
@property(nonatomic) _Bool forbidChangeContentOffset; // @synthesize forbidChangeContentOffset=_forbidChangeContentOffset;
@property(nonatomic) __weak id <MMLivePivotCollectionViewScrollDelegate> scrollByDisplayLinkDelegate; // @synthesize scrollByDisplayLinkDelegate=_scrollByDisplayLinkDelegate;
- (void)layoutSubviews;
- (void)scrollViewDidScroll:(id)arg1;
- (id)descriptionOfForbidScrollReason:(unsigned long long)arg1;
- (void)removeForbidScrollReason:(unsigned long long)arg1;
- (void)addForbidScrollReason:(unsigned long long)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)checkAndSetContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)checkAndSetContentOffset:(struct CGPoint)arg1;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)scrollToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)setScrollEnabled:(_Bool)arg1;
- (void)adjustedContentInsetDidChange;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)doZoomInAnimatior;
- (void)doZoomOutAnimator;
- (void)updateContentsAfterExpend;
- (void)updateContentsOnExpend;
- (void)updateContentsAfterMinify;
- (void)updateContentsOnMinify;
- (void)scrollAnimationLinkCallback;
- (void)scrollByDisplayLinkToContentOffsetY:(double)arg1;
- (void)setFrame:(struct CGRect)arg1;

@end


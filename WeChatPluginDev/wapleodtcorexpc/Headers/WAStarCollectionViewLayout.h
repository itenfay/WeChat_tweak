//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class CADisplayLink, NSIndexPath, NSString, UILongPressGestureRecognizer, UIPanGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol WAStarCollectinViewViewLayoutDelegate, WAStarCollectionViewLayoutDataSource, WAStarCollectionViewLayoutDelegate;

@interface WAStarCollectionViewLayout : UICollectionViewFlowLayout
{
    _Bool _disableEdgeScroll;
    _Bool _isDragInDeleteArea;
    _Bool _copyMoved;
    id <WAStarCollectionViewLayoutDelegate> _layoutDelegate;
    double _scrollingSpeed;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIView *_moveContainerView;
    double _extraBottomSpace;
    double _dragReplaceDuration;
    double _itemTransform;
    NSIndexPath *_dragBeginItemIndexPath;
    NSIndexPath *_selectedItemIndexPath;
    NSIndexPath *_currentViewIndexPath;
    NSIndexPath *_dragAddedFakeIndexPath;
    UIView *_currentView;
    UIView *_scaleView;
    CADisplayLink *_displayLink;
    long long _dragButtonEventType;
    unsigned long long _dragType;
    struct CGPoint _currentViewCenter;
    struct CGPoint _panTranslationInCollectionView;
    struct UIEdgeInsets _scrollingTriggerEdgeInsets;
    struct UIEdgeInsets _scrollingExtendedEdgeInsets;
}

+ (double)contentHeight:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool copyMoved; // @synthesize copyMoved=_copyMoved;
@property(nonatomic) unsigned long long dragType; // @synthesize dragType=_dragType;
@property(nonatomic) long long dragButtonEventType; // @synthesize dragButtonEventType=_dragButtonEventType;
@property(nonatomic) _Bool isDragInDeleteArea; // @synthesize isDragInDeleteArea=_isDragInDeleteArea;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) struct CGPoint panTranslationInCollectionView; // @synthesize panTranslationInCollectionView=_panTranslationInCollectionView;
@property(retain, nonatomic) UIView *scaleView; // @synthesize scaleView=_scaleView;
@property(nonatomic) struct CGPoint currentViewCenter; // @synthesize currentViewCenter=_currentViewCenter;
@property(retain, nonatomic) UIView *currentView; // @synthesize currentView=_currentView;
@property(retain, nonatomic) NSIndexPath *dragAddedFakeIndexPath; // @synthesize dragAddedFakeIndexPath=_dragAddedFakeIndexPath;
@property(retain, nonatomic) NSIndexPath *currentViewIndexPath; // @synthesize currentViewIndexPath=_currentViewIndexPath;
@property(retain, nonatomic) NSIndexPath *selectedItemIndexPath; // @synthesize selectedItemIndexPath=_selectedItemIndexPath;
@property(retain, nonatomic) NSIndexPath *dragBeginItemIndexPath; // @synthesize dragBeginItemIndexPath=_dragBeginItemIndexPath;
@property(nonatomic) _Bool disableEdgeScroll; // @synthesize disableEdgeScroll=_disableEdgeScroll;
@property(nonatomic) double itemTransform; // @synthesize itemTransform=_itemTransform;
@property(nonatomic) double dragReplaceDuration; // @synthesize dragReplaceDuration=_dragReplaceDuration;
@property(nonatomic) double extraBottomSpace; // @synthesize extraBottomSpace=_extraBottomSpace;
@property(nonatomic) UIView *moveContainerView; // @synthesize moveContainerView=_moveContainerView;
@property(readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(readonly, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(nonatomic) struct UIEdgeInsets scrollingExtendedEdgeInsets; // @synthesize scrollingExtendedEdgeInsets=_scrollingExtendedEdgeInsets;
@property(nonatomic) struct UIEdgeInsets scrollingTriggerEdgeInsets; // @synthesize scrollingTriggerEdgeInsets=_scrollingTriggerEdgeInsets;
@property(nonatomic) double scrollingSpeed; // @synthesize scrollingSpeed=_scrollingSpeed;
@property(nonatomic) __weak id <WAStarCollectionViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
- (void)setUpGestureRecognizersOnCollectionView;
- (void)handleApplicationWillResignActive:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)releaseCurrentView;
- (void)handleTapGesture:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)animateScaleViewBackToPosition:(id)arg1;
- (void)handleLongPressGesture:(id)arg1;
- (void)handleScroll:(id)arg1;
- (void)setupScrollTimerInDirection:(long long)arg1;
- (void)setupScrollDown;
- (void)setupScrollUp;
- (void)invalidatesScrollTimer;
- (void)invalidateLayoutIfNecessary;
- (id)getCurrentViewIndexPath;
@property(readonly, nonatomic) id <WAStarCollectinViewViewLayoutDelegate> delegate;
@property(readonly, nonatomic) id <WAStarCollectionViewLayoutDataSource> dataSource;
- (void)applyLayoutAttributes:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)tearDownCollectionView;
- (void)setupCollectionView;
- (void)setGridDefaults;
- (struct CGSize)collectionViewContentSize;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class CADisplayLink, NSIndexPath, NSString, UIView;

@interface WATaskBarCollectionViewLayout : UICollectionViewFlowLayout
{
    double _scrollingSpeed;
    double _extraBottomSpace;
    double _dragReplaceDuration;
    double _itemTransform;
    NSIndexPath *_currentViewIndexPath;
    UIView *_currentView;
    UIView *_scaleView;
    CADisplayLink *_displayLink;
    struct CGPoint _currentViewCenter;
    struct CGPoint _panTranslationInCollectionView;
    struct UIEdgeInsets _scrollingTriggerEdgeInsets;
    struct UIEdgeInsets _scrollingExtendedEdgeInsets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) struct CGPoint panTranslationInCollectionView; // @synthesize panTranslationInCollectionView=_panTranslationInCollectionView;
@property(retain, nonatomic) UIView *scaleView; // @synthesize scaleView=_scaleView;
@property(nonatomic) struct CGPoint currentViewCenter; // @synthesize currentViewCenter=_currentViewCenter;
@property(retain, nonatomic) UIView *currentView; // @synthesize currentView=_currentView;
@property(retain, nonatomic) NSIndexPath *currentViewIndexPath; // @synthesize currentViewIndexPath=_currentViewIndexPath;
@property(nonatomic) double itemTransform; // @synthesize itemTransform=_itemTransform;
@property(nonatomic) double dragReplaceDuration; // @synthesize dragReplaceDuration=_dragReplaceDuration;
@property(nonatomic) double extraBottomSpace; // @synthesize extraBottomSpace=_extraBottomSpace;
@property(nonatomic) struct UIEdgeInsets scrollingExtendedEdgeInsets; // @synthesize scrollingExtendedEdgeInsets=_scrollingExtendedEdgeInsets;
@property(nonatomic) struct UIEdgeInsets scrollingTriggerEdgeInsets; // @synthesize scrollingTriggerEdgeInsets=_scrollingTriggerEdgeInsets;
@property(nonatomic) double scrollingSpeed; // @synthesize scrollingSpeed=_scrollingSpeed;
- (void)setUpGestureRecognizersOnCollectionView;
- (void)handleApplicationWillResignActive:(id)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
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

